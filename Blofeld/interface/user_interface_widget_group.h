#pragma once

namespace blofeld
{

extern s_tag_block InfinityMissionSeasonImagesDefinition_block;
extern s_tag_block InfinityMissionImagesDefinition_block;
extern s_tag_block pgcr_enemy_to_category_list_block;
extern s_tag_block pgcr_player_to_category_entry_block;
extern s_tag_block pgcr_enemy_to_category_entry_block;
extern s_tag_block pgcr_damage_type_image_block;
extern s_tag_block gui_portrait_pose_block;
extern s_tag_block cui_component_screen_reference_block;
extern s_tag_block cui_overlay_camera_block;
extern s_tag_block cui_player_model_camera_settings_definition_block;
extern s_tag_block cui_player_model_controller_settings_definition_block;
extern s_tag_block cui_player_model_transition_settings_definition_block;
extern s_tag_block cui_active_roster_settings_block;
extern s_tag_block campaign_state_screen_script_block;
extern s_tag_block UserInterfaceGameScreenSequenceStepDefinition_block;
extern s_tag_block SwapTagReferenceDefinition_block;
extern s_tag_block color_presets_block;
extern s_tag_block tint_colors_block;
extern s_tag_block color_list_block;
extern s_tag_block gui_alert_description_block;
extern s_tag_block gui_dialog_description_block;
extern s_tag_block pgcr_incident_block;

constexpr unsigned long INFINITYUIIMAGES_TAG = 'iuii';

extern s_tag_block InfinityUIImages_block;
extern s_tag_group InfinityUIImages_group;
constexpr unsigned long PGCR_ENEMY_TO_CATEGORY_MAPPING_DEFINITION_TAG = 'pcec';

extern s_tag_block pgcr_enemy_to_category_mapping_definition_block;
extern s_tag_group pgcr_enemy_to_category_mapping_definition_group;
constexpr unsigned long PGCR_DAMAGE_TYPE_IMAGE_MAPPING_DEFINITION_TAG = 'pdti';

extern s_tag_block pgcr_damage_type_image_mapping_definition_block;
extern s_tag_group pgcr_damage_type_image_mapping_definition_group;
constexpr unsigned long PORTRAIT_POSES_DEFINITION_TAG = 'ppod';

extern s_tag_block portrait_poses_definition_block;
extern s_tag_group portrait_poses_definition_group;
constexpr unsigned long USER_INTERFACE_SOUNDS_DEFINITION_TAG = 'uise';

extern s_tag_block user_interface_sounds_definition_block;
extern s_tag_group user_interface_sounds_definition_group;
constexpr unsigned long USER_INTERFACE_GLOBALS_DEFINITION_TAG = 'wgtz';

extern s_tag_block user_interface_globals_definition_block;
extern s_tag_group user_interface_globals_definition_group;
constexpr unsigned long USER_INTERFACE_SHARED_GLOBALS_DEFINITION_TAG = 'wigl';

extern s_tag_block user_interface_shared_globals_definition_block;
extern s_tag_group user_interface_shared_globals_definition_group;
} // namespace blofeld
