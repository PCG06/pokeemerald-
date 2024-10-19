SolaCity_Harbor_MapScripts::
	.byte 0


SolaCity_Harbor_EventScript_Sailor::
# 9 "data/maps/SolaCity_Harbor/scripts.pory"
	compare VAR_BRUCE_SHIP, 0
	goto_if_ne SolaCity_Harbor_EventScript_Sailor_2
# 15 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_Sailor_Text_1, MSGBOX_NPC
SolaCity_Harbor_EventScript_Sailor_1:
# 18 "data/maps/SolaCity_Harbor/scripts.pory"
	release
	end

SolaCity_Harbor_EventScript_Sailor_2:
# 10 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_Sailor_Text_0, MSGBOX_NPC
	goto SolaCity_Harbor_EventScript_Sailor_1


SolaCity_Harbor_EventScript_CaptainBruce::
# 23 "data/maps/SolaCity_Harbor/scripts.pory"
	lock
# 24 "data/maps/SolaCity_Harbor/scripts.pory"
	faceplayer
# 25 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_CaptainBruce_Text_0, MSGBOX_YESNO
# 27 "data/maps/SolaCity_Harbor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SolaCity_Harbor_EventScript_CaptainBruce_1
# 43 "data/maps/SolaCity_Harbor/scripts.pory"
	applymove 5, Common_Movement_WalkInPlaceDown
# 44 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_CaptainBruce_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/SolaCity_Harbor/scripts.pory"
	release
	end

SolaCity_Harbor_EventScript_CaptainBruce_1:
# 29 "data/maps/SolaCity_Harbor/scripts.pory"
	applymove 5, Common_Movement_WalkInPlaceDown
# 30 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_CaptainBruce_Text_1, MSGBOX_AUTOCLOSE
# 31 "data/maps/SolaCity_Harbor/scripts.pory"
	applymove 5, Common_Movement_WalkInPlaceUp
# 32 "data/maps/SolaCity_Harbor/scripts.pory"
	removeobject 5
# 33 "data/maps/SolaCity_Harbor/scripts.pory"
	applymoveplayer Player_WalkUp
# 34 "data/maps/SolaCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SOLA_CITY_HARBOR
# 35 "data/maps/SolaCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/SolaCity_Harbor/scripts.pory"
	delay 90
# 37 "data/maps/SolaCity_Harbor/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_MISTFALL_CITY_HARBOR
# 38 "data/maps/SolaCity_Harbor/scripts.pory"
	warpsilent MAP_MISTFALL_CITY_HARBOR, 8, 11
# 39 "data/maps/SolaCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/SolaCity_Harbor/scripts.pory"
	setvar VAR_BRUCE_SHIP, 1
	return


# 50 "data/maps/SolaCity_Harbor/scripts.pory"
Player_WalkUp:
# 51 "data/maps/SolaCity_Harbor/scripts.pory"
	walk_up
# 52 "data/maps/SolaCity_Harbor/scripts.pory"
	walk_in_place_up
	step_end

SolaCity_Harbor_EventScript_Fisherman::
# 56 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_Fisherman_Text_0, MSGBOX_NPC
	return


SolaCity_Harbor_EventScript_Sailor_Text_0:
# 10 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "I am sorry, but the ship won't set sail\n"
	.string "til tomorrow.\p"
	.string "The captain's has gone on a break.$"

SolaCity_Harbor_EventScript_Sailor_Text_1:
# 15 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "Captain's back!\n"
	.string "We'll set sail soon!$"

SolaCity_Harbor_EventScript_CaptainBruce_Text_0:
# 25 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "Captain Bruce: So, you wanna set sail\n"
	.string "now, {PLAYER}?$"

SolaCity_Harbor_EventScript_CaptainBruce_Text_1:
# 30 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "Captain Bruce: Arr we go!$"

SolaCity_Harbor_EventScript_CaptainBruce_Text_2:
# 44 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "Captain Bruce: Arr! Okay then.$"

SolaCity_Harbor_EventScript_Fisherman_Text_0:
# 56 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "This harbor is busiest on the weekends.\n"
	.string "Loads of cargo gets dropped off and\l"
	.string "picked up here.$"
