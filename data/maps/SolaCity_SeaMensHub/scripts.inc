SolaCity_SeaMensHub_MapScripts::
# 4 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SolaCity_SeaMensHub_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SolaCity_SeaMensHub_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SolaCity_SeaMensHub_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SolaCity_SeaMensHub_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 6 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	checktrainerflag TRAINER_BRUCE
	goto_if 0, SolaCity_SeaMensHub_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1
	return

SolaCity_SeaMensHub_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
# 7 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	cleartrainerflag TRAINER_TERRY
# 8 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	cleartrainerflag TRAINER_CLARENCE
# 9 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	cleartrainerflag TRAINER_RAYAN
# 10 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	cleartrainerflag TRAINER_SHAUN
# 11 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


SolaCity_SeaMensHub_CaptainBruce::
# 18 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	lock
# 19 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	faceplayer
# 20 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	checktrainerflag TRAINER_TERRY
	goto_if 1, SolaCity_SeaMensHub_CaptainBruce_5
SolaCity_SeaMensHub_CaptainBruce_3:
# 50 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_CaptainBruce_Text_5, MSGBOX_AUTOCLOSE
SolaCity_SeaMensHub_CaptainBruce_1:
# 54 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	release
	end

SolaCity_SeaMensHub_CaptainBruce_2:
# 24 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	trainerbattle_single TRAINER_BRUCE, SolaCity_SeaMensHub_CaptainBruce_Text_0, SolaCity_SeaMensHub_CaptainBruce_Text_1, SolaCity_SeaMensHub_CaptainBruceDefeated
# 25 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	compare VAR_TEMP_1 == 0, 0
	goto_if_ne SolaCity_SeaMensHub_CaptainBruce_11
	goto SolaCity_SeaMensHub_CaptainBruce_1

SolaCity_SeaMensHub_CaptainBruce_4:
# 22 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	checktrainerflag TRAINER_RAYAN
	goto_if 1, SolaCity_SeaMensHub_CaptainBruce_8
	goto SolaCity_SeaMensHub_CaptainBruce_3

SolaCity_SeaMensHub_CaptainBruce_5:
# 21 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	checktrainerflag TRAINER_CLARENCE
	goto_if 1, SolaCity_SeaMensHub_CaptainBruce_4
	goto SolaCity_SeaMensHub_CaptainBruce_3

SolaCity_SeaMensHub_CaptainBruce_8:
# 23 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	checktrainerflag TRAINER_SHAUN
	goto_if 1, SolaCity_SeaMensHub_CaptainBruce_2
	goto SolaCity_SeaMensHub_CaptainBruce_3

SolaCity_SeaMensHub_CaptainBruce_11:
# 26 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_CaptainBruce_Text_2, MSGBOX_YESNO
# 28 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SolaCity_SeaMensHub_CaptainBruce_13
# 44 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_CaptainBruce_Text_4, MSGBOX_NPC
	goto SolaCity_SeaMensHub_CaptainBruce_1

SolaCity_SeaMensHub_CaptainBruce_13:
# 29 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_CaptainBruce_Text_3, MSGBOX_AUTOCLOSE
# 31 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 32 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 33 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq SolaCity_SeaMensHub_CaptainBruce_19
SolaCity_SeaMensHub_CaptainBruce_18:
# 37 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	applymove 1, CapBruceLeaveToHarbor_2
SolaCity_SeaMensHub_CaptainBruce_16:
# 39 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	playse SE_EXIT
# 40 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	removeobject 1
# 41 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	clearflag FLAG_HIDE_SOLA_CITY_HARBOR_CAPTAIN_BRUCE
	goto SolaCity_SeaMensHub_CaptainBruce_1

SolaCity_SeaMensHub_CaptainBruce_17:
# 34 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	applymove 1, CapBruceLeaveToHarbor_1
	goto SolaCity_SeaMensHub_CaptainBruce_16

SolaCity_SeaMensHub_CaptainBruce_19:
# 33 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq SolaCity_SeaMensHub_CaptainBruce_17
	goto SolaCity_SeaMensHub_CaptainBruce_18


SolaCity_SeaMensHub_CaptainBruceDefeated::
# 59 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_CaptainBruceDefeated_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_2_BEAT_THE_SEA_MEN, SUB_QUEST_2_CAPTAIN_BRUCE
# 68 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_2_BEAT_THE_SEA_MEN
# 69 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


# 73 "data/maps/SolaCity_SeaMensHub/scripts.pory"
CapBruceLeaveToHarbor_1:
# 74 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_right
# 75 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 75 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 75 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 75 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 75 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 75 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 75 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
	step_end

# 78 "data/maps/SolaCity_SeaMensHub/scripts.pory"
CapBruceLeaveToHarbor_2:
# 79 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 79 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 79 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 79 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 79 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 79 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
# 79 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	walk_down
	step_end

SolaCity_SeaMensHub_SailorTerry::
# 83 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	trainerbattle_single TRAINER_TERRY, SolaCity_SeaMensHub_SailorTerry_Text_0, SolaCity_SeaMensHub_SailorTerry_Text_1, SolaCity_SeaMensHub_DefeatedTerry
# 84 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_SailorTerry_Text_2, MSGBOX_NPC
	return


SolaCity_SeaMensHub_DefeatedTerry::
# 89 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_2_BEAT_THE_SEA_MEN, SUB_QUEST_2_SAILOR_TERRY
	return


SolaCity_SeaMensHub_SailorClarence::
# 93 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	trainerbattle_single TRAINER_CLARENCE, SolaCity_SeaMensHub_SailorClarence_Text_0, SolaCity_SeaMensHub_SailorClarence_Text_1, SolaCity_SeaMensHub_DefeatedClarence
# 94 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_SailorClarence_Text_2, MSGBOX_NPC
	return


SolaCity_SeaMensHub_DefeatedClarence::
# 99 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_2_BEAT_THE_SEA_MEN, SUB_QUEST_2_SAILOR_CLARENCE
	return


SolaCity_SeaMensHub_SailorRayan::
# 103 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	trainerbattle_single TRAINER_RAYAN, SolaCity_SeaMensHub_SailorRayan_Text_0, SolaCity_SeaMensHub_SailorRayan_Text_1, SolaCity_SeaMensHub_DefeatedRayan
# 104 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_SailorRayan_Text_2, MSGBOX_NPC
	return


SolaCity_SeaMensHub_DefeatedRayan::
# 109 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_2_BEAT_THE_SEA_MEN, SUB_QUEST_2_SAILOR_RAYAN
	return


SolaCity_SeaMensHub_SailorShaun::
# 113 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	trainerbattle_single TRAINER_SHAUN, SolaCity_SeaMensHub_SailorShaun_Text_0, SolaCity_SeaMensHub_SailorShaun_Text_1, SolaCity_SeaMensHub_DefeatedShaun
# 114 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_SailorShaun_Text_2, MSGBOX_NPC
	return


SolaCity_SeaMensHub_DefeatedShaun::
# 119 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_2_BEAT_THE_SEA_MEN, SUB_QUEST_2_SAILOR_SHAUN
	return


SolaCity_SeaMensHub_Man::
# 123 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	msgbox SolaCity_SeaMensHub_Man_Text_0, MSGBOX_NPC
	return


SolaCity_SeaMensHub_CaptainBruce_Text_0:
# 24 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Captain Bruce: Huh?\nYou beat all four of them?\pAlright, show me what you got!$"

SolaCity_SeaMensHub_CaptainBruce_Text_1:
# 24 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Captain Bruce: Hahaha!\nNo surprise you beat them all!$"

SolaCity_SeaMensHub_CaptainBruce_Text_2:
# 26 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Captain Bruce: You want to sail to the\n"
	.string "mainland, now?$"

SolaCity_SeaMensHub_CaptainBruce_Text_3:
# 29 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Captain Bruce: Alright meet me at the\n"
	.string "harbor!$"

SolaCity_SeaMensHub_CaptainBruce_Text_4:
# 44 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Captain Bruce: Arr!\n"
	.string "Talk to me when you wanna go!$"

SolaCity_SeaMensHub_CaptainBruce_Text_5:
# 50 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Hahaha!\p"
	.string "You wanna challenge me?!\n"
	.string "In your dreams, kid!$"

SolaCity_SeaMensHub_CaptainBruceDefeated_Text_0:
# 59 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Captain Bruce: Hahaha!\p"
	.string "You got skill, young one.\n"
	.string "What's your name?\p"
	.string "… … … … … … … …\p"
	.string "Captain Bruce: {PLAYER}!\n"
	.string "Since you beat me,\l"
	.string "I'll sail you to the mainland and back,\l"
	.string "whenever you want!$"

SolaCity_SeaMensHub_SailorTerry_Text_0:
# 83 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "My waves will crash you down!$"

SolaCity_SeaMensHub_SailorTerry_Text_1:
# 83 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "They crashed on me instead!$"

SolaCity_SeaMensHub_SailorTerry_Text_2:
# 84 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "I used to surf on big waves back in my\n"
	.string "day.$"

SolaCity_SeaMensHub_SailorClarence_Text_0:
# 93 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Stop right there!\pNot a step further!$"

SolaCity_SeaMensHub_SailorClarence_Text_1:
# 93 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "You may proceed…$"

SolaCity_SeaMensHub_SailorClarence_Text_2:
# 94 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Bruce will put you back to your place,\n"
	.string "kiddo!$"

SolaCity_SeaMensHub_SailorRayan_Text_0:
# 103 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Welcome to Sea Men's!$"

SolaCity_SeaMensHub_SailorRayan_Text_1:
# 103 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Hope you have a pleasant stay…$"

SolaCity_SeaMensHub_SailorRayan_Text_2:
# 104 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "I used to work here, but then Bruce\n"
	.string "called me on his voyage!$"

SolaCity_SeaMensHub_SailorShaun_Text_0:
# 113 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Storm's a brewing!$"

SolaCity_SeaMensHub_SailorShaun_Text_1:
# 113 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Uh, it calmed down!$"

SolaCity_SeaMensHub_SailorShaun_Text_2:
# 114 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "The sea  calls on to me!\n"
	.string "It relaxes my mind.$"

SolaCity_SeaMensHub_Man_Text_0:
# 123 "data/maps/SolaCity_SeaMensHub/scripts.pory"
	.string "Oh, me?\n"
	.string "I'm no sailor. I just work here.$"
