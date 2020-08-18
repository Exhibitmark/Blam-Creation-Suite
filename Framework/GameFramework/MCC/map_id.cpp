#include <gameframework-private-pch.h>

e_engine_type map_id_to_engine_type(e_map_id map_id)
{
	switch (map_id)
	{
	case _map_id_haloreach_noble_actual:
	case _map_id_haloreach_winter_contingency:
	case _map_id_haloreach_oni_sword_base:
	case _map_id_haloreach_nightfall:
	case _map_id_haloreach_tip_of_the_spear:
	case _map_id_haloreach_long_night_of_solace:
	case _map_id_haloreach_exodus:
	case _map_id_haloreach_new_alexandria:
	case _map_id_haloreach_the_package:
	case _map_id_haloreach_the_pillar_of_autumn:
	case _map_id_haloreach_the_pillar_of_autumn_credits:
	case _map_id_haloreach_lone_wolf:
	case _map_id_haloreach_boardwalk:
	case _map_id_haloreach_boneyard:
	case _map_id_haloreach_countdown:
	case _map_id_haloreach_powerhouse:
	case _map_id_haloreach_reflection:
	case _map_id_haloreach_spire:
	case _map_id_haloreach_sword_base:
	case _map_id_haloreach_zealot:
	case _map_id_haloreach_anchor_9:
	case _map_id_haloreach_breakpoint:
	case _map_id_haloreach_tempest:
	case _map_id_haloreach_condemned:
	case _map_id_haloreach_highlands:
	case _map_id_haloreach_battle_canyon:
	case _map_id_haloreach_penance:
	case _map_id_haloreach_ridgeline:
	case _map_id_haloreach_solitary:
	case _map_id_haloreach_high_noon:
	case _map_id_haloreach_breakneck:
	case _map_id_haloreach_forge_world:
	case _map_id_haloreach_beachhead:
	case _map_id_haloreach_corvette:
	case _map_id_haloreach_courtyard:
	case _map_id_haloreach_glacier:
	case _map_id_haloreach_holdout:
	case _map_id_haloreach_outpost:
	case _map_id_haloreach_overlook:
	case _map_id_haloreach_waterfront:
	case _map_id_haloreach_unearthed:
	case _map_id_haloreach_installation_04:
		return _engine_type_haloreach;

	case _map_id_halo1_pillar_of_autumn:
	case _map_id_halo1_halo:
	case _map_id_halo1_truth_and_reconciliation:
	case _map_id_halo1_silent_cartographer:
	case _map_id_halo1_assault_on_the_control_room:
	case _map_id_halo1_343_guilty_spark:
	case _map_id_halo1_the_library:
	case _map_id_halo1_two_betrayals:
	case _map_id_halo1_keyes:
	case _map_id_halo1_the_maw:
	case _map_id_halo1_battle_creek:
	case _map_id_halo1_sidewinder:
	case _map_id_halo1_damnation:
	case _map_id_halo1_rat_race:
	case _map_id_halo1_prisoner:
	case _map_id_halo1_hang_em_high:
	case _map_id_halo1_chill_out:
	case _map_id_halo1_derelict:
	case _map_id_halo1_boarding_action:
	case _map_id_halo1_chiron:
	case _map_id_halo1_blood_gulch:
	case _map_id_halo1_wizard:
	case _map_id_halo1_longest:
	case _map_id_halo1_death_island:
	case _map_id_halo1_danger_canyon:
	case _map_id_halo1_infinity:
	case _map_id_halo1_timberland:
	case _map_id_halo1_ice_fields:
	case _map_id_halo1_gephyrophobia:
		return _engine_type_halo1;

	case _map_id_halo2_the_heretic:
	case _map_id_halo2_the_armory:
	case _map_id_halo2_cairo_station:
	case _map_id_halo2_outskirts:
	case _map_id_halo2_metropolis:
	case _map_id_halo2_the_arbiter:
	case _map_id_halo2_the_oracle:
	case _map_id_halo2_delta_halo:
	case _map_id_halo2_regret:
	case _map_id_halo2_sacred_icon:
	case _map_id_halo2_quarantine_zone:
	case _map_id_halo2_gravemind:
	case _map_id_halo2_uprising:
	case _map_id_halo2_high_charity:
	case _map_id_halo2_the_great_journey:
	case _map_id_halo2_lockout:
	case _map_id_halo2_ascension:
	case _map_id_halo2_midship:
	case _map_id_halo2_ivory_tower:
	case _map_id_halo2_beaver_creek:
	case _map_id_halo2_burial_mounds:
	case _map_id_halo2_colossus:
	case _map_id_halo2_zanzibar:
	case _map_id_halo2_coagulation:
	case _map_id_halo2_headlong:
	case _map_id_halo2_waterworks:
	case _map_id_halo2_foundation:
	case _map_id_halo2_containment:
	case _map_id_halo2_warlock:
	case _map_id_halo2_sanctuary:
	case _map_id_halo2_turf:
	case _map_id_halo2_backwash:
	case _map_id_halo2_elongation:
	case _map_id_halo2_gemini:
	case _map_id_halo2_relic:
	case _map_id_halo2_terminal:
	case _map_id_halo2_desolation:
	case _map_id_halo2_tombstone:
	case _map_id_halo2_district:
	case _map_id_halo2_uplift:
		return _engine_type_halo2;

	case _map_id_halo3_arrival:
	case _map_id_halo3_sierra_117:
	case _map_id_halo3_crows_nest:
	case _map_id_halo3_tsavo_highway:
	case _map_id_halo3_the_storm:
	case _map_id_halo3_floodgate:
	case _map_id_halo3_the_ark:
	case _map_id_halo3_the_covenant:
	case _map_id_halo3_cortana:
	case _map_id_halo3_halo:
	case _map_id_halo3_epilogue:
	case _map_id_halo3_construct:
	case _map_id_halo3_epitaph:
	case _map_id_halo3_guardian:
	case _map_id_halo3_high_ground:
	case _map_id_halo3_isolation:
	case _map_id_halo3_last_resort:
	case _map_id_halo3_narrows:
	case _map_id_halo3_sandtrap:
	case _map_id_halo3_snowbound:
	case _map_id_halo3_the_pit:
	case _map_id_halo3_valhalla:
	case _map_id_halo3_foundry:
	case _map_id_halo3_rats_nest:
	case _map_id_halo3_standoff:
	case _map_id_halo3_avalanche:
	case _map_id_halo3_blackout:
	case _map_id_halo3_ghost_town:
	case _map_id_halo3_cold_storage:
	case _map_id_halo3_assembly:
	case _map_id_halo3_orbital:
	case _map_id_halo3_sandbox:
	case _map_id_halo3_citadel:
	case _map_id_halo3_heretic:
	case _map_id_halo3_longshore:
		return _engine_type_halo3;

	case _map_id_halo3odst_prepare_to_drop:
	case _map_id_halo3odst_mombasa_streets:
	case _map_id_halo3odst_tayari_plaza:
	case _map_id_halo3odst_uplift_reserve:
	case _map_id_halo3odst_kizingo_boulevard:
	case _map_id_halo3odst_oni_alpha_site:
	case _map_id_halo3odst_nmpd_hq:
	case _map_id_halo3odst_kikowani_station:
	case _map_id_halo3odst_data_hive:
	case _map_id_halo3odst_coastal_highway:
	case _map_id_halo3odst_epilogue:
		return _engine_type_halo3odst;

	case _map_id_halo4_prologue:
	case _map_id_halo4_dawn:
	case _map_id_halo4_requiem:
	case _map_id_halo4_forerunner:
	case _map_id_halo4_infinity:
	case _map_id_halo4_reclaimer:
	case _map_id_halo4_shutdown:
	case _map_id_halo4_composer:
	case _map_id_halo4_midnight:
	case _map_id_halo4_epilogue:
	case _map_id_halo4_adrift:
	case _map_id_halo4_abandon:
	case _map_id_halo4_complex:
	case _map_id_halo4_exile:
	case _map_id_halo4_haven:
	case _map_id_halo4_longbow:
	case _map_id_halo4_meltdown:
	case _map_id_halo4_ragnarok:
	case _map_id_halo4_solace:
	case _map_id_halo4_vortex:
	case _map_id_halo4_ravine:
	case _map_id_halo4_impact:
	case _map_id_halo4_erosion:
	case _map_id_halo4_forge_island:
	case _map_id_halo4_wreckage:
	case _map_id_halo4_harvest:
	case _map_id_halo4_shatter:
	case _map_id_halo4_landfall:
	case _map_id_halo4_monolith:
	case _map_id_halo4_skyline:
	case _map_id_halo4_daybreak:
	case _map_id_halo4_outcast:
	case _map_id_halo4_perdition:
	case _map_id_halo4_pitfall:
	case _map_id_halo4_vertigo:
	case _map_id_halo4_ff_chopperbowl:
	case _map_id_halo4_ff_sniperalley:
	case _map_id_halo4_ff_fortsw:
	case _map_id_halo4_ff_temple:
	case _map_id_halo4_ff_scurve:
	case _map_id_halo4_ff_courtyard:
	case _map_id_halo4_ff_complex:
	case _map_id_halo4_ff_valhalla:
	case _map_id_halo4_ff_factory:
	case _map_id_halo4_ff_mezzanie:
	case _map_id_halo4_ff_caverns:
	case _map_id_halo4_ff_vortex:
	case _map_id_halo4_ff_breach:
	case _map_id_halo4_ff_hillside:
	case _map_id_halo4_ff_engine:
		return _engine_type_halo4;

	case _map_id_groundhog_lockout:
	case _map_id_groundhog_ascension:
	case _map_id_groundhog_zanzibar:
	case _map_id_groundhog_coagulation:
	case _map_id_groundhog_warlock:
	case _map_id_groundhog_sanctuary:
	case _map_id_groundhog_forge_skybox01:
	case _map_id_groundhog_forge_skybox02:
	case _map_id_groundhog_forge_skybox03:
	case _map_id_groundhog_relic:
		return _engine_type_groundhog;
	}

	return _engine_type_not_set;
}

e_mcc_game_mode map_id_to_game_mode(e_map_id map_id)
{
	switch (map_id)
	{
	case _map_id_haloreach_noble_actual:
	case _map_id_haloreach_winter_contingency:
	case _map_id_haloreach_oni_sword_base:
	case _map_id_haloreach_nightfall:
	case _map_id_haloreach_tip_of_the_spear:
	case _map_id_haloreach_long_night_of_solace:
	case _map_id_haloreach_exodus:
	case _map_id_haloreach_new_alexandria:
	case _map_id_haloreach_the_package:
	case _map_id_haloreach_the_pillar_of_autumn:
	case _map_id_haloreach_the_pillar_of_autumn_credits:
	case _map_id_haloreach_lone_wolf:
	case _map_id_halo1_pillar_of_autumn:
	case _map_id_halo1_halo:
	case _map_id_halo1_truth_and_reconciliation:
	case _map_id_halo1_silent_cartographer:
	case _map_id_halo1_assault_on_the_control_room:
	case _map_id_halo1_343_guilty_spark:
	case _map_id_halo1_the_library:
	case _map_id_halo1_two_betrayals:
	case _map_id_halo1_keyes:
	case _map_id_halo1_the_maw:
	case _map_id_halo2_the_heretic:
	case _map_id_halo2_the_armory:
	case _map_id_halo2_cairo_station:
	case _map_id_halo2_outskirts:
	case _map_id_halo2_metropolis:
	case _map_id_halo2_the_arbiter:
	case _map_id_halo2_the_oracle:
	case _map_id_halo2_delta_halo:
	case _map_id_halo2_regret:
	case _map_id_halo2_sacred_icon:
	case _map_id_halo2_quarantine_zone:
	case _map_id_halo2_gravemind:
	case _map_id_halo2_uprising:
	case _map_id_halo2_high_charity:
	case _map_id_halo2_the_great_journey:
	case _map_id_halo3_arrival:
	case _map_id_halo3_sierra_117:
	case _map_id_halo3_crows_nest:
	case _map_id_halo3_tsavo_highway:
	case _map_id_halo3_the_storm:
	case _map_id_halo3_floodgate:
	case _map_id_halo3_the_ark:
	case _map_id_halo3_the_covenant:
	case _map_id_halo3_cortana:
	case _map_id_halo3_halo:
	case _map_id_halo3_epilogue:
	case _map_id_halo3odst_prepare_to_drop:
	case _map_id_halo3odst_mombasa_streets:
	case _map_id_halo3odst_tayari_plaza:
	case _map_id_halo3odst_uplift_reserve:
	case _map_id_halo3odst_kizingo_boulevard:
	case _map_id_halo3odst_oni_alpha_site:
	case _map_id_halo3odst_nmpd_hq:
	case _map_id_halo3odst_kikowani_station:
	case _map_id_halo3odst_data_hive:
	case _map_id_halo3odst_coastal_highway:
	case _map_id_halo3odst_epilogue:
	case _map_id_halo4_prologue:
	case _map_id_halo4_dawn:
	case _map_id_halo4_requiem:
	case _map_id_halo4_forerunner:
	case _map_id_halo4_infinity:
	case _map_id_halo4_reclaimer:
	case _map_id_halo4_shutdown:
	case _map_id_halo4_composer:
	case _map_id_halo4_midnight:
	case _map_id_halo4_epilogue:
		return _mcc_game_mode_campaign;

	case _map_id_halo4_ff_chopperbowl:
	case _map_id_halo4_ff_sniperalley:
	case _map_id_halo4_ff_fortsw:
	case _map_id_halo4_ff_temple:
	case _map_id_halo4_ff_scurve:
	case _map_id_halo4_ff_courtyard:
	case _map_id_halo4_ff_complex:
	case _map_id_halo4_ff_valhalla:
	case _map_id_halo4_ff_factory:
	case _map_id_halo4_ff_mezzanie:
	case _map_id_halo4_ff_caverns:
	case _map_id_halo4_ff_vortex:
	case _map_id_halo4_ff_breach:
	case _map_id_halo4_ff_hillside:
	case _map_id_halo4_ff_engine:
		return _mcc_game_mode_spartan_ops;

	case _map_id_halo1_battle_creek:
	case _map_id_halo1_sidewinder:
	case _map_id_halo1_damnation:
	case _map_id_halo1_rat_race:
	case _map_id_halo1_prisoner:
	case _map_id_halo1_hang_em_high:
	case _map_id_halo1_chill_out:
	case _map_id_halo1_derelict:
	case _map_id_halo1_boarding_action:
	case _map_id_halo1_chiron:
	case _map_id_halo1_blood_gulch:
	case _map_id_halo1_wizard:
	case _map_id_halo1_longest:
	case _map_id_halo1_death_island:
	case _map_id_halo1_danger_canyon:
	case _map_id_halo1_infinity:
	case _map_id_halo1_timberland:
	case _map_id_halo1_ice_fields:
	case _map_id_halo1_gephyrophobia:
	case _map_id_halo2_lockout:
	case _map_id_halo2_ascension:
	case _map_id_halo2_midship:
	case _map_id_halo2_ivory_tower:
	case _map_id_halo2_beaver_creek:
	case _map_id_halo2_burial_mounds:
	case _map_id_halo2_colossus:
	case _map_id_halo2_zanzibar:
	case _map_id_halo2_coagulation:
	case _map_id_halo2_headlong:
	case _map_id_halo2_waterworks:
	case _map_id_halo2_foundation:
	case _map_id_halo2_containment:
	case _map_id_halo2_warlock:
	case _map_id_halo2_sanctuary:
	case _map_id_halo2_turf:
	case _map_id_halo2_backwash:
	case _map_id_halo2_elongation:
	case _map_id_halo2_gemini:
	case _map_id_halo2_relic:
	case _map_id_halo2_terminal:
	case _map_id_halo2_desolation:
	case _map_id_halo2_tombstone:
	case _map_id_halo2_district:
	case _map_id_halo2_uplift:
	case _map_id_halo3_construct:
	case _map_id_halo3_epitaph:
	case _map_id_halo3_guardian:
	case _map_id_halo3_high_ground:
	case _map_id_halo3_isolation:
	case _map_id_halo3_last_resort:
	case _map_id_halo3_narrows:
	case _map_id_halo3_sandtrap:
	case _map_id_halo3_snowbound:
	case _map_id_halo3_the_pit:
	case _map_id_halo3_valhalla:
	case _map_id_halo3_foundry:
	case _map_id_halo3_rats_nest:
	case _map_id_halo3_standoff:
	case _map_id_halo3_avalanche:
	case _map_id_halo3_blackout:
	case _map_id_halo3_ghost_town:
	case _map_id_halo3_cold_storage:
	case _map_id_halo3_assembly:
	case _map_id_halo3_orbital:
	case _map_id_halo3_sandbox:
	case _map_id_halo3_citadel:
	case _map_id_halo3_heretic:
	case _map_id_halo3_longshore:
	case _map_id_haloreach_boardwalk:
	case _map_id_haloreach_boneyard:
	case _map_id_haloreach_countdown:
	case _map_id_haloreach_powerhouse:
	case _map_id_haloreach_reflection:
	case _map_id_haloreach_spire:
	case _map_id_haloreach_sword_base:
	case _map_id_haloreach_zealot:
	case _map_id_haloreach_anchor_9:
	case _map_id_haloreach_breakpoint:
	case _map_id_haloreach_tempest:
	case _map_id_haloreach_condemned:
	case _map_id_haloreach_highlands:
	case _map_id_haloreach_battle_canyon:
	case _map_id_haloreach_penance:
	case _map_id_haloreach_ridgeline:
	case _map_id_haloreach_solitary:
	case _map_id_haloreach_high_noon:
	case _map_id_haloreach_breakneck:
	case _map_id_haloreach_forge_world:
	case _map_id_haloreach_unearthed:
	case _map_id_haloreach_installation_04:
	case _map_id_halo4_adrift:
	case _map_id_halo4_abandon:
	case _map_id_halo4_complex:
	case _map_id_halo4_exile:
	case _map_id_halo4_haven:
	case _map_id_halo4_longbow:
	case _map_id_halo4_meltdown:
	case _map_id_halo4_ragnarok:
	case _map_id_halo4_solace:
	case _map_id_halo4_vortex:
	case _map_id_halo4_ravine:
	case _map_id_halo4_impact:
	case _map_id_halo4_erosion:
	case _map_id_halo4_forge_island:
	case _map_id_halo4_wreckage:
	case _map_id_halo4_harvest:
	case _map_id_halo4_shatter:
	case _map_id_halo4_landfall:
	case _map_id_halo4_monolith:
	case _map_id_halo4_skyline:
	case _map_id_halo4_daybreak:
	case _map_id_halo4_outcast:
	case _map_id_halo4_perdition:
	case _map_id_halo4_pitfall:
	case _map_id_halo4_vertigo:
	case _map_id_groundhog_lockout:
	case _map_id_groundhog_ascension:
	case _map_id_groundhog_zanzibar:
	case _map_id_groundhog_coagulation:
	case _map_id_groundhog_warlock:
	case _map_id_groundhog_sanctuary:
	case _map_id_groundhog_forge_skybox01:
	case _map_id_groundhog_forge_skybox02:
	case _map_id_groundhog_forge_skybox03:
	case _map_id_groundhog_relic:
		return _mcc_game_mode_multiplayer;

	case _map_id_mainmenu:
		return _mcc_game_mode_ui_shell;

	case _map_id_haloreach_beachhead:
	case _map_id_haloreach_corvette:
	case _map_id_haloreach_courtyard:
	case _map_id_haloreach_glacier:
	case _map_id_haloreach_holdout:
	case _map_id_haloreach_outpost:
	case _map_id_haloreach_overlook:
	case _map_id_haloreach_waterfront:
		return _mcc_game_mode_firefight;
	}

	return _mcc_game_mode_none;
}

std::vector<signed int>& map_id_to_available_insertion_points(long map_id, bool is_firefight)
{
	static std::vector<signed int> vec;
	if (!vec.empty()) vec.clear();

	if (is_firefight)
	{
		switch (map_id)
		{
		case _map_id_halo3odst_mombasa_streets: vec = { 7, 8 };
		case _map_id_halo3odst_tayari_plaza:
		case _map_id_halo3odst_uplift_reserve: vec = { 4 };
		case _map_id_halo3odst_kizingo_boulevard: vec = { 5, 6 };
		case _map_id_halo3odst_oni_alpha_site: vec = { 4, 5 };
		case _map_id_halo3odst_nmpd_hq: vec = { 5 };
		case _map_id_halo3odst_data_hive: vec = { 6 };
		case _map_id_halo3odst_coastal_highway: vec = { 7 };
		}
	}
	else
	{
		switch (map_id)
		{
		case _map_id_halo3_arrival:
		case _map_id_halo3_epilogue: vec = { };
		case _map_id_halo3_tsavo_highway:
		case _map_id_halo3_the_storm:
		case _map_id_halo3_floodgate:
		case _map_id_halo3_cortana:
		case _map_id_halo3_halo: vec = { 0, 1 };
		case _map_id_halo3_crows_nest:
		case _map_id_halo3_the_ark:
		case _map_id_halo3_the_covenant: vec = { 0, 1, 2 };

		case _map_id_halo3odst_prepare_to_drop:
		case _map_id_halo3odst_epilogue: vec = { };
		case _map_id_halo3odst_mombasa_streets: vec = { 0, 1, 2, 3, 4, 5, 6, 7 };
		case _map_id_halo3odst_tayari_plaza:
		case _map_id_halo3odst_uplift_reserve:
		case _map_id_halo3odst_oni_alpha_site:
		case _map_id_halo3odst_kikowani_station: vec = { 0, 1, 2, 3 };
		case _map_id_halo3odst_kizingo_boulevard:
		case _map_id_halo3odst_nmpd_hq: vec = { 0, 1, 2, 3, 4 };
		case _map_id_halo3odst_data_hive: vec = { 0, 1, 2, 3, 4, 5 };
		case _map_id_halo3odst_coastal_highway: vec = { 0, 1, 2, 3, 4, 5, 6 };

		case _map_id_haloreach_noble_actual:
		case _map_id_haloreach_new_alexandria:
		case _map_id_haloreach_the_pillar_of_autumn_credits: vec = { };
		case _map_id_haloreach_winter_contingency: vec = { 0, 3, 4 };
		case _map_id_haloreach_oni_sword_base:
		case _map_id_haloreach_nightfall:
		case _map_id_haloreach_long_night_of_solace:
		case _map_id_haloreach_exodus: vec = { 0, 1, 2 };
		case _map_id_haloreach_tip_of_the_spear:
		case _map_id_haloreach_the_pillar_of_autumn: vec = { 0, 2, 4 };
		case _map_id_haloreach_the_package: vec = { 0, 4, 7 };
		case _map_id_haloreach_lone_wolf: vec = { 0 };

		case _map_id_halo4_prologue:
		case _map_id_halo4_epilogue: vec = { };
		case _map_id_halo4_dawn: vec = { 0, 1 };
		case _map_id_halo4_requiem: vec = { 0, 5 };
		case _map_id_halo4_forerunner: vec = { 0, 2, 5, 9 };
		case _map_id_halo4_infinity: vec = { 0, 3, 6 };
		case _map_id_halo4_reclaimer:
		case _map_id_halo4_composer: vec = { 0, 7 };
		case _map_id_halo4_shutdown: vec = { 0, 3, 4, 5 };
		case _map_id_halo4_midnight: vec = { 0, 1, 2 };
		}
	}

	return vec;
};