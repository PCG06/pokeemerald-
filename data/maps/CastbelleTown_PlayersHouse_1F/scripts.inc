CastbelleTown_PlayersHouse_1F_MapScripts::
# 4 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CastbelleTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CastbelleTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_CASTBELLE_TOWN_STATE, 0, CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon
	.2byte 0


CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon::
# 10 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	lock
# 11 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	delay 6
# 12 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, Common_Movement_FaceUp
# 13 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	emote 1, EMOTE_EXCLAIM
# 14 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	delay 6
# 15 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, MoveMomToPlayer
# 16 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	delay 1
# 25 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, MoveMomBackToChair
# 26 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	applymove 1, Common_Movement_FaceLeft
# 27 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 1
# 28 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	release
	end


# 32 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
MoveMomToPlayer:
# 33 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 34 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 34 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 34 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 35 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 38 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
MoveMomBackToChair:
# 39 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 40 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 40 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 40 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 41 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	walk_down
	step_end

CastbelleTown_PlayersHouse_1F_EventScript_Mom::
# 45 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	lock
# 46 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 47 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 1
	goto_if_ge CastbelleTown_PlayersHouse_1F_EventScript_Mom_6
CastbelleTown_PlayersHouse_1F_EventScript_Mom_5:
# 67 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 4
	goto_if_eq CastbelleTown_PlayersHouse_1F_EventScript_Mom_3
# 85 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_5, MSGBOX_AUTOCLOSE
# 87 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 88 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_6, MSGBOX_AUTOCLOSE
CastbelleTown_PlayersHouse_1F_EventScript_Mom_1:
# 91 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	release
	end

CastbelleTown_PlayersHouse_1F_EventScript_Mom_2:
# 48 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 49 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq CastbelleTown_PlayersHouse_1F_EventScript_Mom_10
# 58 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_1, MSGBOX_AUTOCLOSE
CastbelleTown_PlayersHouse_1F_EventScript_Mom_9:
# 65 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	faceoriginaldir
	goto CastbelleTown_PlayersHouse_1F_EventScript_Mom_1

CastbelleTown_PlayersHouse_1F_EventScript_Mom_3:
# 68 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_2, MSGBOX_AUTOCLOSE
# 71 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_3, MSGBOX_AUTOCLOSE
# 73 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_OLD_ROD
# 74 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 75 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_REPEL, 5
# 76 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_TM_RETURN
# 77 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_4, MSGBOX_AUTOCLOSE
# 82 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 5
	goto CastbelleTown_PlayersHouse_1F_EventScript_Mom_1

CastbelleTown_PlayersHouse_1F_EventScript_Mom_6:
# 47 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_le CastbelleTown_PlayersHouse_1F_EventScript_Mom_2
	goto CastbelleTown_PlayersHouse_1F_EventScript_Mom_5

CastbelleTown_PlayersHouse_1F_EventScript_Mom_10:
# 50 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	msgbox CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_0, MSGBOX_AUTOCLOSE
	goto CastbelleTown_PlayersHouse_1F_EventScript_Mom_9


CastbelleTown_PlayerHouse_1F_EventScript_GetPartnerPokemon_Text_0:
# 16 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}!\n"
	.string "Did you hear?\p"
	.string "Prof. Pine is giving out Pokémon to new\n"
	.string "Trainers!\p"
	.string "You just got your Trainer Card,\n"
	.string "why not get yourself a new companion?\p"
	.string "Prof. Pine would be overjoyed to give\n"
	.string "you one!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 50 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: sniff…\p"
	.string "My little boy going on his own\n"
	.string "adventure.\p"
	.string "I know you were waiting your whole life\n"
	.string "for this moment.\p"
	.string "Now go get your partner!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_1:
# 58 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: sniff…\p"
	.string "My little girl going on her own\n"
	.string "adventure.\p"
	.string "I know you were waiting your whole life\n"
	.string "for this moment.\p"
	.string "Now go get your partner!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_2:
# 68 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Hello, honey!\p"
	.string "Oh, I see your new friend.\n"
	.string "What an adorable Pokémon!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_3:
# 71 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Now that you're going on your own\n"
	.string "adventure, you might need these!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_4:
# 77 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: These items will help you out in\n"
	.string "your adventure!\p"
	.string "Please, take care, honey!\n"
	.string "If you're ever tired, come home and\l"
	.string "take rest!$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_5:
# 85 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: Hello, honey!\p"
	.string "Feeling tired? Take some rest.$"

CastbelleTown_PlayersHouse_1F_EventScript_Mom_Text_6:
# 88 "data/maps/CastbelleTown_PlayersHouse_1F/scripts.pory"
	.string "Mom: There!\n"
	.string "Feeling all refreshed, {PLAYER}?$"
