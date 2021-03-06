#pragma once

enum e_network_message_type
{
	_network_message_type_ping = 0,
	_network_message_type_pong,
	_network_message_type_broadcast_search,
	_network_message_type_broadcast_reply,
	_network_message_type_connect_request,
	_network_message_type_connect_refuse,
	_network_message_type_connect_establish,
	_network_message_type_connect_closed,
	_network_message_type_join_request,
	_network_message_type_peer_connect,
	_network_message_type_join_abort,
	_network_message_type_join_refuse,
	_network_message_type_leave_session,
	_network_message_type_leave_acknowledge,
	_network_message_type_session_disband,
	_network_message_type_session_boot,
	_network_message_type_host_handoff,
	_network_message_type_peer_handoff,
	_network_message_type_host_transition,
	_network_message_type_host_reestablish,
	_network_message_type_host_decline,
	_network_message_type_peer_reestablish,
	_network_message_type_peer_establish,
	_network_message_type_election,
	_network_message_type_election_refuse,
	_network_message_type_time_synchronize,
	_network_message_type_membership_update,
	_network_message_type_peer_properties,
	_network_message_type_delegate_leadership,
	_network_message_type_boot_machine,
	_network_message_type_player_add,
	_network_message_type_player_refuse,
	_network_message_type_player_remove,
	_network_message_type_player_properties,
	_network_message_type_parameters_update,
	_network_message_type_parameters_request,
	_network_message_type_security,
	_network_message_type_view_establishment,
	_network_message_type_player_acknowledge,
	_network_message_type_synchronous_update,
	_network_message_type_synchronous_playback_control,
	_network_message_type_synchronous_actions,
	_network_message_type_synchronous_acknowledge,
	_network_message_type_synchronous_join_catchup,
	_network_message_type_game_results,
	_network_message_type_update_queue_element,
	_network_message_type_end_game,
	_network_message_type_update_queue_element1, // same name as _network_message_type_update_queue_element
	_network_message_type_test,
	_network_message_type_test_force_host_machine_name,

	k_number_of_network_message_types
};
