#pragma once

struct nicename("chud_widget_render_data_template") tag_group('wrdt') s_chud_widget_render_data_template_definition
{
	struct nicename("Render Data") s_render_data_definition
	{
		enum nicename("Shader Index") e_shader_index : uint8_t
		{
			/*nicename("Cheap")*/ _shader_index_cheap = 1ui8,
			/*nicename("Simple")*/ _shader_index_simple = 2ui8,
			/*nicename("Meter")*/ _shader_index_meter = 3ui8,
			/*nicename("Text Simple")*/ _shader_index_text_simple = 4ui8,
			/*nicename("Meter Shield")*/ _shader_index_meter_shield = 5ui8,
			/*nicename("Meter Gradient")*/ _shader_index_meter_gradient = 6ui8,
			/*nicename("Crosshair")*/ _shader_index_crosshair = 7ui8,
			/*nicename("Directional Damage")*/ _shader_index_directional_damage = 8ui8,
			/*nicename("Solid")*/ _shader_index_solid = 9ui8,
			/*nicename("Sensor")*/ _shader_index_sensor = 10ui8,
			/*nicename("Meter Single Color")*/ _shader_index_meter_single_color = 11ui8,
			/*nicename("Navpoint")*/ _shader_index_navpoint = 12ui8,
			/*nicename("Medal")*/ _shader_index_medal = 13ui8,
			/*nicename("Texture Cam")*/ _shader_index_texture_cam = 14ui8,
			/*nicename("Meter Chapter")*/ _shader_index_meter_chapter = 15ui8,
			/*nicename("Meter Double Gradient")*/ _shader_index_meter_double_gradient = 16ui8,
			/*nicename("Meter Radial Gradient")*/ _shader_index_meter_radial_gradient = 17ui8,
			/*nicename("Turbulence")*/ _shader_index_turbulence = 18ui8,
			/*nicename("Emblem")*/ _shader_index_emblem = 19ui8,
			/*nicename("Directional Damage Apply")*/ _shader_index_directional_damage_apply = 20ui8,
			/*nicename("Damage Tracker")*/ _shader_index_damage_tracker = 21ui8,
		};

		enum nicename("Output Color a") e_output_color_a : uint16_t
		{
			/*nicename("Local a")*/ _output_color_a_local_a = 1ui16,
			/*nicename("Local b")*/ _output_color_a_local_b = 2ui16,
			/*nicename("Local c")*/ _output_color_a_local_c = 3ui16,
			/*nicename("Local d")*/ _output_color_a_local_d = 4ui16,
			/*nicename("Unknown 4")*/ _output_color_a_unknown_4 = 5ui16,
			/*nicename("Unknown 5")*/ _output_color_a_unknown_5 = 6ui16,
			/*nicename("Scoreboard Friendly")*/ _output_color_a_scoreboard_friendly = 7ui16,
			/*nicename("Scoreboard Enemy")*/ _output_color_a_scoreboard_enemy = 8ui16,
			/*nicename("Arming Team")*/ _output_color_a_arming_team = 9ui16,
			/*nicename("Metagame Player 1")*/ _output_color_a_metagame_player_1 = 10ui16,
			/*nicename("Metagame Player 2")*/ _output_color_a_metagame_player_2 = 11ui16,
			/*nicename("Metagame Player 3")*/ _output_color_a_metagame_player_3 = 12ui16,
			/*nicename("Metagame Player 4")*/ _output_color_a_metagame_player_4 = 13ui16,
			/*nicename("Unknown 13")*/ _output_color_a_unknown_13 = 14ui16,
			/*nicename("Unknown 14")*/ _output_color_a_unknown_14 = 15ui16,
			/*nicename("Unknown 15")*/ _output_color_a_unknown_15 = 16ui16,
			/*nicename("Unknown 16")*/ _output_color_a_unknown_16 = 17ui16,
			/*nicename("Unknown 17")*/ _output_color_a_unknown_17 = 18ui16,
			/*nicename("Global Dynamic 0")*/ _output_color_a_global_dynamic_0 = 19ui16,
			/*nicename("Global Dynamic 1")*/ _output_color_a_global_dynamic_1 = 20ui16,
			/*nicename("Global Dynamic 2")*/ _output_color_a_global_dynamic_2 = 21ui16,
			/*nicename("Global Dynamic 3")*/ _output_color_a_global_dynamic_3 = 22ui16,
			/*nicename("Global Dynamic 4")*/ _output_color_a_global_dynamic_4 = 23ui16,
			/*nicename("Global Dynamic 5")*/ _output_color_a_global_dynamic_5 = 24ui16,
			/*nicename("Global Dynamic 6")*/ _output_color_a_global_dynamic_6 = 25ui16,
			/*nicename("Global Dynamic 7")*/ _output_color_a_global_dynamic_7 = 26ui16,
			/*nicename("Global Dynamic 8")*/ _output_color_a_global_dynamic_8 = 27ui16,
			/*nicename("Global Dynamic 9")*/ _output_color_a_global_dynamic_9 = 28ui16,
			/*nicename("Global Dynamic 10")*/ _output_color_a_global_dynamic_10 = 29ui16,
			/*nicename("Global Dynamic 11")*/ _output_color_a_global_dynamic_11 = 30ui16,
			/*nicename("Global Dynamic 12")*/ _output_color_a_global_dynamic_12 = 31ui16,
			/*nicename("Global Dynamic 13")*/ _output_color_a_global_dynamic_13 = 32ui16,
			/*nicename("Global Dynamic 14")*/ _output_color_a_global_dynamic_14 = 33ui16,
			/*nicename("Global Dynamic 15")*/ _output_color_a_global_dynamic_15 = 34ui16,
			/*nicename("Global Dynamic 16")*/ _output_color_a_global_dynamic_16 = 35ui16,
			/*nicename("Global Dynamic 17")*/ _output_color_a_global_dynamic_17 = 36ui16,
			/*nicename("Global Dynamic 18")*/ _output_color_a_global_dynamic_18 = 37ui16,
			/*nicename("Global Dynamic 19")*/ _output_color_a_global_dynamic_19 = 38ui16,
			/*nicename("Global Dynamic 20")*/ _output_color_a_global_dynamic_20 = 39ui16,
			/*nicename("Global Dynamic 21")*/ _output_color_a_global_dynamic_21 = 40ui16,
			/*nicename("Global Dynamic 22")*/ _output_color_a_global_dynamic_22 = 41ui16,
			/*nicename("Global Dynamic 23")*/ _output_color_a_global_dynamic_23 = 42ui16,
			/*nicename("Global Dynamic 24")*/ _output_color_a_global_dynamic_24 = 43ui16,
			/*nicename("Global Dynamic 25")*/ _output_color_a_global_dynamic_25 = 44ui16,
			/*nicename("Global Dynamic 26")*/ _output_color_a_global_dynamic_26 = 45ui16,
			/*nicename("Global Dynamic 27")*/ _output_color_a_global_dynamic_27 = 46ui16,
			/*nicename("Global Dynamic 28")*/ _output_color_a_global_dynamic_28 = 47ui16,
			/*nicename("Global Dynamic 29")*/ _output_color_a_global_dynamic_29 = 48ui16,
			/*nicename("Global Dynamic 30")*/ _output_color_a_global_dynamic_30 = 49ui16,
			/*nicename("Global Dynamic 31")*/ _output_color_a_global_dynamic_31 = 50ui16,
			/*nicename("Global Dynamic 32")*/ _output_color_a_global_dynamic_32 = 51ui16,
			/*nicename("Global Dynamic 33")*/ _output_color_a_global_dynamic_33 = 52ui16,
			/*nicename("Global Dynamic 34")*/ _output_color_a_global_dynamic_34 = 53ui16,
			/*nicename("Global Dynamic 35")*/ _output_color_a_global_dynamic_35 = 54ui16,
			/*nicename("Global Dynamic 36")*/ _output_color_a_global_dynamic_36 = 55ui16,
			/*nicename("Global Dynamic 37")*/ _output_color_a_global_dynamic_37 = 56ui16,
			/*nicename("Global Dynamic 38")*/ _output_color_a_global_dynamic_38 = 57ui16,
			/*nicename("Global Dynamic 39")*/ _output_color_a_global_dynamic_39 = 58ui16,
			/*nicename("Global Dynamic 40")*/ _output_color_a_global_dynamic_40 = 59ui16,
			/*nicename("Global Dynamic 41")*/ _output_color_a_global_dynamic_41 = 60ui16,
			/*nicename("Global Dynamic 42")*/ _output_color_a_global_dynamic_42 = 61ui16,
		};

		enum nicename("Output Color b") e_output_color_b : uint16_t
		{
			/*nicename("Local a")*/ _output_color_b_local_a = 1ui16,
			/*nicename("Local b")*/ _output_color_b_local_b = 2ui16,
			/*nicename("Local c")*/ _output_color_b_local_c = 3ui16,
			/*nicename("Local d")*/ _output_color_b_local_d = 4ui16,
			/*nicename("Unknown 4")*/ _output_color_b_unknown_4 = 5ui16,
			/*nicename("Unknown 5")*/ _output_color_b_unknown_5 = 6ui16,
			/*nicename("Scoreboard Friendly")*/ _output_color_b_scoreboard_friendly = 7ui16,
			/*nicename("Scoreboard Enemy")*/ _output_color_b_scoreboard_enemy = 8ui16,
			/*nicename("Arming Team")*/ _output_color_b_arming_team = 9ui16,
			/*nicename("Metagame Player 1")*/ _output_color_b_metagame_player_1 = 10ui16,
			/*nicename("Metagame Player 2")*/ _output_color_b_metagame_player_2 = 11ui16,
			/*nicename("Metagame Player 3")*/ _output_color_b_metagame_player_3 = 12ui16,
			/*nicename("Metagame Player 4")*/ _output_color_b_metagame_player_4 = 13ui16,
			/*nicename("Unknown 13")*/ _output_color_b_unknown_13 = 14ui16,
			/*nicename("Unknown 14")*/ _output_color_b_unknown_14 = 15ui16,
			/*nicename("Unknown 15")*/ _output_color_b_unknown_15 = 16ui16,
			/*nicename("Unknown 16")*/ _output_color_b_unknown_16 = 17ui16,
			/*nicename("Unknown 17")*/ _output_color_b_unknown_17 = 18ui16,
			/*nicename("Global Dynamic 0")*/ _output_color_b_global_dynamic_0 = 19ui16,
			/*nicename("Global Dynamic 1")*/ _output_color_b_global_dynamic_1 = 20ui16,
			/*nicename("Global Dynamic 2")*/ _output_color_b_global_dynamic_2 = 21ui16,
			/*nicename("Global Dynamic 3")*/ _output_color_b_global_dynamic_3 = 22ui16,
			/*nicename("Global Dynamic 4")*/ _output_color_b_global_dynamic_4 = 23ui16,
			/*nicename("Global Dynamic 5")*/ _output_color_b_global_dynamic_5 = 24ui16,
			/*nicename("Global Dynamic 6")*/ _output_color_b_global_dynamic_6 = 25ui16,
			/*nicename("Global Dynamic 7")*/ _output_color_b_global_dynamic_7 = 26ui16,
			/*nicename("Global Dynamic 8")*/ _output_color_b_global_dynamic_8 = 27ui16,
			/*nicename("Global Dynamic 9")*/ _output_color_b_global_dynamic_9 = 28ui16,
			/*nicename("Global Dynamic 10")*/ _output_color_b_global_dynamic_10 = 29ui16,
			/*nicename("Global Dynamic 11")*/ _output_color_b_global_dynamic_11 = 30ui16,
			/*nicename("Global Dynamic 12")*/ _output_color_b_global_dynamic_12 = 31ui16,
			/*nicename("Global Dynamic 13")*/ _output_color_b_global_dynamic_13 = 32ui16,
			/*nicename("Global Dynamic 14")*/ _output_color_b_global_dynamic_14 = 33ui16,
			/*nicename("Global Dynamic 15")*/ _output_color_b_global_dynamic_15 = 34ui16,
			/*nicename("Global Dynamic 16")*/ _output_color_b_global_dynamic_16 = 35ui16,
			/*nicename("Global Dynamic 17")*/ _output_color_b_global_dynamic_17 = 36ui16,
			/*nicename("Global Dynamic 18")*/ _output_color_b_global_dynamic_18 = 37ui16,
			/*nicename("Global Dynamic 19")*/ _output_color_b_global_dynamic_19 = 38ui16,
			/*nicename("Global Dynamic 20")*/ _output_color_b_global_dynamic_20 = 39ui16,
			/*nicename("Global Dynamic 21")*/ _output_color_b_global_dynamic_21 = 40ui16,
			/*nicename("Global Dynamic 22")*/ _output_color_b_global_dynamic_22 = 41ui16,
			/*nicename("Global Dynamic 23")*/ _output_color_b_global_dynamic_23 = 42ui16,
			/*nicename("Global Dynamic 24")*/ _output_color_b_global_dynamic_24 = 43ui16,
			/*nicename("Global Dynamic 25")*/ _output_color_b_global_dynamic_25 = 44ui16,
			/*nicename("Global Dynamic 26")*/ _output_color_b_global_dynamic_26 = 45ui16,
			/*nicename("Global Dynamic 27")*/ _output_color_b_global_dynamic_27 = 46ui16,
			/*nicename("Global Dynamic 28")*/ _output_color_b_global_dynamic_28 = 47ui16,
			/*nicename("Global Dynamic 29")*/ _output_color_b_global_dynamic_29 = 48ui16,
			/*nicename("Global Dynamic 30")*/ _output_color_b_global_dynamic_30 = 49ui16,
			/*nicename("Global Dynamic 31")*/ _output_color_b_global_dynamic_31 = 50ui16,
			/*nicename("Global Dynamic 32")*/ _output_color_b_global_dynamic_32 = 51ui16,
			/*nicename("Global Dynamic 33")*/ _output_color_b_global_dynamic_33 = 52ui16,
			/*nicename("Global Dynamic 34")*/ _output_color_b_global_dynamic_34 = 53ui16,
			/*nicename("Global Dynamic 35")*/ _output_color_b_global_dynamic_35 = 54ui16,
			/*nicename("Global Dynamic 36")*/ _output_color_b_global_dynamic_36 = 55ui16,
			/*nicename("Global Dynamic 37")*/ _output_color_b_global_dynamic_37 = 56ui16,
			/*nicename("Global Dynamic 38")*/ _output_color_b_global_dynamic_38 = 57ui16,
			/*nicename("Global Dynamic 39")*/ _output_color_b_global_dynamic_39 = 58ui16,
			/*nicename("Global Dynamic 40")*/ _output_color_b_global_dynamic_40 = 59ui16,
			/*nicename("Global Dynamic 41")*/ _output_color_b_global_dynamic_41 = 60ui16,
			/*nicename("Global Dynamic 42")*/ _output_color_b_global_dynamic_42 = 61ui16,
		};

		enum nicename("Output Color c") e_output_color_c : uint16_t
		{
			/*nicename("Local a")*/ _output_color_c_local_a = 1ui16,
			/*nicename("Local b")*/ _output_color_c_local_b = 2ui16,
			/*nicename("Local c")*/ _output_color_c_local_c = 3ui16,
			/*nicename("Local d")*/ _output_color_c_local_d = 4ui16,
			/*nicename("Unknown 4")*/ _output_color_c_unknown_4 = 5ui16,
			/*nicename("Unknown 5")*/ _output_color_c_unknown_5 = 6ui16,
			/*nicename("Scoreboard Friendly")*/ _output_color_c_scoreboard_friendly = 7ui16,
			/*nicename("Scoreboard Enemy")*/ _output_color_c_scoreboard_enemy = 8ui16,
			/*nicename("Arming Team")*/ _output_color_c_arming_team = 9ui16,
			/*nicename("Metagame Player 1")*/ _output_color_c_metagame_player_1 = 10ui16,
			/*nicename("Metagame Player 2")*/ _output_color_c_metagame_player_2 = 11ui16,
			/*nicename("Metagame Player 3")*/ _output_color_c_metagame_player_3 = 12ui16,
			/*nicename("Metagame Player 4")*/ _output_color_c_metagame_player_4 = 13ui16,
			/*nicename("Unknown 13")*/ _output_color_c_unknown_13 = 14ui16,
			/*nicename("Unknown 14")*/ _output_color_c_unknown_14 = 15ui16,
			/*nicename("Unknown 15")*/ _output_color_c_unknown_15 = 16ui16,
			/*nicename("Unknown 16")*/ _output_color_c_unknown_16 = 17ui16,
			/*nicename("Unknown 17")*/ _output_color_c_unknown_17 = 18ui16,
			/*nicename("Global Dynamic 0")*/ _output_color_c_global_dynamic_0 = 19ui16,
			/*nicename("Global Dynamic 1")*/ _output_color_c_global_dynamic_1 = 20ui16,
			/*nicename("Global Dynamic 2")*/ _output_color_c_global_dynamic_2 = 21ui16,
			/*nicename("Global Dynamic 3")*/ _output_color_c_global_dynamic_3 = 22ui16,
			/*nicename("Global Dynamic 4")*/ _output_color_c_global_dynamic_4 = 23ui16,
			/*nicename("Global Dynamic 5")*/ _output_color_c_global_dynamic_5 = 24ui16,
			/*nicename("Global Dynamic 6")*/ _output_color_c_global_dynamic_6 = 25ui16,
			/*nicename("Global Dynamic 7")*/ _output_color_c_global_dynamic_7 = 26ui16,
			/*nicename("Global Dynamic 8")*/ _output_color_c_global_dynamic_8 = 27ui16,
			/*nicename("Global Dynamic 9")*/ _output_color_c_global_dynamic_9 = 28ui16,
			/*nicename("Global Dynamic 10")*/ _output_color_c_global_dynamic_10 = 29ui16,
			/*nicename("Global Dynamic 11")*/ _output_color_c_global_dynamic_11 = 30ui16,
			/*nicename("Global Dynamic 12")*/ _output_color_c_global_dynamic_12 = 31ui16,
			/*nicename("Global Dynamic 13")*/ _output_color_c_global_dynamic_13 = 32ui16,
			/*nicename("Global Dynamic 14")*/ _output_color_c_global_dynamic_14 = 33ui16,
			/*nicename("Global Dynamic 15")*/ _output_color_c_global_dynamic_15 = 34ui16,
			/*nicename("Global Dynamic 16")*/ _output_color_c_global_dynamic_16 = 35ui16,
			/*nicename("Global Dynamic 17")*/ _output_color_c_global_dynamic_17 = 36ui16,
			/*nicename("Global Dynamic 18")*/ _output_color_c_global_dynamic_18 = 37ui16,
			/*nicename("Global Dynamic 19")*/ _output_color_c_global_dynamic_19 = 38ui16,
			/*nicename("Global Dynamic 20")*/ _output_color_c_global_dynamic_20 = 39ui16,
			/*nicename("Global Dynamic 21")*/ _output_color_c_global_dynamic_21 = 40ui16,
			/*nicename("Global Dynamic 22")*/ _output_color_c_global_dynamic_22 = 41ui16,
			/*nicename("Global Dynamic 23")*/ _output_color_c_global_dynamic_23 = 42ui16,
			/*nicename("Global Dynamic 24")*/ _output_color_c_global_dynamic_24 = 43ui16,
			/*nicename("Global Dynamic 25")*/ _output_color_c_global_dynamic_25 = 44ui16,
			/*nicename("Global Dynamic 26")*/ _output_color_c_global_dynamic_26 = 45ui16,
			/*nicename("Global Dynamic 27")*/ _output_color_c_global_dynamic_27 = 46ui16,
			/*nicename("Global Dynamic 28")*/ _output_color_c_global_dynamic_28 = 47ui16,
			/*nicename("Global Dynamic 29")*/ _output_color_c_global_dynamic_29 = 48ui16,
			/*nicename("Global Dynamic 30")*/ _output_color_c_global_dynamic_30 = 49ui16,
			/*nicename("Global Dynamic 31")*/ _output_color_c_global_dynamic_31 = 50ui16,
			/*nicename("Global Dynamic 32")*/ _output_color_c_global_dynamic_32 = 51ui16,
			/*nicename("Global Dynamic 33")*/ _output_color_c_global_dynamic_33 = 52ui16,
			/*nicename("Global Dynamic 34")*/ _output_color_c_global_dynamic_34 = 53ui16,
			/*nicename("Global Dynamic 35")*/ _output_color_c_global_dynamic_35 = 54ui16,
			/*nicename("Global Dynamic 36")*/ _output_color_c_global_dynamic_36 = 55ui16,
			/*nicename("Global Dynamic 37")*/ _output_color_c_global_dynamic_37 = 56ui16,
			/*nicename("Global Dynamic 38")*/ _output_color_c_global_dynamic_38 = 57ui16,
			/*nicename("Global Dynamic 39")*/ _output_color_c_global_dynamic_39 = 58ui16,
			/*nicename("Global Dynamic 40")*/ _output_color_c_global_dynamic_40 = 59ui16,
			/*nicename("Global Dynamic 41")*/ _output_color_c_global_dynamic_41 = 60ui16,
			/*nicename("Global Dynamic 42")*/ _output_color_c_global_dynamic_42 = 61ui16,
		};

		enum nicename("Output Color d") e_output_color_d : uint16_t
		{
			/*nicename("Local a")*/ _output_color_d_local_a = 1ui16,
			/*nicename("Local b")*/ _output_color_d_local_b = 2ui16,
			/*nicename("Local c")*/ _output_color_d_local_c = 3ui16,
			/*nicename("Local d")*/ _output_color_d_local_d = 4ui16,
			/*nicename("Unknown 4")*/ _output_color_d_unknown_4 = 5ui16,
			/*nicename("Unknown 5")*/ _output_color_d_unknown_5 = 6ui16,
			/*nicename("Scoreboard Friendly")*/ _output_color_d_scoreboard_friendly = 7ui16,
			/*nicename("Scoreboard Enemy")*/ _output_color_d_scoreboard_enemy = 8ui16,
			/*nicename("Arming Team")*/ _output_color_d_arming_team = 9ui16,
			/*nicename("Metagame Player 1")*/ _output_color_d_metagame_player_1 = 10ui16,
			/*nicename("Metagame Player 2")*/ _output_color_d_metagame_player_2 = 11ui16,
			/*nicename("Metagame Player 3")*/ _output_color_d_metagame_player_3 = 12ui16,
			/*nicename("Metagame Player 4")*/ _output_color_d_metagame_player_4 = 13ui16,
			/*nicename("Unknown 13")*/ _output_color_d_unknown_13 = 14ui16,
			/*nicename("Unknown 14")*/ _output_color_d_unknown_14 = 15ui16,
			/*nicename("Unknown 15")*/ _output_color_d_unknown_15 = 16ui16,
			/*nicename("Unknown 16")*/ _output_color_d_unknown_16 = 17ui16,
			/*nicename("Unknown 17")*/ _output_color_d_unknown_17 = 18ui16,
			/*nicename("Global Dynamic 0")*/ _output_color_d_global_dynamic_0 = 19ui16,
			/*nicename("Global Dynamic 1")*/ _output_color_d_global_dynamic_1 = 20ui16,
			/*nicename("Global Dynamic 2")*/ _output_color_d_global_dynamic_2 = 21ui16,
			/*nicename("Global Dynamic 3")*/ _output_color_d_global_dynamic_3 = 22ui16,
			/*nicename("Global Dynamic 4")*/ _output_color_d_global_dynamic_4 = 23ui16,
			/*nicename("Global Dynamic 5")*/ _output_color_d_global_dynamic_5 = 24ui16,
			/*nicename("Global Dynamic 6")*/ _output_color_d_global_dynamic_6 = 25ui16,
			/*nicename("Global Dynamic 7")*/ _output_color_d_global_dynamic_7 = 26ui16,
			/*nicename("Global Dynamic 8")*/ _output_color_d_global_dynamic_8 = 27ui16,
			/*nicename("Global Dynamic 9")*/ _output_color_d_global_dynamic_9 = 28ui16,
			/*nicename("Global Dynamic 10")*/ _output_color_d_global_dynamic_10 = 29ui16,
			/*nicename("Global Dynamic 11")*/ _output_color_d_global_dynamic_11 = 30ui16,
			/*nicename("Global Dynamic 12")*/ _output_color_d_global_dynamic_12 = 31ui16,
			/*nicename("Global Dynamic 13")*/ _output_color_d_global_dynamic_13 = 32ui16,
			/*nicename("Global Dynamic 14")*/ _output_color_d_global_dynamic_14 = 33ui16,
			/*nicename("Global Dynamic 15")*/ _output_color_d_global_dynamic_15 = 34ui16,
			/*nicename("Global Dynamic 16")*/ _output_color_d_global_dynamic_16 = 35ui16,
			/*nicename("Global Dynamic 17")*/ _output_color_d_global_dynamic_17 = 36ui16,
			/*nicename("Global Dynamic 18")*/ _output_color_d_global_dynamic_18 = 37ui16,
			/*nicename("Global Dynamic 19")*/ _output_color_d_global_dynamic_19 = 38ui16,
			/*nicename("Global Dynamic 20")*/ _output_color_d_global_dynamic_20 = 39ui16,
			/*nicename("Global Dynamic 21")*/ _output_color_d_global_dynamic_21 = 40ui16,
			/*nicename("Global Dynamic 22")*/ _output_color_d_global_dynamic_22 = 41ui16,
			/*nicename("Global Dynamic 23")*/ _output_color_d_global_dynamic_23 = 42ui16,
			/*nicename("Global Dynamic 24")*/ _output_color_d_global_dynamic_24 = 43ui16,
			/*nicename("Global Dynamic 25")*/ _output_color_d_global_dynamic_25 = 44ui16,
			/*nicename("Global Dynamic 26")*/ _output_color_d_global_dynamic_26 = 45ui16,
			/*nicename("Global Dynamic 27")*/ _output_color_d_global_dynamic_27 = 46ui16,
			/*nicename("Global Dynamic 28")*/ _output_color_d_global_dynamic_28 = 47ui16,
			/*nicename("Global Dynamic 29")*/ _output_color_d_global_dynamic_29 = 48ui16,
			/*nicename("Global Dynamic 30")*/ _output_color_d_global_dynamic_30 = 49ui16,
			/*nicename("Global Dynamic 31")*/ _output_color_d_global_dynamic_31 = 50ui16,
			/*nicename("Global Dynamic 32")*/ _output_color_d_global_dynamic_32 = 51ui16,
			/*nicename("Global Dynamic 33")*/ _output_color_d_global_dynamic_33 = 52ui16,
			/*nicename("Global Dynamic 34")*/ _output_color_d_global_dynamic_34 = 53ui16,
			/*nicename("Global Dynamic 35")*/ _output_color_d_global_dynamic_35 = 54ui16,
			/*nicename("Global Dynamic 36")*/ _output_color_d_global_dynamic_36 = 55ui16,
			/*nicename("Global Dynamic 37")*/ _output_color_d_global_dynamic_37 = 56ui16,
			/*nicename("Global Dynamic 38")*/ _output_color_d_global_dynamic_38 = 57ui16,
			/*nicename("Global Dynamic 39")*/ _output_color_d_global_dynamic_39 = 58ui16,
			/*nicename("Global Dynamic 40")*/ _output_color_d_global_dynamic_40 = 59ui16,
			/*nicename("Global Dynamic 41")*/ _output_color_d_global_dynamic_41 = 60ui16,
			/*nicename("Global Dynamic 42")*/ _output_color_d_global_dynamic_42 = 61ui16,
		};

		enum nicename("Output Color e") e_output_color_e : uint16_t
		{
			/*nicename("Local a")*/ _output_color_e_local_a = 1ui16,
			/*nicename("Local b")*/ _output_color_e_local_b = 2ui16,
			/*nicename("Local c")*/ _output_color_e_local_c = 3ui16,
			/*nicename("Local d")*/ _output_color_e_local_d = 4ui16,
			/*nicename("Unknown 4")*/ _output_color_e_unknown_4 = 5ui16,
			/*nicename("Unknown 5")*/ _output_color_e_unknown_5 = 6ui16,
			/*nicename("Scoreboard Friendly")*/ _output_color_e_scoreboard_friendly = 7ui16,
			/*nicename("Scoreboard Enemy")*/ _output_color_e_scoreboard_enemy = 8ui16,
			/*nicename("Arming Team")*/ _output_color_e_arming_team = 9ui16,
			/*nicename("Metagame Player 1")*/ _output_color_e_metagame_player_1 = 10ui16,
			/*nicename("Metagame Player 2")*/ _output_color_e_metagame_player_2 = 11ui16,
			/*nicename("Metagame Player 3")*/ _output_color_e_metagame_player_3 = 12ui16,
			/*nicename("Metagame Player 4")*/ _output_color_e_metagame_player_4 = 13ui16,
			/*nicename("Unknown 13")*/ _output_color_e_unknown_13 = 14ui16,
			/*nicename("Unknown 14")*/ _output_color_e_unknown_14 = 15ui16,
			/*nicename("Unknown 15")*/ _output_color_e_unknown_15 = 16ui16,
			/*nicename("Unknown 16")*/ _output_color_e_unknown_16 = 17ui16,
			/*nicename("Unknown 17")*/ _output_color_e_unknown_17 = 18ui16,
			/*nicename("Global Dynamic 0")*/ _output_color_e_global_dynamic_0 = 19ui16,
			/*nicename("Global Dynamic 1")*/ _output_color_e_global_dynamic_1 = 20ui16,
			/*nicename("Global Dynamic 2")*/ _output_color_e_global_dynamic_2 = 21ui16,
			/*nicename("Global Dynamic 3")*/ _output_color_e_global_dynamic_3 = 22ui16,
			/*nicename("Global Dynamic 4")*/ _output_color_e_global_dynamic_4 = 23ui16,
			/*nicename("Global Dynamic 5")*/ _output_color_e_global_dynamic_5 = 24ui16,
			/*nicename("Global Dynamic 6")*/ _output_color_e_global_dynamic_6 = 25ui16,
			/*nicename("Global Dynamic 7")*/ _output_color_e_global_dynamic_7 = 26ui16,
			/*nicename("Global Dynamic 8")*/ _output_color_e_global_dynamic_8 = 27ui16,
			/*nicename("Global Dynamic 9")*/ _output_color_e_global_dynamic_9 = 28ui16,
			/*nicename("Global Dynamic 10")*/ _output_color_e_global_dynamic_10 = 29ui16,
			/*nicename("Global Dynamic 11")*/ _output_color_e_global_dynamic_11 = 30ui16,
			/*nicename("Global Dynamic 12")*/ _output_color_e_global_dynamic_12 = 31ui16,
			/*nicename("Global Dynamic 13")*/ _output_color_e_global_dynamic_13 = 32ui16,
			/*nicename("Global Dynamic 14")*/ _output_color_e_global_dynamic_14 = 33ui16,
			/*nicename("Global Dynamic 15")*/ _output_color_e_global_dynamic_15 = 34ui16,
			/*nicename("Global Dynamic 16")*/ _output_color_e_global_dynamic_16 = 35ui16,
			/*nicename("Global Dynamic 17")*/ _output_color_e_global_dynamic_17 = 36ui16,
			/*nicename("Global Dynamic 18")*/ _output_color_e_global_dynamic_18 = 37ui16,
			/*nicename("Global Dynamic 19")*/ _output_color_e_global_dynamic_19 = 38ui16,
			/*nicename("Global Dynamic 20")*/ _output_color_e_global_dynamic_20 = 39ui16,
			/*nicename("Global Dynamic 21")*/ _output_color_e_global_dynamic_21 = 40ui16,
			/*nicename("Global Dynamic 22")*/ _output_color_e_global_dynamic_22 = 41ui16,
			/*nicename("Global Dynamic 23")*/ _output_color_e_global_dynamic_23 = 42ui16,
			/*nicename("Global Dynamic 24")*/ _output_color_e_global_dynamic_24 = 43ui16,
			/*nicename("Global Dynamic 25")*/ _output_color_e_global_dynamic_25 = 44ui16,
			/*nicename("Global Dynamic 26")*/ _output_color_e_global_dynamic_26 = 45ui16,
			/*nicename("Global Dynamic 27")*/ _output_color_e_global_dynamic_27 = 46ui16,
			/*nicename("Global Dynamic 28")*/ _output_color_e_global_dynamic_28 = 47ui16,
			/*nicename("Global Dynamic 29")*/ _output_color_e_global_dynamic_29 = 48ui16,
			/*nicename("Global Dynamic 30")*/ _output_color_e_global_dynamic_30 = 49ui16,
			/*nicename("Global Dynamic 31")*/ _output_color_e_global_dynamic_31 = 50ui16,
			/*nicename("Global Dynamic 32")*/ _output_color_e_global_dynamic_32 = 51ui16,
			/*nicename("Global Dynamic 33")*/ _output_color_e_global_dynamic_33 = 52ui16,
			/*nicename("Global Dynamic 34")*/ _output_color_e_global_dynamic_34 = 53ui16,
			/*nicename("Global Dynamic 35")*/ _output_color_e_global_dynamic_35 = 54ui16,
			/*nicename("Global Dynamic 36")*/ _output_color_e_global_dynamic_36 = 55ui16,
			/*nicename("Global Dynamic 37")*/ _output_color_e_global_dynamic_37 = 56ui16,
			/*nicename("Global Dynamic 38")*/ _output_color_e_global_dynamic_38 = 57ui16,
			/*nicename("Global Dynamic 39")*/ _output_color_e_global_dynamic_39 = 58ui16,
			/*nicename("Global Dynamic 40")*/ _output_color_e_global_dynamic_40 = 59ui16,
			/*nicename("Global Dynamic 41")*/ _output_color_e_global_dynamic_41 = 60ui16,
			/*nicename("Global Dynamic 42")*/ _output_color_e_global_dynamic_42 = 61ui16,
		};

		enum nicename("Output Color f") e_output_color_f : uint16_t
		{
			/*nicename("Local a")*/ _output_color_f_local_a = 1ui16,
			/*nicename("Local b")*/ _output_color_f_local_b = 2ui16,
			/*nicename("Local c")*/ _output_color_f_local_c = 3ui16,
			/*nicename("Local d")*/ _output_color_f_local_d = 4ui16,
			/*nicename("Unknown 4")*/ _output_color_f_unknown_4 = 5ui16,
			/*nicename("Unknown 5")*/ _output_color_f_unknown_5 = 6ui16,
			/*nicename("Scoreboard Friendly")*/ _output_color_f_scoreboard_friendly = 7ui16,
			/*nicename("Scoreboard Enemy")*/ _output_color_f_scoreboard_enemy = 8ui16,
			/*nicename("Arming Team")*/ _output_color_f_arming_team = 9ui16,
			/*nicename("Metagame Player 1")*/ _output_color_f_metagame_player_1 = 10ui16,
			/*nicename("Metagame Player 2")*/ _output_color_f_metagame_player_2 = 11ui16,
			/*nicename("Metagame Player 3")*/ _output_color_f_metagame_player_3 = 12ui16,
			/*nicename("Metagame Player 4")*/ _output_color_f_metagame_player_4 = 13ui16,
			/*nicename("Unknown 13")*/ _output_color_f_unknown_13 = 14ui16,
			/*nicename("Unknown 14")*/ _output_color_f_unknown_14 = 15ui16,
			/*nicename("Unknown 15")*/ _output_color_f_unknown_15 = 16ui16,
			/*nicename("Unknown 16")*/ _output_color_f_unknown_16 = 17ui16,
			/*nicename("Unknown 17")*/ _output_color_f_unknown_17 = 18ui16,
			/*nicename("Global Dynamic 0")*/ _output_color_f_global_dynamic_0 = 19ui16,
			/*nicename("Global Dynamic 1")*/ _output_color_f_global_dynamic_1 = 20ui16,
			/*nicename("Global Dynamic 2")*/ _output_color_f_global_dynamic_2 = 21ui16,
			/*nicename("Global Dynamic 3")*/ _output_color_f_global_dynamic_3 = 22ui16,
			/*nicename("Global Dynamic 4")*/ _output_color_f_global_dynamic_4 = 23ui16,
			/*nicename("Global Dynamic 5")*/ _output_color_f_global_dynamic_5 = 24ui16,
			/*nicename("Global Dynamic 6")*/ _output_color_f_global_dynamic_6 = 25ui16,
			/*nicename("Global Dynamic 7")*/ _output_color_f_global_dynamic_7 = 26ui16,
			/*nicename("Global Dynamic 8")*/ _output_color_f_global_dynamic_8 = 27ui16,
			/*nicename("Global Dynamic 9")*/ _output_color_f_global_dynamic_9 = 28ui16,
			/*nicename("Global Dynamic 10")*/ _output_color_f_global_dynamic_10 = 29ui16,
			/*nicename("Global Dynamic 11")*/ _output_color_f_global_dynamic_11 = 30ui16,
			/*nicename("Global Dynamic 12")*/ _output_color_f_global_dynamic_12 = 31ui16,
			/*nicename("Global Dynamic 13")*/ _output_color_f_global_dynamic_13 = 32ui16,
			/*nicename("Global Dynamic 14")*/ _output_color_f_global_dynamic_14 = 33ui16,
			/*nicename("Global Dynamic 15")*/ _output_color_f_global_dynamic_15 = 34ui16,
			/*nicename("Global Dynamic 16")*/ _output_color_f_global_dynamic_16 = 35ui16,
			/*nicename("Global Dynamic 17")*/ _output_color_f_global_dynamic_17 = 36ui16,
			/*nicename("Global Dynamic 18")*/ _output_color_f_global_dynamic_18 = 37ui16,
			/*nicename("Global Dynamic 19")*/ _output_color_f_global_dynamic_19 = 38ui16,
			/*nicename("Global Dynamic 20")*/ _output_color_f_global_dynamic_20 = 39ui16,
			/*nicename("Global Dynamic 21")*/ _output_color_f_global_dynamic_21 = 40ui16,
			/*nicename("Global Dynamic 22")*/ _output_color_f_global_dynamic_22 = 41ui16,
			/*nicename("Global Dynamic 23")*/ _output_color_f_global_dynamic_23 = 42ui16,
			/*nicename("Global Dynamic 24")*/ _output_color_f_global_dynamic_24 = 43ui16,
			/*nicename("Global Dynamic 25")*/ _output_color_f_global_dynamic_25 = 44ui16,
			/*nicename("Global Dynamic 26")*/ _output_color_f_global_dynamic_26 = 45ui16,
			/*nicename("Global Dynamic 27")*/ _output_color_f_global_dynamic_27 = 46ui16,
			/*nicename("Global Dynamic 28")*/ _output_color_f_global_dynamic_28 = 47ui16,
			/*nicename("Global Dynamic 29")*/ _output_color_f_global_dynamic_29 = 48ui16,
			/*nicename("Global Dynamic 30")*/ _output_color_f_global_dynamic_30 = 49ui16,
			/*nicename("Global Dynamic 31")*/ _output_color_f_global_dynamic_31 = 50ui16,
			/*nicename("Global Dynamic 32")*/ _output_color_f_global_dynamic_32 = 51ui16,
			/*nicename("Global Dynamic 33")*/ _output_color_f_global_dynamic_33 = 52ui16,
			/*nicename("Global Dynamic 34")*/ _output_color_f_global_dynamic_34 = 53ui16,
			/*nicename("Global Dynamic 35")*/ _output_color_f_global_dynamic_35 = 54ui16,
			/*nicename("Global Dynamic 36")*/ _output_color_f_global_dynamic_36 = 55ui16,
			/*nicename("Global Dynamic 37")*/ _output_color_f_global_dynamic_37 = 56ui16,
			/*nicename("Global Dynamic 38")*/ _output_color_f_global_dynamic_38 = 57ui16,
			/*nicename("Global Dynamic 39")*/ _output_color_f_global_dynamic_39 = 58ui16,
			/*nicename("Global Dynamic 40")*/ _output_color_f_global_dynamic_40 = 59ui16,
			/*nicename("Global Dynamic 41")*/ _output_color_f_global_dynamic_41 = 60ui16,
			/*nicename("Global Dynamic 42")*/ _output_color_f_global_dynamic_42 = 61ui16,
		};

		enum nicename("Output Scalar a") e_output_scalar_a : uint16_t
		{
			/*nicename("Unknown 0")*/ _output_scalar_a_unknown_0 = 1ui16,
			/*nicename("Unknown 1")*/ _output_scalar_a_unknown_1 = 2ui16,
			/*nicename("Input")*/ _output_scalar_a_input = 3ui16,
			/*nicename("Range Input")*/ _output_scalar_a_range_input = 4ui16,
			/*nicename("Funtion Value 1")*/ _output_scalar_a_funtion_value_1 = 5ui16,
			/*nicename("Funtion Value 2")*/ _output_scalar_a_funtion_value_2 = 6ui16,
			/*nicename("Funtion Value 3")*/ _output_scalar_a_funtion_value_3 = 7ui16,
			/*nicename("Funtion Value 4")*/ _output_scalar_a_funtion_value_4 = 8ui16,
			/*nicename("Unknown 8")*/ _output_scalar_a_unknown_8 = 9ui16,
			/*nicename("Unknown 9")*/ _output_scalar_a_unknown_9 = 10ui16,
		};

		enum nicename("Output Scalar b") e_output_scalar_b : uint16_t
		{
			/*nicename("Unknown 0")*/ _output_scalar_b_unknown_0 = 1ui16,
			/*nicename("Unknown 1")*/ _output_scalar_b_unknown_1 = 2ui16,
			/*nicename("Input")*/ _output_scalar_b_input = 3ui16,
			/*nicename("Range Input")*/ _output_scalar_b_range_input = 4ui16,
			/*nicename("Funtion Value 1")*/ _output_scalar_b_funtion_value_1 = 5ui16,
			/*nicename("Funtion Value 2")*/ _output_scalar_b_funtion_value_2 = 6ui16,
			/*nicename("Funtion Value 3")*/ _output_scalar_b_funtion_value_3 = 7ui16,
			/*nicename("Funtion Value 4")*/ _output_scalar_b_funtion_value_4 = 8ui16,
			/*nicename("Unknown 8")*/ _output_scalar_b_unknown_8 = 9ui16,
			/*nicename("Unknown 9")*/ _output_scalar_b_unknown_9 = 10ui16,
		};

		enum nicename("Output Scalar c") e_output_scalar_c : uint16_t
		{
			/*nicename("Unknown 0")*/ _output_scalar_c_unknown_0 = 1ui16,
			/*nicename("Unknown 1")*/ _output_scalar_c_unknown_1 = 2ui16,
			/*nicename("Input")*/ _output_scalar_c_input = 3ui16,
			/*nicename("Range Input")*/ _output_scalar_c_range_input = 4ui16,
			/*nicename("Funtion Value 1")*/ _output_scalar_c_funtion_value_1 = 5ui16,
			/*nicename("Funtion Value 2")*/ _output_scalar_c_funtion_value_2 = 6ui16,
			/*nicename("Funtion Value 3")*/ _output_scalar_c_funtion_value_3 = 7ui16,
			/*nicename("Funtion Value 4")*/ _output_scalar_c_funtion_value_4 = 8ui16,
			/*nicename("Unknown 8")*/ _output_scalar_c_unknown_8 = 9ui16,
			/*nicename("Unknown 9")*/ _output_scalar_c_unknown_9 = 10ui16,
		};

		enum nicename("Output Scalar d") e_output_scalar_d : uint16_t
		{
			/*nicename("Unknown 0")*/ _output_scalar_d_unknown_0 = 1ui16,
			/*nicename("Unknown 1")*/ _output_scalar_d_unknown_1 = 2ui16,
			/*nicename("Input")*/ _output_scalar_d_input = 3ui16,
			/*nicename("Range Input")*/ _output_scalar_d_range_input = 4ui16,
			/*nicename("Funtion Value 1")*/ _output_scalar_d_funtion_value_1 = 5ui16,
			/*nicename("Funtion Value 2")*/ _output_scalar_d_funtion_value_2 = 6ui16,
			/*nicename("Funtion Value 3")*/ _output_scalar_d_funtion_value_3 = 7ui16,
			/*nicename("Funtion Value 4")*/ _output_scalar_d_funtion_value_4 = 8ui16,
			/*nicename("Unknown 8")*/ _output_scalar_d_unknown_8 = 9ui16,
			/*nicename("Unknown 9")*/ _output_scalar_d_unknown_9 = 10ui16,
		};

		enum nicename("Output Scalar e") e_output_scalar_e : uint16_t
		{
			/*nicename("Unknown 0")*/ _output_scalar_e_unknown_0 = 1ui16,
			/*nicename("Unknown 1")*/ _output_scalar_e_unknown_1 = 2ui16,
			/*nicename("Input")*/ _output_scalar_e_input = 3ui16,
			/*nicename("Range Input")*/ _output_scalar_e_range_input = 4ui16,
			/*nicename("Funtion Value 1")*/ _output_scalar_e_funtion_value_1 = 5ui16,
			/*nicename("Funtion Value 2")*/ _output_scalar_e_funtion_value_2 = 6ui16,
			/*nicename("Funtion Value 3")*/ _output_scalar_e_funtion_value_3 = 7ui16,
			/*nicename("Funtion Value 4")*/ _output_scalar_e_funtion_value_4 = 8ui16,
			/*nicename("Unknown 8")*/ _output_scalar_e_unknown_8 = 9ui16,
			/*nicename("Unknown 9")*/ _output_scalar_e_unknown_9 = 10ui16,
		};

		enum nicename("Output Scalar f") e_output_scalar_f : uint16_t
		{
			/*nicename("Unknown 0")*/ _output_scalar_f_unknown_0 = 1ui16,
			/*nicename("Unknown 1")*/ _output_scalar_f_unknown_1 = 2ui16,
			/*nicename("Input")*/ _output_scalar_f_input = 3ui16,
			/*nicename("Range Input")*/ _output_scalar_f_range_input = 4ui16,
			/*nicename("Funtion Value 1")*/ _output_scalar_f_funtion_value_1 = 5ui16,
			/*nicename("Funtion Value 2")*/ _output_scalar_f_funtion_value_2 = 6ui16,
			/*nicename("Funtion Value 3")*/ _output_scalar_f_funtion_value_3 = 7ui16,
			/*nicename("Funtion Value 4")*/ _output_scalar_f_funtion_value_4 = 8ui16,
			/*nicename("Unknown 8")*/ _output_scalar_f_unknown_8 = 9ui16,
			/*nicename("Unknown 9")*/ _output_scalar_f_unknown_9 = 10ui16,
		};

		e_shader_index nicename("Shader Index") shader_index;
		int8_t __unknown0;
		int8_t __unknown1;
		int8_t __unknown2;
		float nicename("Local Color Alpha a") local_color_alpha_a;
		colorf nicename("Local Color a") local_color_a;
		float nicename("Local Color Alpha b") local_color_alpha_b;
		colorf nicename("Local Color b") local_color_b;
		float nicename("Local Color Alpha c") local_color_alpha_c;
		colorf nicename("Local Color c") local_color_c;
		float nicename("Local Color Alpha d") local_color_alpha_d;
		colorf nicename("Local Color d") local_color_d;
		float nicename("Local Scalar a") local_scalar_a;
		float nicename("Local Scalar b") local_scalar_b;
		float nicename("Local Scalar c") local_scalar_c;
		float nicename("Local Scalar d") local_scalar_d;
		e_output_color_a nicename("Output Color a") output_color_a;
		e_output_color_b nicename("Output Color b") output_color_b;
		e_output_color_c nicename("Output Color c") output_color_c;
		e_output_color_d nicename("Output Color d") output_color_d;
		e_output_color_e nicename("Output Color e") output_color_e;
		e_output_color_f nicename("Output Color f") output_color_f;
		e_output_scalar_a nicename("Output Scalar a") output_scalar_a;
		e_output_scalar_b nicename("Output Scalar b") output_scalar_b;
		e_output_scalar_c nicename("Output Scalar c") output_scalar_c;
		e_output_scalar_d nicename("Output Scalar d") output_scalar_d;
		e_output_scalar_e nicename("Output Scalar e") output_scalar_e;
		e_output_scalar_f nicename("Output Scalar f") output_scalar_f;
		Undefined32 __unknown3;
		Undefined32 __unknown4;
		int16_t __unknown5;
		int16_t __unknown6;
	};

	// Shader Index : While represented as an enum, it is actually an index to the "HUD Shaders" block in CHGD
	s_tag_block_definition<s_render_data_definition> nicename("Render Data") render_data_block;
};

