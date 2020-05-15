#include <blofeld-private-pch.h>

namespace blofeld
{

TAG_BLOCK(death_program_special, k_maximum_death_program_special_types)
{
	{ _field_long_enum, "special type^" },
	{ _field_block, "damage type", &death_program_damage_reporting_block },
	{ _field_terminator },
};

TAG_BLOCK(death_program_damage_reporting, k_maximum_death_program_damage_types)
{
	{ _field_long_enum, "damage type^" },
	{ _field_block, "velocity", &death_program_velocity_gate_block },
	{ _field_terminator },
};

TAG_BLOCK(death_program_velocity_gate, k_maximum_death_program_velocity_gates)
{
	{ _field_real, "minimum velocity:wu/s#this death program will be selected if the biped\'s velocity is above this number^" },
	{ _field_long_enum, "death program" },
	{ _field_real, "death program scale#input to the death program to scale the result (only affects ragdolls)" },
	{ _field_string_id, "death animation stance#Override stance that contains the death animations for this gait speed when using animate then ragdoll option." },
	{ _field_terminator },
};

TAG_GROUP(death_program_selector, DEATH_PROGRAM_SELECTOR_TAG)
{
	{ _field_custom, "Explanation" },
	{ _field_explanation, "Death Program Selection" },
	{ _field_custom },
	{ _field_tag_reference, "parent" },
	{ _field_block, "special type", &death_program_special_block },
	{ _field_terminator },
};

} // namespace blofeld
