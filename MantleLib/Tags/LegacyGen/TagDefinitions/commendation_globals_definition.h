#pragma once

struct nicename("commendation_globals_definition") tag_group('comg') s_commendation_globals_definition_definition
{
	struct nicename("Commendations") s_commendations_definition
	{
		enum nicename("Category") e_category : uint16_t
		{
			/*nicename("Campaign")*/ _category_campaign = 0ui16,
			/*nicename("Firefight")*/ _category_firefight = 1ui16,
			/*nicename("Multiplayer")*/ _category_multiplayer = 2ui16,
		};

		string_id_legacy nicename("Name") name;
		string_id_legacy nicename("Description") description;
		int32_t nicename("Credits Earned Before Silver Reached") credits_earned_before_silver_reached;
		int32_t nicename("Credits Earned After Silver Reached") credits_earned_after_silver_reached;
		int16_t __unknown0;
		int8_t nicename("Icon") icon;
		int8_t __unknown1;
		int16_t nicename("Count Required for Iron") count_required_for_iron;
		int16_t nicename("Count Required for Bronze") count_required_for_bronze;
		int16_t nicename("Count Required for Silver") count_required_for_silver;
		int16_t nicename("Count Required for Gold") count_required_for_gold;
		int16_t nicename("Count Required for Onyx") count_required_for_onyx;
		int16_t nicename("Count Required for MAX") count_required_for_max;
		int32_t __unknown2;
		int16_t nicename("Credits Awarded for Iron") credits_awarded_for_iron;
		int16_t nicename("Credits Awarded for Bronze") credits_awarded_for_bronze;
		int16_t nicename("Credits Awarded for Silver") credits_awarded_for_silver;
		int16_t nicename("Credits Awarded for Gold") credits_awarded_for_gold;
		int16_t nicename("Credits Awarded for Onyx") credits_awarded_for_onyx;
		int16_t nicename("Credits Awarded for MAX") credits_awarded_for_max;
		int16_t __unknown3;
		e_category nicename("Category") category;
	};

	s_tag_reference_legacy nicename("Names") names_reference;
	int8_t __unknown0;
	int8_t __unknown1;
	int8_t __unknown2;
	int8_t __unknown3;
	int16_t __unknown4;
	int16_t __unknown5;
	float nicename("Alpha") alpha;
	s_colorf_legacy nicename("Color") color;
	float nicename("Alpha") alpha1;
	s_colorf_legacy nicename("Color") color1;
	float nicename("Alpha") alpha2;
	s_colorf_legacy nicename("Color") color2;
	float nicename("Unranked Alpha") unranked_alpha;
	s_colorf_legacy nicename("Unranked") unranked;
	float nicename("Iron Alpha") iron_alpha;
	s_colorf_legacy nicename("Iron Rank") iron_rank;
	float nicename("Bronze Alpha") bronze_alpha;
	s_colorf_legacy nicename("Bronze Rank") bronze_rank;
	float nicename("Silver Alpha") silver_alpha;
	s_colorf_legacy nicename("Silver Rank") silver_rank;
	float nicename("Gold Alpha") gold_alpha;
	s_colorf_legacy nicename("Gold Rank") gold_rank;
	float nicename("Onyx Alpha") onyx_alpha;
	s_colorf_legacy nicename("Onyx Rank") onyx_rank;
	float nicename("Alpha") alpha3;
	s_colorf_legacy nicename("Color") color3;
	s_tag_block_legacy<s_commendations_definition> nicename("Commendations") commendations_block;
};

