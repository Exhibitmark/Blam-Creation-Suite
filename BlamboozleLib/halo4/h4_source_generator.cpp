#include "blamboozlelib-private-pch.h"

std::string escape_string(std::string str)
{
	std::string result;
	result.reserve(str.size() * 2); // worst case scenario

	const char* current_pos = str.data();
	while (*current_pos)
	{
		char ch = *current_pos;

		if (ch == '\r' && current_pos[1] == '\n') {}
		else
		{
			switch (ch)
			{
			case '\'': result += "\\'"; break;
			case '\"': result += "\\\""; break;
			case '\?': result += "\\?"; break;
			case '\\': result += "\\\\"; break;
			case '\a': result += "\\a"; break;
			case '\b': result += "\\b"; break;
			case '\f': result += "\\f"; break;
			case '\n': result += "\\n"; break;
			case '\r': result += "\\r"; break;
			case '\t': result += "\\t"; break;
			case '\v': result += "\\v"; break;
			default: result += ch; break;
			}
		}

		current_pos++;
	}

	return result;
}

c_h4_source_generator::c_h4_source_generator(c_h4_blamboozle& blamboozle, c_h4_generator_preprocessor& preprocessor) :
	blamboozle(blamboozle),
	preprocessor(preprocessor)
{
	for (c_h4_source_file* source_file : preprocessor.source_files)
	{
		std::stringstream& hs = source_file->header_stream;
		std::stringstream& ss = source_file->source_stream;

		hs << "#pragma once" << std::endl << std::endl;
		ss << "#include <blamgen.h>" << std::endl << std::endl;

		for (c_h4_tag_block_container* tag_block_container : source_file->tag_blocks)
		{
			if (tag_block_container->is_tag) continue; // these are created manually through c_h4_tag_group_container
			create_tag_block_header(hs, *tag_block_container);
			create_tag_block_source(ss, *tag_block_container);
		}
		hs << std::endl;

		for (c_h4_tag_group_container* tag_group_container : source_file->tag_groups)
		{
			create_tag_group_header(hs, *tag_group_container);
			create_tag_group_source(ss, *tag_group_container);
		}
	}

	for (c_h4_source_file* source_file : preprocessor.source_files)
	{
		std::stringstream& hs = source_file->header_stream;
		std::stringstream& ss = source_file->source_stream;

		std::string header_code = hs.str();
		std::string source_code = ss.str();

		bool header_write_file_result = write_file_from_memory(source_file->full_header_output_filepath.c_str(), header_code.c_str(), header_code.size());
		ASSERT(header_write_file_result);
		bool source_write_file_result = write_file_from_memory(source_file->full_source_output_filepath.c_str(), source_code.c_str(), source_code.size());
		ASSERT(source_write_file_result);
	}

	{
		std::string output_directory = c_command_line::get_command_line_arg("-generated-output");
		ASSERT(!output_directory.empty());
		std::string source_output_filepath = output_directory + "\\tag_groups.cpp";

		{
			std::string header_output_filepath = output_directory + "\\tag_groups.h";
			std::stringstream hs;
			create_blamgen_header(hs);
			std::string header_code = hs.str();
			bool blamgen_header_write_file_result = write_file_from_memory(header_output_filepath.c_str(), header_code.c_str(), header_code.size());
			ASSERT(blamgen_header_write_file_result);
		}
		{
			std::string source_output_filepath = output_directory + "\\tag_groups.cpp";
			std::stringstream ss;
			create_blamgen_source(ss);
			std::string source_code = ss.str();
			bool blamgen_source_write_file_result = write_file_from_memory(source_output_filepath.c_str(), source_code.c_str(), source_code.size());
			ASSERT(blamgen_source_write_file_result);
		}
		{
			std::string source_output_filepath = output_directory + "\\constants.txt";
			std::stringstream ss;
			for (std::string& defintion : preprocessor.maximum_count_constants_source_lines_define)
			{
				ss << defintion;
			}
			ss << std::endl;
			for (std::string& defintion : preprocessor.maximum_count_constants_source_lines_constant)
			{
				ss << defintion;
			}
			ss << std::endl;
			for (std::string& defintion : preprocessor.maximum_count_constants_source_lines_struct)
			{
				ss << defintion;
			}
			ss << std::endl;
			std::string source_code = ss.str();
			bool blamgen_source_write_file_result = write_file_from_memory(source_output_filepath.c_str(), source_code.c_str(), source_code.size());
			ASSERT(blamgen_source_write_file_result);
		}
	}
}

c_h4_source_generator::~c_h4_source_generator()
{

}
#include <set>

void c_h4_source_generator::create_blamgen_header(std::stringstream& hs)
{
	std::set<std::string> includes;
	//for (c_h4_tag_group_container* tag_group_container : preprocessor.tag_group_containers)
	//{
	//	c_h4_tag_group& tag_group = tag_group_container->tag_group;
	//	c_h4_tag_struct* tag_struct = tag_group.tag_block->tag_struct;

	//	includes.emplace(tag_group_container->source_file.header_output_filepath);
	//}
	for (c_h4_source_file* source_file : preprocessor.source_files)
	{
		includes.emplace(source_file->header_output_filepath);
	}

	for (const std::string& include : includes)
	{
		hs << "#include \"" << include  << "\"" << std::endl;
	}
	hs << std::endl;
	hs << "extern s_tag_group* tag_groups[" << preprocessor.tag_group_containers.size() << "];" << std::endl;
	hs << std::endl;
}

void c_h4_source_generator::create_blamgen_source(std::stringstream& ss)
{
	ss << "#include <blamgen.h>" << std::endl << std::endl;
	ss << "extern s_tag_group* tag_groups[" << preprocessor.tag_group_containers.size() << "] = " << std::endl;
	ss << "{" << std::endl;
	for (c_h4_tag_group_container* tag_group_container : preprocessor.tag_group_containers)
	{
		c_h4_tag_group& tag_group = tag_group_container->tag_group;
		c_h4_tag_struct* tag_struct = tag_group.tag_block->tag_struct;

		ss << "\t&" << tag_group_container->tag_group.name << "_group," << std::endl;
	}
	ss << "};" << std::endl;
	ss << std::endl;
}

void c_h4_source_generator::create_tag_group_header(std::stringstream& hs, c_h4_tag_group_container& tag_group_container)
{
	c_h4_tag_group& tag_group = tag_group_container.tag_group;
	c_h4_tag_struct* tag_struct = tag_group.tag_block->tag_struct;

	hs << "extern const unsigned long " << tag_group_container.name_uppercase << "_TAG;" << std::endl;
	hs << "extern s_tag_block " << tag_group.name << "_block;" << std::endl;
	hs << "extern s_tag_group " << tag_group.name << "_group;" << std::endl;

}

std::string parse_tag_group_string(const tag_group& group_tag)
{
	std::string result;
	group_tag.name[3] ? result += group_tag.name[3] : (result.empty() ? "" : "\\0");
	group_tag.name[2] ? result += group_tag.name[2] : (result.empty() ? "" : "\\0");
	group_tag.name[1] ? result += group_tag.name[1] : (result.empty() ? "" : "\\0");
	group_tag.name[0] ? result += group_tag.name[0] : (result.empty() ? "" : "\\0");

	return result;
}

void c_h4_source_generator::create_tag_block_header(std::stringstream& hs, c_h4_tag_block_container& tag_block_container)
{
	c_h4_tag_block& tag_block = tag_block_container.block;
	c_h4_tag_struct* tag_struct = tag_block.tag_struct;

	hs << "extern s_tag_block " << tag_block_container.name << "_block;" << std::endl;

}
void c_h4_source_generator::create_tag_block_source(std::stringstream& ss, c_h4_tag_block_container& tag_block_container)
{
	c_h4_tag_block& tag_block = tag_block_container.block;
	c_h4_tag_struct* tag_struct = tag_block.tag_struct;

	ss << "TAG_BLOCK(" << tag_block_container.name << ", " << tag_block.maximum_element_count_string << ")" << std::endl;
	ss << "{" << std::endl;
	generate_tag_fields_source(ss, tag_struct->tag_fields);
	ss << "};" << std::endl;
	ss << std::endl;

}

void c_h4_source_generator::create_tag_group_source(std::stringstream& ss, c_h4_tag_group_container& tag_group_container)
{
	c_h4_tag_group& tag_group = tag_group_container.tag_group;
	c_h4_tag_struct* tag_struct = tag_group.tag_block->tag_struct;
	c_h4_tag_block_container* tag_block_container = preprocessor.find_existing_tag_block_container(tag_group.tag_block);

	ss << "const unsigned long " << tag_group_container.name_uppercase << "_TAG = '" << parse_tag_group_string(tag_group.group_tag) << "';" << std::endl << std::endl;

	if (tag_group.parent_group_tag.value == 0xFFFFFFFF)
	{
		if (tag_group_container.use_standard_naming_convention)
		{
			ss << "TAG_GROUP(" << tag_group_container.name << ", " << tag_group_container.name_uppercase << "_TAG)" << std::endl;
		}
		else
		{
			ss << "TAG_GROUP_FROM_BLOCK(" << tag_group_container.name << ", " << tag_group_container.name_uppercase << "_TAG, " << tag_block_container->name << "_block)" << std::endl;
			
		}
	}
	else
	{
		if (tag_group_container.use_standard_naming_convention)
		{
			c_h4_tag_group_container* parent_tag_group_container = preprocessor.get_container_by_group_tag(tag_group.parent_group_tag.value);
			ASSERT(parent_tag_group_container);
			c_h4_tag_group& parent_tag_group = parent_tag_group_container->tag_group;

			ss << "TAG_GROUP_INHERIT(" << tag_group_container.name << ", " << tag_group_container.name_uppercase << "_TAG, " << parent_tag_group.name << ", " << parent_tag_group_container->name_uppercase << "_TAG)" << std::endl;
		}
		else
		{
			FATAL_ERROR(L"Not implemented");
		}
	}

	if (tag_group_container.use_standard_naming_convention)
	{
		ss << "{" << std::endl;
		generate_tag_fields_source(ss, tag_struct->tag_fields);
		ss << "};" << std::endl;
	}
	ss << std::endl;
}

void c_h4_source_generator::generate_tag_fields_source(std::stringstream& ss, std::vector<c_h4_tag_field*>& tag_fields)
{
	for (c_h4_tag_field* tag_field : tag_fields)
	{
		const char* field_generic_type_name = h4_field_type_to_generic_field_type(tag_field->field_type);
		std::string field_name = tag_field->name ? escape_string(tag_field->name) : "";

		switch (tag_field->field_type)
		{
		case _h4_field_type_string:
		case _h4_field_type_long_string:
		case _h4_field_type_string_id:
		case _h4_field_type_old_string_id:
		case _h4_field_type_char_integer:
		case _h4_field_type_short_integer:
		case _h4_field_type_long_integer:
		case _h4_field_type_int64_integer:
		case _h4_field_type_angle:
		case _h4_field_type_tag:
		case _h4_field_type_char_enum:
		case _h4_field_type_enum:
		case _h4_field_type_long_enum:
		case _h4_field_type_long_flags:
		case _h4_field_type_word_flags:
		case _h4_field_type_byte_flags:
		case _h4_field_type_point_2d:
		case _h4_field_type_rectangle_2d:
		case _h4_field_type_rgb_color:
		case _h4_field_type_argb_color:
		case _h4_field_type_real:
		case _h4_field_type_real_fraction:
		case _h4_field_type_real_point_2d:
		case _h4_field_type_real_point_3d:
		case _h4_field_type_real_vector_2d:
		case _h4_field_type_real_vector_3d:
		case _h4_field_type_real_quaternion:
		case _h4_field_type_real_euler_angles_2d:
		case _h4_field_type_real_euler_angles_3d:
		case _h4_field_type_real_plane_2d:
		case _h4_field_type_real_plane_3d:
		case _h4_field_type_real_rgb_color:
		case _h4_field_type_real_argb_color:
		case _h4_field_type_real_hsv_color:
		case _h4_field_type_real_ahsv_color:
		case _h4_field_type_short_bounds:
		case _h4_field_type_angle_bounds:
		case _h4_field_type_real_bounds:
		case _h4_field_type_real_fraction_bounds:
		case _h4_field_type_tag_reference:
		case _h4_field_type_long_block_flags:
		case _h4_field_type_word_block_flags:
		case _h4_field_type_byte_block_flags:
		case _h4_field_type_char_block_index:
		case _h4_field_type_short_block_index:
		case _h4_field_type_long_block_index:
		case _h4_field_type_custom_char_block_index:
		case _h4_field_type_custom_short_block_index:
		case _h4_field_type_custom_long_block_index:
		case _h4_field_type_data:
		case _h4_field_type_vertex_buffer:
		case _h4_field_type_non_cache_runtime_value:
		case _h4_field_type_explanation:
		case _h4_field_type_custom:
		case _h4_field_type_struct:
		case _h4_field_type_array:
		case _h4_field_type_pageable:
		case _h4_field_type_api_interop:
		case _h4_field_type_terminator:
		case _h4_field_type_byte_integer:
		case _h4_field_type_word_integer:
		case _h4_field_type_dword_integer:
		case _h4_field_type_qword_integer:
		case _h4_field_type_useless_pad:
			if (tag_field->name)
			{
				ss << "\t{ " << field_generic_type_name << ", \"" << field_name << "\" }," << std::endl;
			}
			else
			{
				ss << "\t{ " << field_generic_type_name << " }," << std::endl;
			}
			break;
		case _h4_field_type_block:
		{
			c_h4_tag_field_block* block_field = dynamic_cast<c_h4_tag_field_block*>(tag_field);
			ASSERT(block_field);
			ASSERT(block_field->name);
			c_h4_tag_block_container* tag_block_container = preprocessor.find_existing_tag_block_container(block_field->tag_block_definition);
			ASSERT(tag_block_container);

			ss << "\t{ " << field_generic_type_name << ", \"" << field_name << "\", &" << tag_block_container->name << "_block }," << std::endl;
			break;
		}
		case _h4_field_type_pad:
		case _h4_field_type_skip:
		{
			c_h4_tag_field_skip* skip_field = dynamic_cast<c_h4_tag_field_skip*>(tag_field);
			c_h4_tag_field_pad* pad_field = dynamic_cast<c_h4_tag_field_pad*>(tag_field);

			uint32_t argument = 0;
			if (skip_field) argument = skip_field->length;
			if (pad_field) argument = pad_field->padding;

			if (tag_field->name)
			{
				ss << "\t{ " << field_generic_type_name << ", \"" << field_name << "\", " << argument << " }," << std::endl;
			}
			else
			{
				ss << "\t{ " << field_generic_type_name << ", " << argument << " }," << std::endl;
			}
			break;
		}
		default:
			throw; // unexpected type
		}
	}
	ss << "\t{ " << "_field_terminator" << " }," << std::endl;
}
