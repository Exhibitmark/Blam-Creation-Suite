#include "mantlereflect-private-pch.h"

using namespace llvm;
using namespace clang;
using namespace clang::tooling;

c_legacy_compiler_interface::c_legacy_compiler_interface(const char* executable_path, const char* reflection_source_file) :
	c_llvm_compiler_interface(executable_path, reflection_source_file),
	reflection_type_containers(),
	ast_source_generators(),
	int8_type(),
	int16_type(),
	int32_type(),
	int64_type(),
	uint8_type(),
	uint16_type(),
	uint32_type(),
	uint64_type(),
	boolean8_type(),
	boolean16_type(),
	boolean32_type(),
	boolean64_type(),
	bitfield8_type(),
	bitfield16_type(),
	bitfield32_type(),
	bitfield64_type(),
	bitflag8_type(),
	bitflag16_type(),
	bitflag32_type(),
	bitflag64_type(),
	float_type(),
	double_type(),
	enum8_type(),
	enum16_type(),
	enum32_type(),
	enum64_type(),
	undefined8_type(),
	undefined16_type(),
	undefined32_type(),
	undefined64_type(),
	raw_character_array_type(),
	raw_wide_character_array_type(),
	static_string_type(),
	static_wide_string_type()
{
	int8_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Int8", "int8_t", sizeof(int8_t)));
	int16_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Int16", "int16_t", sizeof(int16_t)));
	int32_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Int32", "int32_t", sizeof(int32_t)));
	int64_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Int64", "int64_t", sizeof(int64_t)));
	uint8_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("UInt8", "uint8_t", sizeof(uint8_t)));
	uint16_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("UInt16", "uint16_t", sizeof(uint16_t)));
	uint32_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("UInt32", "uint32_t", sizeof(uint32_t)));
	uint64_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("UInt64", "uint64_t", sizeof(uint64_t)));
	boolean8_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Boolean8", "uint8_t", sizeof(uint8_t)));
	boolean16_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Boolean16", "uint16_t", sizeof(uint16_t)));
	boolean32_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Boolean32", "uint32_t", sizeof(uint32_t)));
	boolean64_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Boolean64", "uint64_t", sizeof(uint64_t)));
	bitfield8_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitField8", "uint8_t", sizeof(uint8_t)));
	bitfield16_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitField16", "uint16_t", sizeof(uint16_t)));
	bitfield32_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitField32", "uint32_t", sizeof(uint32_t)));
	bitfield64_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitField64", "uint64_t", sizeof(uint64_t)));
	bitflag8_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitFlag8", "uint8_t", sizeof(uint8_t)));
	bitflag16_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitFlag16", "uint16_t", sizeof(uint16_t)));
	bitflag32_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitFlag32", "uint32_t", sizeof(uint32_t)));
	bitflag64_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("BitFlag64", "uint64_t", sizeof(uint64_t)));
	float_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Float", "float", sizeof(float)));
	double_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Double", "double", sizeof(double)));
	enum8_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Enum8", "uint8_t", sizeof(uint8_t)));
	enum16_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Enum16", "uint16_t", sizeof(uint16_t)));
	enum32_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Enum32", "uint32_t", sizeof(uint32_t)));
	enum64_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("Enum64", "uint64_t", sizeof(uint64_t)));
	undefined8_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("s_undefined8_legacy", "s_undefined8_legacy", sizeof(uint8_t)));
	undefined16_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("s_undefined16_legacy", "s_undefined16_legacy", sizeof(uint16_t)));
	undefined32_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("s_undefined32_legacy", "s_undefined32_legacy", sizeof(uint32_t)));
	undefined64_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("s_undefined64_legacy", "s_undefined64_legacy", sizeof(uint64_t)));
	raw_character_array_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("RawCharacter", "char", sizeof(char)));
	raw_wide_character_array_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("RawWideCharacter", "wchar_t", sizeof(wchar_t)));
	static_string_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("StaticString", "c_static_string", sizeof(char)));
	static_wide_string_type = reflection_type_containers.emplace_back(new c_reflection_type_container_legacy("StaticString", "c_static_wide_string", sizeof(wchar_t)));
}

c_legacy_compiler_interface::~c_legacy_compiler_interface()
{
	for (c_reflection_type_container_legacy* pType : reflection_type_containers)
	{
		delete pType;
	}
}

void c_legacy_compiler_interface::register_ast_source_generator(c_legacy_ast_source_generator* source_generator)
{
	ast_source_generators.push_back(source_generator);
}

void c_legacy_compiler_interface::execute_type_generator()
{
	for (c_reflection_type_container_legacy* reflection_type_container : reflection_type_containers)
	{
		ASSERT(reflection_type_container != nullptr);
		init_type_size_and_offsets(*reflection_type_container);
		if (reflection_type_container->is_structure)
		{
			ASSERT(reflection_type_container->data_size > 0);
		}
		create_nice_type_names(*reflection_type_container);
	}
}

uint32_t c_legacy_compiler_interface::init_type_size_and_offsets(c_reflection_type_container_legacy& reflection_type_container)
{
	if (reflection_type_container.is_size_initialized)
	{
		return reflection_type_container.data_size;
	}

	uint32_t current_offset = 0;
	for (c_reflection_field_legacy_container* reflection_field_container : reflection_type_container.fields)
	{
		ASSERT(reflection_field_container != nullptr);

		uint64_t field_size = 0;
		switch (reflection_field_container->legacy_reflection_type_category)
		{
		case _legacy_reflection_type_category_tag_reference:
			field_size = 0x10;
			break;
		case _legacy_reflection_type_category_tag_block:
			field_size = 0xC;
			break;
		case _legacy_reflection_type_category_data_reference:
			field_size = 0x14;
			break;
		case _legacy_reflection_type_category_string_id:
			field_size = 0x4;
			break;
		case _legacy_reflection_type_category_primitive:
		case _legacy_reflection_type_category_structure:
		case _legacy_reflection_type_category_shader_data:
		case _legacy_reflection_type_category_enum:
		case _legacy_reflection_type_category_bitfield:
		default:
			field_size = init_type_size_and_offsets(*reflection_field_container->field_type);
			break;
		}

		if (field_size == 0)
			throw;

		uint64_t data_size = field_size * __max(1ull, reflection_field_container->array_size);
		reflection_field_container->data_size = field_size;
		reflection_field_container->offset = current_offset;
		current_offset += static_cast<uint32_t>(data_size);
	}
	reflection_type_container.data_size = current_offset;

	return reflection_type_container.data_size;
}

void c_legacy_compiler_interface::create_nice_type_names(c_reflection_type_container_legacy& rType)
{
	rType.type_nice_name = rType.type_name;
	rType.type_nice_name = format_nice_name_and_is_hidden_property(_legacy_reflection_type_category_structure, rType.type_nice_name.data());
	for (c_reflection_field_legacy_container* pField : rType.fields)
	{
		c_reflection_field_legacy_container& rField = *pField;

		rField.field_nice_name = rField.field_name;
		rField.is_hidden_by_default = false;
		rField.field_nice_name = format_nice_name_and_is_hidden_property(rField.legacy_reflection_type_category, rField.field_nice_name.data(), &rField.is_hidden_by_default);
	}
}

e_legacy_primitive_type c_legacy_compiler_interface::qualified_type_to_legacy_primitive_type_(const clang::QualType& _qualifiedType)
{
	clang::QualType qualified_type = _qualifiedType;

	e_legacy_primitive_type primitive_type = _legacy_primitive_type_non_primitive;

	const bool is_enum = qualified_type->isEnumeralType();
	if (is_enum)
	{
		TagDecl* tag_declaraction = qualified_type->getAsTagDecl();
		EnumDecl* enum_declaration = static_cast<EnumDecl*>(tag_declaraction); // this is nasty!
		ASSERT(enum_declaration != nullptr);
		qualified_type = enum_declaration->getIntegerType()->getCanonicalTypeInternal();
	}
	const std::string integral_type_name = QualType::getAsString(qualified_type.split(), k_clang_printing_policy);

	if (qualified_type->isSignedIntegerType())
	{
		if (integral_type_name == "char") primitive_type = _legacy_primitive_type_char8;
		else if (integral_type_name == "signed char") primitive_type = _legacy_primitive_type_int8;
		else if (integral_type_name == "short") primitive_type = _legacy_primitive_type_int16;
		else if (integral_type_name == "int") primitive_type = _legacy_primitive_type_int32;
		else if (integral_type_name == "long") primitive_type = _legacy_primitive_type_int32;
		else if (integral_type_name == "long long") primitive_type = _legacy_primitive_type_int64;
		else ASSERT(!"Unsupported signed integral type");
	}
	else if (qualified_type->isUnsignedIntegerType())
	{
		if (integral_type_name == "unsigned char") primitive_type = _legacy_primitive_type_uint8;
		else if (integral_type_name == "unsigned short") primitive_type = _legacy_primitive_type_uint16;
		else if (integral_type_name == "unsigned int") primitive_type = _legacy_primitive_type_uint32;
		else if (integral_type_name == "unsigned long long") primitive_type = _legacy_primitive_type_uint64;
		else ASSERT(!"Unsupported signed integral type");
	}
	else ASSERT(!"Unsupported integral type");

	// its an enum. convert from its underlying integral type
	if (is_enum)
	{
		switch (primitive_type)
		{
		case _legacy_primitive_type_int8:
		case _legacy_primitive_type_uint8:
			primitive_type = _legacy_primitive_type_enum8;
			break;
		case _legacy_primitive_type_int16:
		case _legacy_primitive_type_uint16:
			primitive_type = _legacy_primitive_type_enum16;
			break;
		case _legacy_primitive_type_int32:
		case _legacy_primitive_type_uint32:
			primitive_type = _legacy_primitive_type_enum32;
			break;
		case _legacy_primitive_type_int64:
		case _legacy_primitive_type_uint64:
			primitive_type = _legacy_primitive_type_enum64;
			break;
		case _legacy_primitive_type_enum8:
		case _legacy_primitive_type_enum16:
		case _legacy_primitive_type_enum32:
		case _legacy_primitive_type_enum64:
			break;
		default:
			ASSERT(!"Unsupported enum integral interpretation");
		}
	}

	return primitive_type;
}

c_reflection_type_container_legacy* c_legacy_compiler_interface::create_reflected_enum_type(
	const clang::QualType* record_qualified_type,
	const clang::RecordDecl& record_declaration)
{
	const clang::EnumDecl* enum_decl = dyn_cast<EnumDecl>(&record_declaration);
	ASSERT(enum_decl != nullptr);

	std::string declarationName = record_declaration.getNameAsString();
	std::string qualifiedDeclarationName;
	if (record_qualified_type)
	{
		qualifiedDeclarationName = QualType::getAsString(record_qualified_type->split(), k_clang_printing_policy);
	}
	else // construct best qualified type name
	{
		ASSERT(record_declaration.isEnum());
		if (record_declaration.isEnum())
		{
			qualifiedDeclarationName += "enum ";
		}
		qualifiedDeclarationName += record_declaration.getQualifiedNameAsString();
	}

	for (c_reflection_type_container_legacy* reflection_typeContainer : reflection_type_containers)
	{
		if (reflection_typeContainer->clang_record_declaration == &record_declaration || reflection_typeContainer->qualified_type_name == qualifiedDeclarationName)
		{
			return reflection_typeContainer;
		}
	}

	c_reflection_type_container_legacy& reflection_type_container = *new c_reflection_type_container_legacy();
	reflection_type_containers.emplace_back(&reflection_type_container);

	reflection_type_container.type_name = declarationName;
	reflection_type_container.qualified_type_name = qualifiedDeclarationName;
	reflection_type_container.clang_record_declaration = &record_declaration;
	reflection_type_container.is_primitive = false;
	reflection_type_container.is_enum = true;
	reflection_type_container.is_structure = false;

	e_legacy_primitive_type primitive_type = qualified_type_to_legacy_primitive_type_(*record_qualified_type);
	switch (primitive_type)
	{
	case _legacy_primitive_type_enum8:
		reflection_type_container.data_size = 1;
		break;
	case _legacy_primitive_type_enum16:
		reflection_type_container.data_size = 2;
		break;
	case _legacy_primitive_type_enum32:
		reflection_type_container.data_size = 4;
		break;
	case _legacy_primitive_type_enum64:
		reflection_type_container.data_size = 8;
		break;
	}
	reflection_type_container.is_size_initialized = true;

	//QualType integer_type = enum_decl->getIntegerType();

	bool disableReflection = false;
	std::string nice_name_str;
	for (clang::Attr* it : record_declaration.attrs())
	{
		Attr& attr = (*it);
		AnnotateAttr* annotatedAttr = dyn_cast<AnnotateAttr>(&attr);
		if (annotatedAttr != nullptr)
		{
			std::string str = annotatedAttr->getAnnotation();

			const char* pNoReflection = strstr(str.c_str(), "no_reflection");
			const char* pNiceName = strstr(str.c_str(), "nice_name");
			const char* pTagGroup = strstr(str.c_str(), "tag_group");

			if (pNoReflection)
			{
				disableReflection = true;
			}
			if (pNiceName)
			{
				nice_name_str = pNiceName + strlen("nice_name:");
			}
		}
	}

	reflection_type_container.type_nice_name = nice_name_str;

	if (disableReflection)
	{
		return &reflection_type_container;
	}

	for (const clang::EnumDecl::enumerator_iterator::value_type& enum_decl : enum_decl->enumerators())
	{
		c_reflection_enum_value_container* enum_value_container = new c_reflection_enum_value_container();

		enum_value_container->value_name = enum_decl->getNameAsString();
		const llvm::APSInt& init_value = enum_decl->getInitVal();
		const uint64_t* raw_data = init_value.getRawData();
		if (raw_data)
		{
			enum_value_container->value = *raw_data;
		}
		reflection_type_container.enum_values.push_back(enum_value_container);
	}

	return &reflection_type_container;
}

void c_legacy_compiler_interface::create_reflected_type(
	ASTContext& ast_context,
	const clang::QualType* record_qualified_type,
	const clang::RecordDecl& record_declaration,
	bool is_primitive)
{
	create_reflected_struct(ast_context, record_qualified_type, record_declaration, is_primitive);
}

c_reflection_type_container_legacy* c_legacy_compiler_interface::create_reflected_struct(clang::ASTContext& ast_context, const clang::QualType* record_qualified_type, const clang::RecordDecl& record_declaration, bool is_primitive /*= false*/)
{
	std::string declarationName = record_declaration.getNameAsString();
	std::string qualifiedDeclarationName;
	if (record_qualified_type)
	{
		qualifiedDeclarationName = QualType::getAsString(record_qualified_type->split(), k_clang_printing_policy);
	}
	else // construct best qualified type name
	{
		if (record_declaration.isClass())
		{
			qualifiedDeclarationName += "class ";
		}
		else if (record_declaration.isStruct())
		{
			qualifiedDeclarationName += "struct ";
		}
		qualifiedDeclarationName += record_declaration.getQualifiedNameAsString();
	}

	RecordDecl::field_range fields = record_declaration.fields();
	size_t numFields = false; for (FieldDecl* field : fields) { numFields++; }

	bool isTemplated = record_declaration.isTemplated();
	const clang::ClassTemplateSpecializationDecl* pClassTemplateSpecializationDecl = dyn_cast<ClassTemplateSpecializationDecl>(&record_declaration);
	if (isTemplated && pClassTemplateSpecializationDecl == nullptr)
	{
		return nullptr;
	}

	c_reflection_type_container_legacy* pExistings_reflection_structure_type_legacyContainer = nullptr;
	{ // handle existing records
		for (c_reflection_type_container_legacy* reflection_typeContainer : reflection_type_containers)
		{
			if (reflection_typeContainer->clang_record_declaration == &record_declaration || reflection_typeContainer->qualified_type_name == qualifiedDeclarationName)
			{
				pExistings_reflection_structure_type_legacyContainer = reflection_typeContainer;

			}
		}
	}
	if (pExistings_reflection_structure_type_legacyContainer)
	{
		if (numFields == 0)
		{
			return pExistings_reflection_structure_type_legacyContainer; // we already have data for this
		}
		else if (!pExistings_reflection_structure_type_legacyContainer->fields.empty())
		{
			return pExistings_reflection_structure_type_legacyContainer; // we already have data for this
		}
	}

	// if existing reflection container exists and we're updating it, replace all data

	bool createdNewReflectionContainer = pExistings_reflection_structure_type_legacyContainer == nullptr;
	c_reflection_type_container_legacy* ps_reflection_structure_type_legacyContainer = pExistings_reflection_structure_type_legacyContainer;
	if (createdNewReflectionContainer)
	{
		ps_reflection_structure_type_legacyContainer = new c_reflection_type_container_legacy();
	}
	c_reflection_type_container_legacy& reflection_type_container = *ps_reflection_structure_type_legacyContainer;

	ASSERT(reflection_type_container.fields.empty());

	reflection_type_container.type_name = declarationName;
	reflection_type_container.qualified_type_name = qualifiedDeclarationName;
	reflection_type_container.clang_record_declaration = &record_declaration;
	reflection_type_container.is_primitive = is_primitive;
	reflection_type_container.is_enum = false;
	reflection_type_container.is_structure = true;

	if (pClassTemplateSpecializationDecl)
	{
		reflection_type_container.is_template = true;

		const clang::TemplateArgumentList& rArgList = pClassTemplateSpecializationDecl->getTemplateArgs();
		for (unsigned int i = 0; i < rArgList.size(); i++)
		{
			const clang::TemplateArgument& rArg = rArgList.get(i);
			QualType qualifiedType = rArg.getAsType();

			bool isVoid = qualifiedType->isVoidType();
			ASSERT(rArgList.size() <= 1 || !isVoid); // no voids allowed unless single void template
			if (!isVoid)
			{
				const std::string reflectionQualifiedTypeName = QualType::getAsString(qualifiedType.split(), k_clang_printing_policy);
				CXXRecordDecl* pDecl = qualifiedType->getAsCXXRecordDecl();
				ASSERT(pDecl != nullptr);
				c_reflection_type_container_legacy* pTemplateType = create_reflected_struct(ast_context, &qualifiedType, *pDecl);
				ASSERT(pTemplateType != nullptr);
				reflection_type_container.template_types.push_back(pTemplateType);
			}
		}
	}

	bool disableReflection = false;
	std::string no_reflection_str;
	std::string nice_name_str;
	std::string tag_group_str;
	for (clang::Attr* it : record_declaration.attrs())
	{
		Attr& attr = (*it);
		AnnotateAttr* annotatedAttr = dyn_cast<AnnotateAttr>(&attr);
		if (annotatedAttr != nullptr)
		{
			std::string str = annotatedAttr->getAnnotation();

			const char* pNoReflection = strstr(str.c_str(), "no_reflection");
			const char* pNiceName = strstr(str.c_str(), "nice_name");
			const char* pTagGroup = strstr(str.c_str(), "tag_group");

			if (pNoReflection)
			{
				disableReflection = true;
			}
			if (pNiceName)
			{
				nice_name_str = pNiceName + strlen("nice_name:");
			}
			if (pTagGroup)
			{
				const char* pTagGroupStringBegin = pTagGroup + strlen("tag_group:");
				size_t tagGroupRawStringLength = strlen(pTagGroupStringBegin);

				ASSERT(tagGroupRawStringLength == 5 || tagGroupRawStringLength == 6);
				char buffer[5]{}; // #NOTE: We expect to receive these characters swapped. We're swapping them back to the original integer order
				if (tagGroupRawStringLength == 5)
				{
					buffer[0] = ' ';
					buffer[1] = pTagGroupStringBegin[3];
					buffer[2] = pTagGroupStringBegin[2];
					buffer[3] = pTagGroupStringBegin[1];
				}
				if (tagGroupRawStringLength == 6)
				{
					buffer[0] = pTagGroupStringBegin[4];
					buffer[1] = pTagGroupStringBegin[3];
					buffer[2] = pTagGroupStringBegin[2];
					buffer[3] = pTagGroupStringBegin[1];
				}
				tag_group_str = buffer;
			}
		}
	}

	reflection_type_container.raw_tag_group = tag_group_str;
	{
		const uint32_t& raw_tag_group = *reinterpret_cast<const uint32_t*>(reflection_type_container.raw_tag_group.data());
		uint64_t swapped_tag_group = bswap(raw_tag_group);
		const char* swapped_legacy_tag_group_str = reinterpret_cast<const char*>(&swapped_tag_group);
		reflection_type_container.tag_group = swapped_legacy_tag_group_str;
	}

	if (disableReflection)
	{
		return &reflection_type_container;
	}

	for (FieldDecl* field : fields)
	{
		c_reflection_field_legacy_container& rFieldData = *reflection_type_container.fields.emplace_back(new c_reflection_field_legacy_container());

		const clang::QualType fieldQualifiedType = field->getType();
		const clang::Type* fieldType = fieldQualifiedType.getTypePtr();

		const std::string fieldQualifiedTypeName = QualType::getAsString(fieldQualifiedType.split(), k_clang_printing_policy);
		const std::string fieldQualifiedName = field->getQualifiedNameAsString();
		const std::string fieldName = field->getNameAsString();

		rFieldData.field_name = fieldName;

		const clang::Type* const reflectionBaseType = fieldType;
		const clang::QualType reflectionQualifiedBaseType = reflectionBaseType->getCanonicalTypeInternal();
		clang::QualType reflectionQualifiedType = reflectionQualifiedBaseType;

		if (reflectionQualifiedType->isArrayType())
		{
			const ConstantArrayType* pConstantArrayType = ast_context.getAsConstantArrayType(reflectionQualifiedType);
			if (pConstantArrayType)
			{
				llvm::APInt arraySizeRaw = pConstantArrayType->getSize();
				rFieldData.array_size = *arraySizeRaw.getRawData();
				ASSERT(rFieldData.array_size > 0);

				QualType elementType = pConstantArrayType->getElementType();
				reflectionQualifiedType = elementType->getCanonicalTypeInternal();
			}
			else ASSERT(!"Unsupported array type");
		}
		const std::string reflectionQualifiedTypeName = QualType::getAsString(reflectionQualifiedType.split(), k_clang_printing_policy);


		if (reflectionQualifiedType->isClassType() || reflectionQualifiedType->isStructureType())
		{
			TagDecl* pTagDecl = reflectionQualifiedType->getAsTagDecl();
			clang::RecordDecl* pCXXRecord = static_cast<clang::RecordDecl*>(pTagDecl);
			std::string name = pTagDecl->getNameAsString();

			e_legacy_reflection_type_category reflectionTypeCategory;
			{
				if (name == "TagBlock") reflectionTypeCategory = _legacy_reflection_type_category_tag_block;
				else if (name == "s_tag_block_legacy") reflectionTypeCategory = _legacy_reflection_type_category_tag_block;
				else if (name == "s_data_reference_legacy") reflectionTypeCategory = _legacy_reflection_type_category_data_reference;
				else if (name == "string_id") reflectionTypeCategory = _legacy_reflection_type_category_string_id;
				else if (name == "StringID") reflectionTypeCategory = _legacy_reflection_type_category_string_id;
				else if (name == "string_id_legacy") reflectionTypeCategory = _legacy_reflection_type_category_string_id;
				//else if (name == "TagGroupName") reflectionTypeCategory = _legacy_reflection_type_category_TagGroupName; 
				else if (name == "s_tag_reference_legacy") reflectionTypeCategory = _legacy_reflection_type_category_tag_reference;
				else if (name == "s_undefined8_legacy") reflectionTypeCategory = _legacy_reflection_type_category_primitive;
				else if (name == "s_undefined16_legacy") reflectionTypeCategory = _legacy_reflection_type_category_primitive;
				else if (name == "s_undefined32_legacy") reflectionTypeCategory = _legacy_reflection_type_category_primitive;
				else if (name == "s_undefined64_legacy") reflectionTypeCategory = _legacy_reflection_type_category_primitive;
				else if (reflectionQualifiedType->isStructureType()) reflectionTypeCategory = _legacy_reflection_type_category_structure;
				else ASSERT(!"Unsupported class type");
			}

			rFieldData.legacy_reflection_type_category = reflectionTypeCategory;
			if (reflectionTypeCategory == _legacy_reflection_type_category_primitive)
			{
				e_legacy_primitive_type primitiveType;
				if (name == "s_undefined8_legacy") primitiveType = _legacy_primitive_type_undefined8;
				else if (name == "s_undefined16_legacy") primitiveType = _legacy_primitive_type_undefined16;
				else if (name == "s_undefined32_legacy") primitiveType = _legacy_primitive_type_undefined32;
				else if (name == "s_undefined64_legacy") primitiveType = _legacy_primitive_type_undefined64;
				else ASSERT(!"Unsupported primitive type");

				rFieldData.primitive_type = primitiveType;
				rFieldData.field_type = get_primitive_reflection_type_container(primitiveType);
			}
			else
			{
				c_reflection_type_container_legacy* pType = create_reflected_struct(ast_context, &fieldQualifiedType, *pCXXRecord);
				ASSERT(pType != nullptr);
				rFieldData.field_type = pType;
			}
		}
		else if (reflectionQualifiedType->isScalarType())
		{
			clang::QualType scalarQualifiedType = reflectionQualifiedType->getCanonicalTypeInternal();
			const std::string scalarQualifiedTypeName = QualType::getAsString(scalarQualifiedType.split(), k_clang_printing_policy);

			rFieldData.legacy_reflection_type_category = _legacy_reflection_type_category_primitive;
			switch (reflectionQualifiedType->getScalarTypeKind())
			{
			case clang::Type::ScalarTypeKind::STK_Bool:
				rFieldData.primitive_type = _legacy_primitive_type_boolean32;
				break;
			case clang::Type::ScalarTypeKind::STK_Integral:
			{
				rFieldData.primitive_type = qualified_type_to_legacy_primitive_type_(scalarQualifiedType);
			}
			break;
			case clang::Type::ScalarTypeKind::STK_Floating:
			{
				const std::string typeName = QualType::getAsString(scalarQualifiedType.split(), k_clang_printing_policy);
				if (typeName == "float") rFieldData.primitive_type = _legacy_primitive_type_float;
				else if (typeName == "double") rFieldData.primitive_type = _legacy_primitive_type_float;
				else ASSERT(!"Unsupported floating point type");
			}
			break;
			case clang::Type::ScalarTypeKind::STK_CPointer:
			case clang::Type::ScalarTypeKind::STK_BlockPointer:
			case clang::Type::ScalarTypeKind::STK_ObjCObjectPointer:
			case clang::Type::ScalarTypeKind::STK_MemberPointer:
			case clang::Type::ScalarTypeKind::STK_IntegralComplex:
			case clang::Type::ScalarTypeKind::STK_FloatingComplex:
			case clang::Type::ScalarTypeKind::STK_FixedPoint:
				ASSERT(!"UNSUPPORTED SCALAR TYPE");
				break;
			}

			ASSERT(rFieldData.primitive_type != _legacy_primitive_type_non_primitive);
			rFieldData.field_type = get_primitive_reflection_type_container(rFieldData.primitive_type);
		}
		else ASSERT(!"UNSUPPORTED TYPE");

		if (reflectionQualifiedType->isEnumeralType())
		{
			clang::QualType enumQualifiedType = reflectionQualifiedType->getCanonicalTypeInternal();
			const std::string enumQualifiedTypeName = QualType::getAsString(enumQualifiedType.split(), k_clang_printing_policy);
			TagDecl* pEnumDecl = reflectionQualifiedType->getAsTagDecl();
			clang::RecordDecl* pCXXRecord = static_cast<clang::RecordDecl*>(pEnumDecl);

			c_reflection_type_container_legacy* pType = create_reflected_enum_type(&fieldQualifiedType, *pCXXRecord);
			ASSERT(pType != nullptr);
			rFieldData.field_type = pType;

			if (!pType->type_name.empty() && std::tolower(pType->type_name.front()) == 'b')
			{
				pType->is_enum = false;
				pType->is_bitfield = true;
				rFieldData.legacy_reflection_type_category = _legacy_reflection_type_category_bitfield;
				switch (rFieldData.primitive_type)
				{
				case _legacy_primitive_type_enum8:	rFieldData.primitive_type = _legacy_primitive_type_bitfield8;  break;
				case _legacy_primitive_type_enum16:	rFieldData.primitive_type = _legacy_primitive_type_bitfield16; break;
				case _legacy_primitive_type_enum32:	rFieldData.primitive_type = _legacy_primitive_type_bitfield32; break;
				case _legacy_primitive_type_enum64:	rFieldData.primitive_type = _legacy_primitive_type_bitfield64; break;
				}
			}
			else
			{
				rFieldData.legacy_reflection_type_category = _legacy_reflection_type_category_enum;
			}
		}

		ASSERT(rFieldData.field_type != nullptr);
	}

	if (createdNewReflectionContainer)
	{
		reflection_type_containers.emplace_back(ps_reflection_structure_type_legacyContainer);
	}

	return &reflection_type_container;
}

int c_legacy_compiler_interface::run()
{
	int clang_tool_result = c_llvm_compiler_interface::run();
	if (clang_tool_result == 0)
	{
		tbb::parallel_for_each(ast_source_generators.begin(), ast_source_generators.end(), std::bind(&c_legacy_compiler_interface::execute_source_generator, this, std::placeholders::_1));
	}
	return clang_tool_result;
}

c_reflection_type_container_legacy* c_legacy_compiler_interface::get_primitive_reflection_type_container(e_legacy_primitive_type primitive_type)
{
	switch (primitive_type)
	{
	case _legacy_primitive_type_int8:					return int8_type;
	case _legacy_primitive_type_int16:					return int16_type;
	case _legacy_primitive_type_int32:					return int32_type;
	case _legacy_primitive_type_int64:					return int64_type;
	case _legacy_primitive_type_uint8:					return uint8_type;
	case _legacy_primitive_type_uint16:				return uint16_type;
	case _legacy_primitive_type_uint32:				return uint32_type;
	case _legacy_primitive_type_uint64:				return uint64_type;
	case _legacy_primitive_type_boolean8:				return boolean8_type;
	case _legacy_primitive_type_boolean16:				return boolean16_type;
	case _legacy_primitive_type_boolean32:				return boolean32_type;
	case _legacy_primitive_type_boolean64:				return boolean64_type;
	case _legacy_primitive_type_bitflag8:				return bitflag8_type;
	case _legacy_primitive_type_bitflag16:				return bitflag16_type;
	case _legacy_primitive_type_bitflag32:				return bitflag32_type;
	case _legacy_primitive_type_bitflag64:				return bitflag64_type;
	case _legacy_primitive_type_bitfield8:				return bitfield8_type;
	case _legacy_primitive_type_bitfield16:			return bitfield16_type;
	case _legacy_primitive_type_bitfield32:			return bitfield32_type;
	case _legacy_primitive_type_bitfield64:			return bitfield64_type;
	case _legacy_primitive_type_float:					return float_type;
	case _legacy_primitive_type_double:				return double_type;
	case _legacy_primitive_type_enum8:					return enum8_type;
	case _legacy_primitive_type_enum16:				return enum16_type;
	case _legacy_primitive_type_enum32:				return enum32_type;
	case _legacy_primitive_type_enum64:				return enum64_type;
	case _legacy_primitive_type_undefined8:			return undefined8_type;
	case _legacy_primitive_type_undefined16:			return undefined16_type;
	case _legacy_primitive_type_undefined32:			return undefined32_type;
	case _legacy_primitive_type_undefined64:			return undefined64_type;
	case _legacy_primitive_type_char8:					return raw_character_array_type;
	case _legacy_primitive_type_char16:				return raw_wide_character_array_type;
	case _legacy_primitive_type_static_string8:		return static_string_type;
	case _legacy_primitive_type_static_string16:		return static_wide_string_type;
	}

	ASSERT(!"s_undefined_legacy primitive type");
	return nullptr;
}

const char* c_legacy_compiler_interface::format_nice_name_and_is_hidden_property(e_legacy_reflection_type_category legacy_reflection_type_category, char* pString, bool* is_hidden_by_default)
{
	char* pOutputString = pString;

	uint32_t currentPos = 0;

	if ((pString[0] && pString[1]))
	{
		if (pString[0] == '_' && pString[1] == '_')
		{
			if (is_hidden_by_default)
			{
				*is_hidden_by_default = true;
			}

			pOutputString = pString + 2;

			if (pOutputString[0] == 'u' && strstr(pString, "__unknown") == pOutputString)
			{
				return "Unknown";
			}
		}

		if ((pString[0] == 's' || pString[0] == 'c' || pString[0] == 'e' || pString[0] == 'b') && pString[1] == '_')
		{
			pOutputString = pString + 2;

			char* pDefinitionStr = strstr(pOutputString, "_definition");
			if (pDefinitionStr)
			{
				pDefinitionStr[0] = 0;
			}
		}

		if (legacy_reflection_type_category == _legacy_reflection_type_category_tag_block)
		{
			char* pBlockString = strstr(pOutputString, "_block");
			if (pBlockString)
			{
				pBlockString[0] = 0;
			}

			char* pBlockString2 = strstr(pOutputString, "_block_definition");
			if (pBlockString2)
			{
				pBlockString2[0] = 0;
			}
		}

		if (legacy_reflection_type_category == _legacy_reflection_type_category_tag_reference)
		{
			char* pReference = strstr(pOutputString, "_reference");
			if (pReference)
			{
				pReference[0] = 0;
			}

			char* pReference2 = strstr(pOutputString, "_definition");
			if (pReference2)
			{
				pReference2[0] = 0;
			}
		}

		if (legacy_reflection_type_category == _legacy_reflection_type_category_data_reference)
		{
			char* ps_data_reference_legacy = strstr(pOutputString, "_data_reference");
			if (ps_data_reference_legacy)
			{
				ps_data_reference_legacy[0] = 0;
			}

			char* pDefinition = strstr(pOutputString, "_definition");
			if (pDefinition)
			{
				pDefinition[0] = 0;
			}
		}
	}

	if (pOutputString[0] == 0)
	{
		return "Unknown";
	}

	char& currentCharacter = pOutputString[currentPos];
	if (currentCharacter && !std::isupper(currentCharacter))
	{
		currentCharacter = currentCharacter - 0x20;
	}

	while (pOutputString[currentPos])
	{
		char& currentCharacter = pOutputString[currentPos];
		char& nextCharacter = pOutputString[currentPos + 1];
		bool hasNextCharacter = nextCharacter != 0;
		if (currentCharacter == '_' && hasNextCharacter && nextCharacter != '_')
		{
			currentCharacter = ' ';
			nextCharacter = std::isupper(nextCharacter) ? nextCharacter : (nextCharacter - 0x20);
		}

		currentPos++;
	}

	return pOutputString;
}

void c_legacy_compiler_interface::execute_source_generator(c_legacy_ast_source_generator* source_generator)
{
	source_generator->run(reflection_type_containers);
	source_generator->write_output();
}