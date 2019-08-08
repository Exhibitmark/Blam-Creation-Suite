#pragma once


/*
   This file has been generated by IDA.
   It contains local type definitions from
   the type library 'MCC-Win64-Shipping.exe'
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct _RTL_CRITICAL_SECTION_DEBUG;
struct IGameEngine;
struct GameEvents_vftbl;
struct GameEvents;
struct GameEngineHostCallback_vftbl;
struct GameEngineHostCallback;

typedef void(NullSubFunc)();

/* 514 */
struct __declspec(align(8)) IGameEngine_vftbl
{
	void(__fastcall* InitGraphics)(IGameEngine*, __int64, __int64, __int64, __int64);
	void(__fastcall* InitThread)(IGameEngine*, GameEngineHostCallback*, __int64);
	void* Member02;
	void* Member03;
	void* Member04;
	void* Member05;
	void* Member06;
	void* Member07;
	void* Member08;
	void* Member09;
	void* Member10;
};

/* 17 */
//typedef unsigned int DWORD;

/* 515 */
struct IGameEngine
{
	IGameEngine_vftbl* vftbl;
	DWORD unknown0;
	float unknown1;
	char unknown2[454];

	void InitGraphics(__int64 a1, __int64 a2, __int64 /*IDXGISwapChain **/pSwapChain, __int64 a4)
	{
		vftbl->InitGraphics(this, a1, a2, pSwapChain, a4);
	}
	void InitThread(GameEngineHostCallback* gameEngineHostCallback, __int64 a2)
	{
		vftbl->InitThread(this, gameEngineHostCallback, a2);
	}
};

/* 516 */
struct GameEngineHostCallback_vftbl
{
	NullSubFunc* Member00;
	NullSubFunc* Member01;
	NullSubFunc* Member02;
	NullSubFunc* Member03;
	NullSubFunc* Member04;
	void(__fastcall* WriteGameState)(GameEngineHostCallback*, LPVOID, size_t);
	NullSubFunc* Member06;
	NullSubFunc* Member07;
	NullSubFunc* Member08;
	NullSubFunc* Member09;
	NullSubFunc* GetGameEvents;
	NullSubFunc* Member11; // DataAccessGameVariant
	NullSubFunc* Member12; // DataAccessMapVariant
	NullSubFunc* Member13;
	NullSubFunc* Member14;
	NullSubFunc* Member15;
	NullSubFunc* Member16;
	NullSubFunc* Member17;
	NullSubFunc* Member18;
	//NullSubFunc* Member19;
	__int64(__fastcall* Member19)(GameEngineHostCallback*, __int64/*, __int64, __int64*/);
	NullSubFunc* Member20;
	NullSubFunc* Member21;
	NullSubFunc* Member22;
	NullSubFunc* Member23;
	NullSubFunc* Member24;
	NullSubFunc* Member25;
	NullSubFunc* Member26;
	NullSubFunc* Member27;
	NullSubFunc* Member28;
	NullSubFunc* Member29;
	NullSubFunc* SetPlayerName;
	NullSubFunc* Member31;
	NullSubFunc* Member32;
	NullSubFunc* Member33;
	NullSubFunc* Member34;
	NullSubFunc* Member35;
	NullSubFunc* Member36;
	NullSubFunc* Member37;
	NullSubFunc* Member38;
	NullSubFunc* Member39;
	NullSubFunc* Member40;
	NullSubFunc* Member41;
	NullSubFunc* Member42;
};

/* 517 */
struct __declspec(align(8)) GameEngineHostCallback
{
	GameEngineHostCallback_vftbl* vftbl;
	GameEvents* pGameEvents;
	QWORD data1[5863];
};


/* 4 */
typedef struct _GUID GUID;

/* 23 */
typedef _RTL_CRITICAL_SECTION_DEBUG* PRTL_CRITICAL_SECTION_DEBUG;


/* 28 */
typedef void* HANDLE;

/* 29 */
typedef unsigned __int64 ULONG_PTR;


/* 520 */
struct __declspec(align(8)) UnknownType0
{
	QWORD qword0;
	QWORD* qword1;
	QWORD* qword2;
	DWORD dword0;
	DWORD dword1;
	QWORD qword4;
	QWORD* qword5;
	QWORD* qword6;
	DWORD dword2;
	DWORD dword3;
	DWORD dword4;
	DWORD dword5;
};

/* 519 */
struct GameEvents
{
	GameEvents_vftbl* vftbl;
	_WORD word0;
	_WORD word1;
	GUID guid;
	__unaligned __declspec(align(1)) _QWORD qword0;
	__unaligned __declspec(align(1)) _QWORD qword1;
	__unaligned __declspec(align(1)) _QWORD qword2;
	__unaligned __declspec(align(1)) _QWORD qword3;
	__unaligned __declspec(align(1)) _QWORD qword4;
	__unaligned __declspec(align(1)) _QWORD qword5;
	__unaligned __declspec(align(1)) _QWORD qword6;
	__unaligned __declspec(align(1)) _QWORD qword7;
	_DWORD dword0;
	_DWORD dword1;
	_DWORD dword2;
	_RTL_CRITICAL_SECTION rtlCriticalSection;
	_QWORD qword8;
	UnknownType0 unknownStruct;
	_QWORD qword9;
	_QWORD qwordA;
	_QWORD qwordB;
};

/* 518 */
struct __declspec(align(8)) GameEvents_vftbl
{
	NullSubFunc* AchievementEarned;
	NullSubFunc* AshesToAshes;
	NullSubFunc* Assist;
	NullSubFunc* AudioLogClaimed;
	NullSubFunc* Base;
	NullSubFunc* Betrayal;
	__int64(__fastcall* BIFactControllerSettings)(GameEvents*, unsigned __int64*, GUID*, _QWORD, __int64, _DWORD, int, int);
	NullSubFunc* BIFactDeepLinkRecieve;
	void(__fastcall* BIFactDeepLinkSend)(GameEvents*, _QWORD*, GUID*, _QWORD*, __int64*);
	NullSubFunc* BIFactDualWield;
	NullSubFunc* BIFactGameSession;
	NullSubFunc* BIFactLoadout;
	NullSubFunc* BIFactMatchmaking;
	NullSubFunc* BIFactMatchmakingDetails;
	NullSubFunc* BIFactMedia;
	NullSubFunc* BirdOfPrey;
	NullSubFunc* BitsAndPiecesDestroyed;
	NullSubFunc* BroadcastingAssist;
	NullSubFunc* BroadcastingDeath;
	NullSubFunc* BroadcastingHeartbeat;
	NullSubFunc* BroadcastingKill;
	NullSubFunc* BroadcastingMatchEnd;
	NullSubFunc* MultiplayerRoundEnd;
	NullSubFunc* MultiplayerRoundStart;
	NullSubFunc* BroadcastingMatchStart;
	NullSubFunc* BroadcastingMedal;
	NullSubFunc* BroadcastingPlayerJoined;
	NullSubFunc* BroadcastingPlayerLeft;
	NullSubFunc* BroadcastingPlayerSpawn;
	NullSubFunc* BroadcastingPlayerSwitchedTeams;
	NullSubFunc* BroadcastingScore;
	void(__fastcall* BroadcastingStart)(GameEvents*, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD);
	NullSubFunc* ChallengeCompleted;
	NullSubFunc* ClassicModeSwitched;
	NullSubFunc* CleverGirl;
	NullSubFunc* ClueClaimed;
	NullSubFunc* CompletionCount;
	NullSubFunc* Customization;
	NullSubFunc* DashboardContext;
	NullSubFunc* Death;
	NullSubFunc* DollFound;
	NullSubFunc* EliteWin;
	NullSubFunc* EnemyDefeated;
	NullSubFunc* FriendsBestedOnHeroLeaderboard;
	NullSubFunc* GameProgress;
	NullSubFunc* GameVarSaved;
	NullSubFunc* HelloNurse;
	NullSubFunc* InGamePresence;
	NullSubFunc* ISeeYou;
	NullSubFunc* Joinability;
	NullSubFunc* Lobby;
	NullSubFunc* MainMenuPresence;
	NullSubFunc* MapVarSaved;
	NullSubFunc* MatchmakingHopper;
	NullSubFunc* MediaUsage;
	NullSubFunc* MeldOfferPresented;
	NullSubFunc* MeldOfferResponded;
	NullSubFunc* MeldPageAction;
	NullSubFunc* MeldPageView;
	NullSubFunc* MissionCompleted;
	NullSubFunc* MortardomWraithsKilled;
	NullSubFunc* MultiplayerGameEngine;
	NullSubFunc* MultiplayerRoundEnd_0;
	NullSubFunc* MultiplayerRoundStart_0;
	NullSubFunc* NappersCaught;
	NullSubFunc* NewsStoryRead;
	NullSubFunc* ObjectiveEnd;
	NullSubFunc* ObjectiveStart;
	NullSubFunc* PageAction;
	NullSubFunc* PageView;
	NullSubFunc* PhantomHunter;
	NullSubFunc* PigsCanFly;
	NullSubFunc* PlayerCheckedInToday;
	NullSubFunc* PlayerDefeated;
	NullSubFunc* PlayerGameResults;
	NullSubFunc* PlayerGameResultsDamageStat;
	NullSubFunc* PlayerGameResultsGriefingStats;
	NullSubFunc* PlayerGameResultsInterestStats;
	NullSubFunc* PlayerGameResultsMedal;
	NullSubFunc* PlayerSessionEnd;
	NullSubFunc* PlayerSessionPause;
	NullSubFunc* PlayerSessionResume;
	NullSubFunc* PlayerSessionStart;
	NullSubFunc* PlayerSpawned;
	NullSubFunc* PlaylistCompleted;
	NullSubFunc* PlaylistProgress;
	NullSubFunc* RankedStatsDNFInfo;
	NullSubFunc* RankedStatsOverride;
	NullSubFunc* RankedStatsPenalty;
	NullSubFunc* RankedStatsUpdate;
	NullSubFunc* RankedUpSpartanIv;
	NullSubFunc* RealtimeFlagCaptured;
	NullSubFunc* RealtimeMedal;
	NullSubFunc* RealtimePilotedVehicle;
	NullSubFunc* RivalID;
	NullSubFunc* SectionEnd;
	NullSubFunc* SectionStart;
	NullSubFunc* SectionStats;
	NullSubFunc* SessionSizeUpdate;
	NullSubFunc* SizeIsEverything;
	NullSubFunc* SkeetShooter;
	NullSubFunc* SkullClaimed;
	NullSubFunc* SpartanOpsMissionCompleted;
	NullSubFunc* TerminalFound;
	NullSubFunc* TicketsEarned;
	NullSubFunc* TitleCompleted;
	NullSubFunc* TitleLaunched;
	NullSubFunc* ValhallaSign;
	NullSubFunc* ViewOffer;
	NullSubFunc* VIPStatusEarned;
	NullSubFunc* WhatAboutTanksDestroyed;
	NullSubFunc* WonWarGame;
	NullSubFunc* ZanzibarSign;
	NullSubFunc* EnemyDefeated_0;
	NullSubFunc* Member114;
	NullSubFunc* Member115;
	NullSubFunc* Member116;
	NullSubFunc* Member117;
	NullSubFunc* Member118;
	NullSubFunc* Member119;
	__int64(__fastcall* Member120)(GameEvents*, _QWORD);
	NullSubFunc* Member121;
	GUID* (__fastcall* GetGuid)(GameEvents*, GUID*);
	NullSubFunc* Member123;
	NullSubFunc* Member124;
	NullSubFunc* Member125;
};

/* 20 */
typedef unsigned __int16 WORD;


/* 25 */
typedef _LIST_ENTRY LIST_ENTRY;



/* 522 */
struct UnknownStringType
{
	char data[48];
};

enum e_campaign_difficulty_level : int
{
	_campaign_difficulty_level_easy,
	_campaign_difficulty_level_normal,
	_campaign_difficulty_level_heroic,
	_campaign_difficulty_level_legendary,

	k_number_of_campaign_difficulty_levels,
};


enum e_map_id : int
{
	// TODO: add other games

	// reach
	_map_id_m05 = 178,
	_map_id_m10,
	_map_id_m20,
	_map_id_m30,
	_map_id_m35,
	_map_id_m45,
	_map_id_m50,
	_map_id_m52,
	_map_id_m60,
	_map_id_m70,
	_map_id_m70_a,
	_map_id_m70_bonus,
	_map_id_50_panopticon,
	_map_id_70_boneyard,
	_map_id_45_launch_station,
	_map_id_30_settlement,
	_map_id_52_ivory_tower,
	_map_id_35_island,
	_map_id_20_sword_slayer,
	_map_id_45_aftship,
	_map_id_dlc_slayer,
	_map_id_dlc_invasion,
	_map_id_dlc_medium,
	_map_id_condemned,
	_map_id_trainingpreserve,
	_map_id_cex_beaver_creek,
	_map_id_cex_damnation,
	_map_id_cex_timberland,
	_map_id_cex_prisoner,
	_map_id_cex_hangemhigh,
	_map_id_cex_headlong,
	_map_id_forge_halo,
	_map_id_ff50_park,
	_map_id_ff45_corvette,
	_map_id_ff20_courtyard,
	_map_id_ff60_icecave,
	_map_id_ff70_holdout,
	_map_id_ff60_ruins,
	_map_id_ff10_prototype,
	_map_id_ff30_waterfront,
	_map_id_ff_unearthed,
	_map_id_cex_ff_halo,

	k_number_of_map_ids
};


struct s_game_launch_data_memzero
{
	s_game_launch_data_memzero()
	{

	}
	s_game_launch_data_memzero(size_t size)
	{
		memset(this, 0, size);
	}
};

struct __cppobj __declspec(align(8)) s_game_launch_data : s_game_launch_data_memzero
{
	s_game_launch_data(const s_game_launch_data& original)
		: pGameHandle(GetModuleHandleA("HaloReach.dll"))
	{
		
	}

	s_game_launch_data()
		: s_game_launch_data_memzero(sizeof(s_game_launch_data))
		, pGameHandle(GetModuleHandleA("HaloReach.dll"))
		//, unknown0(1)
		////gap0
		//, dword2B40C(182)
		//, unsigned2B410(0)
		////gap2B414
		//, qword2B430(0)
		//, dword2B438(0)
		//, dword2B43C(0)
		//, unknownQword0(0)
		//, unknownQword1(0)
		//, a()
		//, b(1)
		////gap2B460
		////byte2B680
		//, languageString(L"en-US")
		////unknown6bytes1
		////phinstance__2B748
		//, dword2B750(1525022720)
		//, dword2B754(32763)
		////gap2B758
		////pqword2B798
		//, dword2B7A0(812910640)
		//, qword2B7A8(47244641008)
	{


		//memset(gameVariantData, 0, sizeof(gameVariantData));
		//memset(gap2B414, 0, sizeof(gap2B414));
		//memset(gap2B460, 0, sizeof(gap2B460));
		//memset(byte2B680, 0, sizeof(byte2B680));
		//memset(gap2B758, 0, sizeof(gap2B758));

		unsigned char byte2B4E4Data[400] = {
			0xC0, 0x51, 0xA8, 0x31, 0xFE, 0x01, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
		static_assert(sizeof(byte2B4E4) == sizeof(byte2B4E4Data), "This should match");
		memcpy(byte2B4E4, byte2B4E4Data, sizeof(byte2B4E4));

		//FILE* pFile = fopen("C:\\!MCC\\output2.bin", "r");
		//fread(this, 1, sizeof(this), pFile);
		//fclose(pFile);

	}

#ifdef ZEROONEZERO
#define COLOR0 <bgcolor=0xFF0000>
#define COLOR1 <bgcolor=0x00FF00>
#define COLOR2 <bgcolor=0x0000FF>
#define COLOR3 <bgcolor=0xFF00FF>
#define COLOR4 <bgcolor=0x00FFFF>
#define COLOR5 <bgcolor=0xFFFF00>
#else
#define COLOR0
#define COLOR1
#define COLOR2
#define COLOR3
#define COLOR4
#define COLOR5
#endif

	_DWORD GameMode = 1;
	_BYTE GameVariantData[173 * 1024] = {};
	// [0x180330500, mcc_id_to_reach_map_id, https://pastebin.com/r3ihQagj]
	// [180330BD0, mcc_id_to_reach_map_name, https://pastebin.com/Qx72e0G6]
	e_map_id MapId = _map_id_m35;
	e_campaign_difficulty_level CampaignDifficultyLevel = _campaign_difficulty_level_easy;
	_BYTE byte2B40C[12] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
	_BYTE GameSkullFlags;
	_BYTE byte2B419[15] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
	uint8_t* pGameStateHeader = nullptr;
	_DWORD GameStateHeaderSize = 0;
	_DWORD dword2B434 = 0;
	const char* SavedFilmPath = nullptr;
	_QWORD qword2B440 = 0; // changes
	_QWORD qword2B448 = 17120639283816404738;
	_QWORD JoinRemoteSquad = 1;
	_BYTE byte2B458[17][8] = { // peers?
		{ 0x02, 0x97, 0x79, 0x37, 0xB8, 0xBA, 0x98, 0xED }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	};
	_QWORD PlayerCount = 1;
	_BYTE byte2B4E4[400] = {
		0xC0, 0x51, 0xA8, 0x31, 0xFE, 0x01, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
	_BYTE byte2B678[16] = {
		0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
	wchar_t Locale[0x55] = L"en-US";
	_BYTE unknown6bytes1[6] = {};
	_DWORD dword2B738 = 1;
	_DWORD dword2B73C = 1;
	HMODULE pGameHandle = 0;
	_DWORD EngineIndex0 = 6;
	_DWORD EngineIndex1 = 6;
	char unknownStruct2B750[48] = {}; // changes
	_QWORD qword2B780 = 0;
	_QWORD qword2B788 = 0;
	struct RallyPointLoader* pRallyPointLoader = nullptr; // changes // WARNING: this is needed for MCC to run don't overwrite
	_DWORD dword2B798 = 11;
	_DWORD dword2B79C = 0;
	_QWORD qword2B7A0 = 0; // changes
	_QWORD qword2B7A8 = 0;
	_BYTE byte2B7B0 = 0;
	_BYTE byte2B7B1 = 0;
	_WORD word2B7B2 = 0;
	_WORD word2B7B4 = 0;
	_WORD word2B7B6 = 0;
	_QWORD qword2B7B8 = 0; // changes
	_DWORD dword2B7C0 = 0;
	_DWORD dword2B7C4 = 0;
};
static_assert(sizeof(s_game_launch_data) == 0x2B7C8, "");
static_assert(offsetof(s_game_launch_data, s_game_launch_data::pGameHandle) == 0x2B740, "");

struct s_game_launcher
{
	_DWORD dword0;
	_DWORD dword4;
	s_game_launch_data GameLaunchData;
};
static_assert(sizeof(s_game_launcher) == 0x2B7D0, "");

struct c_controller_interface
{
	int Flags;
	int ControllerIndex;
	char unknown8[2872];
	wchar_t Name[16];
	char unknownB60[88];
};

enum e_load_state
{
	_load_state_initial,
	_load_state_create_local_squad,
	_load_state_select_game_mode,
	_load_state_saved_film,
	_load_state_campaign,
	_load_state_previous_game_state,
	_load_state_multiplayer,
	_load_state_survival,
	_load_state_wait_for_party,
	_load_state_join_remote_squad,
	_load_state_unused,
	_load_state_start_game,
	_load_state_terminate,

	k_number_of_load_states,
	k_load_state_invalid = -1,
};

enum e_peer_property
{
	_peer_property_none,
	_peer_property_network_configuration_unavailable,
	_peer_property_file_manifest_unavailable,
	_peer_property_banhammer_unavailable,
	_peer_property_player_stats_unavailable,
	_peer_property_lsp_stats_unavailable,
	_peer_property_master_hopper_file_unavailable,
	_peer_property_hopper_specific_file_unavailable,
	_peer_property_network_configuration_pending,
	_peer_property_file_manifest_pending,
	_peer_property_dlc_map_manifest_pending,
	_peer_property_dlc_enumeration_pending,
	_peer_property_banhammer_pending,
	_peer_property_player_stats_pending,
	_peer_property_lsp_stats_pending,
	_peer_property_master_hopper_file_pending,
	_peer_property_hopper_specific_file_pending,
	_peer_property_no_map_selected,
	_peer_property_no_game_selected,
	_peer_property_map_load_failure,
	_peer_property_map_load_precaching,
	_peer_property_invalid_film_selected,
	_peer_property_no_film_selected,
	_peer_property_too_many_teams,
	_peer_property_all_observers,
	_peer_property_too_many_for_local_coop,
	_peer_property_too_many_for_net_coop,
	_peer_property_incompatible_for_net_coop,
	_peer_property_account_not_online_enabled,
	_peer_property_all_profiles_must_by_live_gold,
	_peer_property_must_be_connect_to_live,
	_peer_property_must_be_in_a_live_lobby,
	_peer_property_invalid_hopper,
	_peer_property_squad_too_large,
	_peer_property_squad_too_small,
	_peer_property_too_many_local_players,
	_peer_property_too_few_local_players,
	_peer_property_non_local_players_exist,
	_peer_property_games_played_too_low,
	_peer_property_games_played_too_high,
	_peer_property_grade_too_low,
	_peer_property_grade_too_high,
	_peer_property_access_bit_not_set,
	_peer_property_unpaid_in_paid_hopper,
	_peer_property_paid_in_unpaid_hopper,
	_peer_property_guest_not_allowed,
	_peer_property_player_missing_files,
	_peer_property_player_missing_required_maps,
	_peer_property_player_banned_from_matchmaking,
	_peer_property_matchmaking_ban_quitting,
	_peer_property_not_yet_start_time,
	_peer_property_end_time_has_passed,
	_peer_property_arena_hopper_no_longer_available,
	_peer_property_hd_required_for_playlist,
	_peer_property_custom_games_are_disabled,
	_peer_property_multiplayer_split_screen,
	_peer_property_no_live_in_live_lobby,
	_peer_property_must_have_live_for_alpha,
	_peer_property_only_one_player_in_theater_alpha,
	_peer_property_theater_too_many_players,
	_peer_property_theater_must_have_hard_drive,
	_peer_property_theater_leader_must_be_host,
	_peer_property_theater_all_not_compatible,
	_peer_property_too_many_players_in_forge,
	_peer_property_user_content_not_permitted,
	_peer_property_coop_player_missing_hdd,
	_peer_property_coop_player_hdd_mismatch,
	_peer_property_coop_player_language_mismatch,
	_peer_property_invalid_film_language,
	_peer_property_controller_not_attached,
	_peer_property_survival_too_many_players,
	_peer_property_queued_join_expected,
	_peer_property_map_and_game_incompatible,

	k_number_of_peer_properties
};

enum e_scenario_type : int
{
	_scenario_type_none,
	_scenario_type_campaign,
	_scenario_type_multiplayer,
	_scenario_type_mainmenu,
	_scenario_type_shared,
	_scenario_type_shared_campaign,
	_scenario_type_unused5,
	_scenario_type_unused6,

	k_number_of_scenario_types,
};

struct s_game_options
{
	e_scenario_type scenario_type;
	BYTE game_simulation[8];
	WORD frame_limit;
	WORD unknownE;
	BYTE game_instance[8];
	DWORD random_seed;
	DWORD language;
	BYTE campaign_id;
	DWORD determinism_version;
	BYTE game_variant[0xFC04];
	DWORD map_id;
	BYTE unknownFC30[4];
	char scenario_path[260];
	BYTE unknownFE94[129];
	BYTE game_is_playtest;
	BYTE unknownFF16[18];
	DWORD campaign_difficulty;
	BYTE unknownFF2C[299];
	BYTE map_variant[0xD9AC];
	BYTE unknown1DA03[4345];
};
static_assert(sizeof(s_game_options) == 0x1E9A0, "");

struct s_game_state_header
{
	DWORD *unknown0;
	char source_file[256];
	char build[32];
	DWORD unknown108;
	BYTE unknown10C[4];
	s_game_options game_options;
	BYTE scenario_game_state[24];
	BYTE unknown24C90[64];
};
static_assert(sizeof(s_game_state_header) == 0x1EB28, "");

struct s_game_globals
{
	BYTE unknown0[16];
	s_game_options game_options;
	BYTE unknown1E9B0[1584];
};
static_assert(sizeof(s_game_globals) == 0x1EFE0, "");

template<typename T>
struct point3d
{
	T X, Y, Z;
};

template<typename T>
struct vector3d
{
	T I, J, K;
};

struct s_camera
{
	point3d<float> Position;
	point3d<float> PositionShift;
	float Look;
	float LookShift;
	float Depth;
	float FOVRadians;
	vector3d<float> Forward;
	vector3d<float> Up;
	vector3d<float> Direction;

	//...

	bool Compare(s_camera *camera)
	{
		auto position = Position.X != camera->Position.X || Position.Y != camera->Position.Y || Position.Z != camera->Position.Z;
		auto positionShift = PositionShift.X != camera->PositionShift.X || PositionShift.Y != camera->PositionShift.Y || PositionShift.Z != camera->PositionShift.Z;
		auto look = Look != camera->Look;
		auto lookShift = LookShift != camera->LookShift;
		auto depth = Depth != camera->Depth;
		auto fovRadians = FOVRadians != camera->FOVRadians;
		auto forward = Forward.I != camera->Forward.I || Forward.J != camera->Forward.J || Forward.K != camera->Forward.K;
		auto up = Up.I != camera->Up.I || Up.J != camera->Up.J || Up.K != camera->Up.K;
		auto direction = Direction.I != camera->Direction.I || Direction.J != camera->Direction.J || Direction.K != camera->Direction.K;

		return position || positionShift || look || lookShift || depth || fovRadians || forward || up || direction;
	}
};