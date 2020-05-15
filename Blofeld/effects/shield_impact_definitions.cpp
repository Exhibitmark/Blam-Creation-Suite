#include <blofeld-private-pch.h>

namespace blofeld
{

TAG_GROUP(shield_impact, SHIELD_IMPACT_TAG)
{
	{ _field_explanation, "Shield Controls" },
	{ _field_word_flags, "flags" },
	{ _field_short_integer, "version!" },
	{ _field_custom, "Shield Intensity" },
	{ _field_explanation, "Shield Intensity" },
	{ _field_real, "Recent Damage Intensity" },
	{ _field_real, "Current Damage Intensity" },
	{ _field_custom },
	{ _field_custom, "Shield Edge" },
	{ _field_explanation, "Shield Edge" },
	{ _field_real, "Depth Fade Range:world units" },
	{ _field_real, "Outer Fade Radius:[0-1]" },
	{ _field_real, "Center Radius:[0-1]" },
	{ _field_real, "Inner Fade Radius:[0-1]" },
	{ _field_struct, "Edge Glow Color" },
	{ _field_struct, "Edge Glow Intensity" },
	{ _field_custom },
	{ _field_custom, "Plasma" },
	{ _field_explanation, "Plasma" },
	{ _field_real, "Plasma Depth Fade Range:world units" },
	{ _field_tag_reference, "Plasma Noise Texture 0" },
	{ _field_tag_reference, "Plasma Noise Texture 1" },
	{ _field_real, "Tiling Scale" },
	{ _field_real, "Scroll Speed" },
	{ _field_real, "Edge Sharpness" },
	{ _field_real, "Center Sharpness" },
	{ _field_real, "Plasma Outer Fade Radius:[0-1]" },
	{ _field_real, "Plasma Center Radius:[0-1]" },
	{ _field_real, "Plasma Inner Fade Radius:[0-1]" },
	{ _field_struct, "Plasma Center Color" },
	{ _field_struct, "Plasma Center Intensity" },
	{ _field_struct, "Plasma Edge Color" },
	{ _field_struct, "Plasma Edge Intensity" },
	{ _field_custom },
	{ _field_custom, "Extrusion Oscillation" },
	{ _field_explanation, "Extrusion Oscillation" },
	{ _field_tag_reference, "Oscillation Texture 0" },
	{ _field_tag_reference, "Oscillation Texture 1" },
	{ _field_real, "Oscillation Tiling Scale" },
	{ _field_real, "Oscillation Scroll Speed" },
	{ _field_struct, "Extrusion Amount" },
	{ _field_struct, "Oscillation Amplitude" },
	{ _field_custom },
	{ _field_custom, "Hit Response" },
	{ _field_explanation, "Hit Response" },
	{ _field_real, "Hit Time:seconds" },
	{ _field_struct, "Hit Color" },
	{ _field_struct, "Hit Intensity" },
	{ _field_struct, "Hit Radius" },
	{ _field_tag_reference, "hit blob texture (adds significant cost)" },
	{ _field_custom },
	{ _field_real_quaternion, "edge_scales!" },
	{ _field_real_quaternion, "edge_offsets!" },
	{ _field_real_quaternion, "plasma_scales!" },
	{ _field_real_quaternion, "depth_fade_params!" },
	{ _field_terminator },
};

} // namespace blofeld
