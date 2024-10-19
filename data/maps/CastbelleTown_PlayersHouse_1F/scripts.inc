CastbelleTown_PlayersHouse_1F_MapScripts::
# 4 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CastbelleTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CastbelleTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_CASTBELLE_TOWN_STATE, 0, CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon
# 6 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_CASTBELLE_TOWN_STATE, 4, CastbelleTown_PlayerHouse_1F_EventScript_AfterGettingPartnerPokemon
	.2byte 0


CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon::
# 11 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	lock
# 12 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	delay 6
# 13 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, Common_Movement_FaceUp
# 14 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	emote 1, EMOTE_EXCLAIM
# 15 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, MomWalkToPlayer
# 16 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	delay 24
# 28 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, MomWalkToChair
# 29 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, Common_Movement_FaceLeft
# 30 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 1
# 31 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_MAIN_STORY, 2
# 32 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	release
	end


# 36 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
MomWalkToPlayer:
# 37 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 38 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 38 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 38 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 39 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
MomWalkToChair:
# 43 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 44 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 44 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 44 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 45 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_down
	step_end

CastbelleTown_PlayerHouse_1F_EventScript_AfterGettingPartnerPokemon::
# 49 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	lock
# 50 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 51 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	emote 1, EMOTE_EXCLAIM
# 52 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, MomWalkToPlayer_2
# 53 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayerHouse_1F_EventScript_AfterGettingPartnerPokemon_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_OLD_ROD
# 62 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 63 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_REPEL, 5
# 64 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_TM_RETURN
# 65 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayerHouse_1F_EventScript_AfterGettingPartnerPokemon_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, MomWalkToChair_2
# 73 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	delay 24
# 74 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 5
	end


# 78 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
MomWalkToPlayer_2:
# 79 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 79 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 79 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 80 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
MomWalkToChair_2:
# 84 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 84 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 84 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 85 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 86 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	face_left
	step_end

CastbelleTown_PlayersHouse_1F_EventScript_Mom::
# 90 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	lock
# 91 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 92 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 1
	goto_if_ge CastbelleTown_PlayersHouse_1F_EventScript_Mom_4
CastbelleTown_PlayersHouse_1F_EventScript_Mom_3:
# 113 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_2, MSGBOX_AUTOCLOSE
# 115 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 116 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_PlayersHouse_1F_EventScript_Mom_1:
# 119 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	release
	end

CastbelleTown_PlayersHouse_1F_EventScript_Mom_2:
# 93 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 94 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq CastbelleTown_PlayersHouse_1F_EventScript_Mom_8
# 103 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_1, MSGBOX_AUTOCLOSE
CastbelleTown_PlayersHouse_1F_EventScript_Mom_7:
# 110 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	faceoriginaldir
	goto CastbelleTown_PlayersHouse_1F_EventScript_Mom_1

CastbelleTown_PlayersHouse_1F_EventScript_Mom_4:
# 92 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_le CastbelleTown_PlayersHouse_1F_EventScript_Mom_2
	goto CastbelleTown_PlayersHouse_1F_EventScript_Mom_3

CastbelleTown_PlayersHouse_1F_EventScript_Mom_8:
# 95 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_0, MSGBOX_AUTOCLOSE
	goto CastbelleTown_PlayersHouse_1F_EventScript_Mom_7


CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon_Text_0:
# 16 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}!\n"
	.string "Did you hear?\p"
	.string "Prof. Pine is giving out Pokémon to new\n"
	.string "Trainers!\p"
	.string "You just got your Trainer Card,\n"
	.string "why not get yourself a new companion?\p"
	.string "Prof. Pine would be glad to give you\n"
	.string "one!\p"
	.string "Oh! Brian came earlier to meet you.\n"
	.string "It would be better if you go and meet\l"
	.string "him before going to Prof. Pine's lab.$"

CastbelleTown_PlayerHouse_1F_EventScript_AfterGettingPartnerPokemon_Text_0:
# 53 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Hello, honey!\p"
	.string "Oh, you got your first Pokémon,\n"
	.string "already?\p"
	.string "That's great!\n"
	.string "I am overjoyed for you!\l"
	.string "I hope you two bond well!\p"
	.string "Now that you're going on your own\n"
	.string "adventure, you might need these!$"

CastbelleTown_PlayerHouse_1F_EventScript_AfterGettingPartnerPokemon_Text_1:
# 65 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: These items will help you out in\n"
	.string "your adventure!\p"
	.string "Please, take care, honey!\n"
	.string "If you're ever tired, you can always\l"
	.string "come home and take rest!\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 95 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: sniff…\p"
	.string "My little boy going on his own\n"
	.string "adventure.\p"
	.string "I know you were waiting your whole life\n"
	.string "for this moment.\p"
	.string "Now go get your partner!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_1:
# 103 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: sniff…\p"
	.string "My little girl going on her own\n"
	.string "adventure.\p"
	.string "I know you were waiting your whole life\n"
	.string "for this moment.\p"
	.string "Now go get your partner!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_2:
# 113 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Hello, honey!\p"
	.string "Feeling tired? Take some rest.$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_3:
# 116 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: There!\n"
	.string "Feeling all refreshed, {PLAYER}?$"
