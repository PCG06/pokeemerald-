MistfallCity_Harbor_MapScripts::
# 4 "data/maps/MistfallCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MistfallCity_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MistfallCity_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/MistfallCity_Harbor/scripts.pory"
	map_script_2 VAR_BRUCE_SHIP, 1, MistfallCity_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

MistfallCity_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 6 "data/maps/MistfallCity_Harbor/scripts.pory"
	lock
# 7 "data/maps/MistfallCity_Harbor/scripts.pory"
	addobject 1
# 8 "data/maps/MistfallCity_Harbor/scripts.pory"
	setobjectxyperm 1, 8, 10
# 9 "data/maps/MistfallCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_MISTFALL_CITY_HARBOR_CAPTAIN_BRUCE
# 10 "data/maps/MistfallCity_Harbor/scripts.pory"
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 8, 11
# 11 "data/maps/MistfallCity_Harbor/scripts.pory"
	setvar VAR_BRUCE_SHIP, 0
# 12 "data/maps/MistfallCity_Harbor/scripts.pory"
	turnplayer DIR_NORTH
# 13 "data/maps/MistfallCity_Harbor/scripts.pory"
	msgbox MistfallCity_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_Text_0, MSGBOX_NPC
	return


MistfallCity_Harbor_EventScript_CaptainBruce::
# 22 "data/maps/MistfallCity_Harbor/scripts.pory"
	msgbox MistfallCity_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_Text_0, MSGBOX_NPC
	return


MistfallCity_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_Text_0:
# 13 "data/maps/MistfallCity_Harbor/scripts.pory"
	.string "Captain Bruce: Here we reached\n"
	.string "Mistfall City!\p"
	.string "Let me know when we're sailing back to\n"
	.string "Sola.$"
