SolaCity_Harbor_MapScripts::
	.byte 0


SolaCity_Harbor_EventScript_Sailor::
# 8 "data/maps/SolaCity_Harbor/scripts.pory"
	goto_if_unset FLAG_HIDE_SOLA_CITY_SEA_MENS_HUB_CAPTAIN_BRUCE, SolaCity_Harbor_EventScript_Sailor_2
# 14 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_Sailor_Text_1, MSGBOX_NPC
SolaCity_Harbor_EventScript_Sailor_1:
# 17 "data/maps/SolaCity_Harbor/scripts.pory"
	release
	end

SolaCity_Harbor_EventScript_Sailor_2:
# 9 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_Sailor_Text_0, MSGBOX_NPC
	goto SolaCity_Harbor_EventScript_Sailor_1


SolaCity_Harbor_EventScript_CaptainBruce::
# 22 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_CaptainBruce_Text_0, MSGBOX_NPC
	return


SolaCity_Harbor_EventScript_Fisherman::
# 29 "data/maps/SolaCity_Harbor/scripts.pory"
	msgbox SolaCity_Harbor_EventScript_Fisherman_Text_0, MSGBOX_NPC
	return


SolaCity_Harbor_EventScript_Sailor_Text_0:
# 9 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "I am sorry, but the ship won't set sail\n"
	.string "til tomorrow.\p"
	.string "The captain's has gone on a break.$"

SolaCity_Harbor_EventScript_Sailor_Text_1:
# 14 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "Captain's back!\n"
	.string "We'll set sail soon!$"

SolaCity_Harbor_EventScript_CaptainBruce_Text_0:
# 22 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "Dev's note: PCG here!\n"
	.string "I did not finish scripting this!\p"
	.string "The next test demo will certainly have\n"
	.string "this part scripted!$"

SolaCity_Harbor_EventScript_Fisherman_Text_0:
# 29 "data/maps/SolaCity_Harbor/scripts.pory"
	.string "This harbor is busiest on the weekends.\n"
	.string "Loads of cargo gets dropped off and\l"
	.string "picked up here.$"
