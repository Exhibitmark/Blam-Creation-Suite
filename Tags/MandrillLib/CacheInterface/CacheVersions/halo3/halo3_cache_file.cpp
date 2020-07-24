#include "mandrilllib-private-pch.h"

using namespace gen3;
using namespace halo3;

c_halo3_cache_file::c_halo3_cache_file(const std::wstring& map_filepath) :
	c_gen3_cache_file(map_filepath, _engine_type_halo3, _platform_type_pc),
	halo3_cache_file_header(*static_cast<halo3::s_cache_file_header*>(&cache_file_header)),
	halo3_cache_file_tags_header(nullptr)
{
	char* cache_file_data = virtual_memory_container.get_data();

	const s_section_cache& debug_section = get_section(gen3::_cache_file_section_index_debug);
	const s_section_cache& resource_section = get_section(gen3::_cache_file_section_index_resource);
	const s_section_cache& tags_section = get_section(gen3::_cache_file_section_index_tags);
	const s_section_cache& localization_section = get_section(gen3::_cache_file_section_index_localization);

	if (debug_section.size > 0)
	{
		string_ids_buffer = cache_file_data + halo3_cache_file_header.string_table_offset;
		string_id_indices = reinterpret_cast<long*>(cache_file_data + halo3_cache_file_header.string_table_indices_offset);

		filenames_buffer = cache_file_data + halo3_cache_file_header.file_table_offset;
		filename_indices = reinterpret_cast<long*>(cache_file_data + halo3_cache_file_header.file_table_indices_offset);
	}

	if (tags_section.size > 0)
	{
		tags_buffer = cache_file_data + halo3_cache_file_header.tag_buffer_offset;
		halo3_cache_file_tags_header = reinterpret_cast<s_cache_file_tags_header*>(tags_buffer + convert_virtual_address(halo3_cache_file_header.tags_header_address));

		cache_file_tag_groups = reinterpret_cast<s_cache_file_tag_group*>(tags_buffer + convert_virtual_address(halo3_cache_file_tags_header->tag_groups.address));
		for (uint32_t group_index = 0; group_index < halo3_cache_file_tags_header->tag_groups.count; group_index++)
		{
			s_cache_file_tag_group& cache_file_tag_group = cache_file_tag_groups[group_index];
			debug_point;

			tag_group_interfaces.push_back(new c_gen3_tag_group_interface(*this, group_index));
		}

		cache_file_tag_instances = reinterpret_cast<s_cache_file_tag_instance*>(tags_buffer + convert_virtual_address(halo3_cache_file_tags_header->tag_instances.address));
		for (uint32_t tag_instance = 0; tag_instance < halo3_cache_file_tags_header->tag_instances.count; tag_instance++)
		{
			s_cache_file_tag_instance& cache_file_tag_instance = cache_file_tag_instances[tag_instance];
			debug_point;

			const char* name = string_ids_buffer + string_id_indices[0];

			tag_interfaces.push_back(new c_gen3_tag_interface(*this, tag_instance));
		}
	}

	on_init();
}

c_halo3_cache_file::~c_halo3_cache_file()
{

}

e_resource_type c_halo3_cache_file::get_resource_type_by_index(uint32_t index) const
{
	using namespace blofeld::halo3;

	c_tag_group_interface* cache_file_resource_gestalt_group = get_tag_group_interface_by_group_id(blofeld::CACHE_FILE_RESOURCE_GESTALT_TAG);
	ASSERT(cache_file_resource_gestalt_group != nullptr);
	ASSERT(cache_file_resource_gestalt_group->get_tag_interfaces_count() > 0);
	c_tag_interface* cache_file_resource_gestalt = cache_file_resource_gestalt_group->get_tag_interfaces()[0];

	auto halo3_cache_file_resource_gestalt = cache_file_resource_gestalt->get_virtual_tag_interface<s_cache_file_resource_gestalt_block_struct>();
	ASSERT(halo3_cache_file_resource_gestalt != nullptr);

	auto& resource_type_identifier = halo3_cache_file_resource_gestalt->resource_type_identifiers_block[index];
	GUID& guid = *reinterpret_cast<GUID*>(&resource_type_identifier.identifier_part_0);

	static GUID bitmap_texture_interop_resource_guid			= UuidFromString2("A9542662-42AB-C80B-049A-C0899CFF3BF3");
	static GUID render_geometry_api_resource_definition_guid	= UuidFromString2("8AEB8021-4164-F60A-7091-0C9745553623");
	static GUID constant_buffer_resource_definition_guid		= UuidFromString2("0A547ABF-4CC0-0279-0E11-B8A3EA347A53");
	static GUID sound_resource_definition_guid					= UuidFromString2("C0BA15AA-4B7B-B9CB-A769-989DBBC835D3");
	static GUID model_animation_tag_resource_guid				= UuidFromString2("09439BE6-48B1-3BDA-AD2E-4799110628A1");
	static GUID structure_bsp_tag_resources_guid				= UuidFromString2("72D3359D-4E28-5BCF-04A5-69A20CE623D9");

	e_resource_type resource_type = k_num_resource_types;

	if (IsEqualGUID(guid,	bitmap_texture_interop_resource_guid						)) resource_type = _resource_type_bitmap_texture_interop_resource;
	else if (IsEqualGUID(guid,	render_geometry_api_resource_definition_guid			)) resource_type = _resource_type_render_geometry_api_resource_definition;
	else if (IsEqualGUID(guid,	constant_buffer_resource_definition_guid				)) resource_type = _resource_type_constant_buffer_resource_definition;
	else if (IsEqualGUID(guid,	sound_resource_definition_guid							)) resource_type = _resource_type_sound_resource_definition;
	else if (IsEqualGUID(guid,	model_animation_tag_resource_guid						)) resource_type = _resource_type_model_animation_tag_resource;
	else if (IsEqualGUID(guid,	structure_bsp_tag_resources_guid						)) resource_type = _resource_type_structure_bsp_tag_resources;

	ASSERT(resource_type != k_num_resource_types);

	return resource_type;
}

e_interop_type c_halo3_cache_file::get_interop_type_by_index(uint32_t index) const
{
	using namespace blofeld::haloreach;

	c_tag_group_interface* cache_file_resource_gestalt_group = get_tag_group_interface_by_group_id(blofeld::CACHE_FILE_RESOURCE_GESTALT_TAG);
	ASSERT(cache_file_resource_gestalt_group != nullptr);
	ASSERT(cache_file_resource_gestalt_group->get_tag_interfaces_count() > 0);
	c_tag_interface* cache_file_resource_gestalt = cache_file_resource_gestalt_group->get_tag_interfaces()[0];

	auto haloreach_cache_file_resource_gestalt = cache_file_resource_gestalt->get_virtual_tag_interface<s_cache_file_resource_gestalt_block_struct>();
	ASSERT(haloreach_cache_file_resource_gestalt != nullptr);

	auto& interop_type_identifier = haloreach_cache_file_resource_gestalt->interop_type_identifiers_block[index];
	GUID& guid = *reinterpret_cast<GUID*>(&interop_type_identifier.identifier_part_0);


	static GUID tag_d3d_vertex_buffer_guid				= UuidFromString2("12721193-4648-798F-254D-8EB0DF0759FB");
	static GUID tag_d3d_index_buffer_guid				= UuidFromString2("08380D7D-4112-F14D-3471-CE8270A7431E");
	static GUID tag_d3d_texture_guid					= UuidFromString2("64017671-46F0-437A-C422-339AE3967051");
	static GUID tag_d3d_texture_interleaved_guid		= UuidFromString2("90486D0A-4941-944A-9AF0-E79F11E6E239");	
	static GUID constant_buffer_guid					= UuidFromString2("F2C8DD55-46A0-C9D0-A746-8D9B17698FBC");

	e_interop_type interop_type = k_num_interop_types;

	if (IsEqualGUID(guid, tag_d3d_vertex_buffer_guid))					interop_type = _interop_type_tag_d3d_vertex_buffer;
	if (IsEqualGUID(guid, tag_d3d_index_buffer_guid))					interop_type = _interop_type_tag_d3d_index_buffer;
	if (IsEqualGUID(guid, tag_d3d_texture_guid))						interop_type = _interop_type_tag_d3d_texture;
	if (IsEqualGUID(guid, tag_d3d_texture_interleaved_guid))			interop_type = _interop_type_tag_d3d_texture_interleaved;
	if (IsEqualGUID(guid, constant_buffer_guid))						interop_type = _interop_type_constant_buffer;

	ASSERT(interop_type != k_num_interop_types);

	return interop_type;
}

bool c_halo3_cache_file::save_map()
{
	return false;
}

uint64_t c_halo3_cache_file::get_base_virtual_address() const
{
	return halo3_cache_file_header.virtual_base_address;
}

uint64_t c_halo3_cache_file::convert_page_offset(uint32_t page_offset) const
{
	return (static_cast<uint64_t>(page_offset) * 4ull) - get_base_virtual_address();

	//if (halo3_cache_file_header.unknown_bits & _cache_file_flag_use_absolute_addressing) // #TODO: Actually detect version
	//{
	//	return (static_cast<uint64_t>(page_offset) * 4ull) - (get_base_virtual_address() - 0x10000000ull);
	//}
	//else
	//{
	//	return (static_cast<uint64_t>(page_offset) * 4ull) - (get_base_virtual_address() - 0x50000000ull);
	//}
}
