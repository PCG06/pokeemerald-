CastbellePath_MapScripts::
	.byte 0


CastbellePath_EventScript_SignPost_North::
# 6 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_SignPost_North_Text_0, MSGBOX_SIGN
	return


CastbellePath_EventScript_SignPost_South::
# 11 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_SignPost_South_Text_0, MSGBOX_SIGN
	return


CastbellePath_EventScript_TrainerTips::
# 16 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


CastbellePath_EventScript_Brian::
# 27 "data/maps/CastbellePath/scripts.pory"
	lock
# 28 "data/maps/CastbellePath/scripts.pory"
	faceplayer
# 29 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Brian_Text_0, MSGBOX_YESNO
# 32 "data/maps/CastbellePath/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbellePath_EventScript_Brian_2
# 77 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Brian_Text_6, MSGBOX_AUTOCLOSE
CastbellePath_EventScript_Brian_1:
# 81 "data/maps/CastbellePath/scripts.pory"
	release
	end

CastbellePath_EventScript_Brian_2:
# 33 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Brian_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/CastbellePath/scripts.pory"
	switch VAR_STARTER_MON
# 37 "data/maps/CastbellePath/scripts.pory"
	case STARTER_GRASS, CastbellePath_EventScript_Brian_7
# 40 "data/maps/CastbellePath/scripts.pory"
	case STARTER_FIRE, CastbellePath_EventScript_Brian_8
# 43 "data/maps/CastbellePath/scripts.pory"
	case STARTER_WATER, CastbellePath_EventScript_Brian_9
CastbellePath_EventScript_Brian_7:
# 38 "data/maps/CastbellePath/scripts.pory"
	trainerbattle_no_intro TRAINER_BRIAN_2_GRASS, CastbellePath_EventScript_Brian_Text_2
CastbellePath_EventScript_Brian_5:
# 46 "data/maps/CastbellePath/scripts.pory"
	playbgm MUS_DP_RIVAL, FALSE
# 47 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Brian_Text_3, MSGBOX_AUTOCLOSE
# 53 "data/maps/CastbellePath/scripts.pory"
	playfanfare MUS_HG_OBTAIN_TMHM
# 54 "data/maps/CastbellePath/scripts.pory"
	message CastbellePath_EventScript_Brian_Text_4
# 55 "data/maps/CastbellePath/scripts.pory"
	waitfanfare
# 56 "data/maps/CastbellePath/scripts.pory"
	waitmessage
# 57 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Brian_Text_5, MSGBOX_NPC
# 63 "data/maps/CastbellePath/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 64 "data/maps/CastbellePath/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 65 "data/maps/CastbellePath/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq CastbellePath_EventScript_Brian_13
CastbellePath_EventScript_Brian_12:
# 69 "data/maps/CastbellePath/scripts.pory"
	applymove 1, BrianExitsCastbellePath_2
CastbellePath_EventScript_Brian_10:
# 71 "data/maps/CastbellePath/scripts.pory"
	fadedefaultbgm
# 72 "data/maps/CastbellePath/scripts.pory"
	removeobject 1
# 73 "data/maps/CastbellePath/scripts.pory"
	setvar VAR_MAIN_STORY, 5
# 74 "data/maps/CastbellePath/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 6
	goto CastbellePath_EventScript_Brian_1

CastbellePath_EventScript_Brian_8:
# 41 "data/maps/CastbellePath/scripts.pory"
	trainerbattle_no_intro TRAINER_BRIAN_2_FIRE, CastbellePath_EventScript_Brian_Text_2
	goto CastbellePath_EventScript_Brian_5

CastbellePath_EventScript_Brian_9:
# 44 "data/maps/CastbellePath/scripts.pory"
	trainerbattle_no_intro TRAINER_BRIAN_2_WATER, CastbellePath_EventScript_Brian_Text_2
	goto CastbellePath_EventScript_Brian_5

CastbellePath_EventScript_Brian_11:
# 66 "data/maps/CastbellePath/scripts.pory"
	applymove 1, BrianExitsCastbellePath_1
	goto CastbellePath_EventScript_Brian_10

CastbellePath_EventScript_Brian_13:
# 65 "data/maps/CastbellePath/scripts.pory"
	compare VAR_TEMP_2, 13
	goto_if_eq CastbellePath_EventScript_Brian_11
	goto CastbellePath_EventScript_Brian_12


# 85 "data/maps/CastbellePath/scripts.pory"
BrianExitsCastbellePath_1:
# 86 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 86 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 87 "data/maps/CastbellePath/scripts.pory"
	walk_right
# 87 "data/maps/CastbellePath/scripts.pory"
	walk_right
# 88 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 88 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 88 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 88 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 88 "data/maps/CastbellePath/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/CastbellePath/scripts.pory"
BrianExitsCastbellePath_2:
# 92 "data/maps/CastbellePath/scripts.pory"
	walk_right
# 92 "data/maps/CastbellePath/scripts.pory"
	walk_right
# 93 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 93 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 93 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 93 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 93 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 93 "data/maps/CastbellePath/scripts.pory"
	walk_up
# 93 "data/maps/CastbellePath/scripts.pory"
	walk_up
	step_end

CastbellePath_EventScript_Boy::
# 97 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Boy_Text_0, MSGBOX_NPC
	return


CastbellePath_EventScript_Woman::
# 103 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Woman_Text_0, MSGBOX_NPC
	return


CastbellePath_EventScript_Girl::
# 109 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_Girl_Text_0, MSGBOX_NPC
	return


CastbellePath_EventScript_OldLady::
# 118 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_OldLady_Text_0, MSGBOX_NPC
	return


CastbellePath_EventScript_YoungsterJoey::
# 123 "data/maps/CastbellePath/scripts.pory"
	trainerbattle_single TRAINER_JOEY, CastbellePath_EventScript_YoungsterJoey_Text_0, CastbellePath_EventScript_YoungsterJoey_Text_1
# 124 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_YoungsterJoey_Text_2, MSGBOX_NPC
	return


CastbellePath_EventScript_TriggerMeetBrian::
# 129 "data/maps/CastbellePath/scripts.pory"
	lock
# 130 "data/maps/CastbellePath/scripts.pory"
	msgbox CastbellePath_EventScript_TriggerMeetBrian_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/CastbellePath/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 132 "data/maps/CastbellePath/scripts.pory"
	applymoveplayer Common_Movement_WalkDown
# 133 "data/maps/CastbellePath/scripts.pory"
	release
	end


CastbellePath_EventScript_SignPost_North_Text_0:
# 6 "data/maps/CastbellePath/scripts.pory"
	.string "Castbelle Path\n"
	.string "{UP_ARROW} Sola City$"

CastbellePath_EventScript_SignPost_South_Text_0:
# 11 "data/maps/CastbellePath/scripts.pory"
	.string "Castbelle Path\n"
	.string "{DOWN_ARROW} Castbelle Town$"

CastbellePath_EventScript_TrainerTips_Text_0:
# 16 "data/maps/CastbellePath/scripts.pory"
	.string "Trainer Tips\p"
	.string "In addition to Hit Points (HP), Pokémon\n"
	.string "have Power Points (PP) that are used to\l"
	.string "make moves during battle.\p"
	.string "If a Pokémon runs out of PP, it must be\n"
	.string "taken to a Pokémon Center.\p"
	.string "The closest Pokémon Center is in Sola\n"
	.string "City!$"

CastbellePath_EventScript_Brian_Text_0:
# 29 "data/maps/CastbellePath/scripts.pory"
	.string "Brian: Hey, {PLAYER}!\p"
	.string "I caught some Pokémon here.\n"
	.string "Wanna battle me?$"

CastbellePath_EventScript_Brian_Text_1:
# 33 "data/maps/CastbellePath/scripts.pory"
	.string "Alright! Here I come!$"

CastbellePath_EventScript_Brian_Text_2:
# 38 "data/maps/CastbellePath/scripts.pory"
	.string "Brian: You gotta be kidding me!\pNo way!$"

CastbellePath_EventScript_Brian_Text_3:
# 47 "data/maps/CastbellePath/scripts.pory"
	.string "Brian: Man! You're strong!\n"
	.string "That was a fun battle!\p"
	.string "… … … … … … …\p"
	.string "Brian: Huh? My Pokédex?\n"
	.string "Couldn't you have started with that?\p"
	.string "Would have saved me some shame!$"

CastbellePath_EventScript_Brian_Text_4:
# 54 "data/maps/CastbellePath/scripts.pory"
	.string "{PLAYER} handed over the Pokédex!$"

CastbellePath_EventScript_Brian_Text_5:
# 57 "data/maps/CastbellePath/scripts.pory"
	.string "Brian: Thank you, {PLAYER}!\n"
	.string "I am quite hasty, haha.\p"
	.string "Now, I'm headed towards Sola City to\n"
	.string "catch the next ferry!\p"
	.string "I expect you to be there as well!\n"
	.string "Don't be late!$"

CastbellePath_EventScript_Brian_Text_6:
# 77 "data/maps/CastbellePath/scripts.pory"
	.string "Weak.\p"
	.string "I'll be here for another while.\n"
	.string "I think I saw a rare Pokémon!$"

CastbellePath_EventScript_Boy_Text_0:
# 97 "data/maps/CastbellePath/scripts.pory"
	.string "I'm trying to catch a Pidgey here.\n"
	.string "Hmm…\l"
	.string "I can't seem to find one anywhere.$"

CastbellePath_EventScript_Woman_Text_0:
# 103 "data/maps/CastbellePath/scripts.pory"
	.string "Oh, no! I'm not trapped here.\n"
	.string "Hmm…\l"
	.string "The ledges let us jump down from here.$"

CastbellePath_EventScript_Girl_Text_0:
# 109 "data/maps/CastbellePath/scripts.pory"
	.string "Did you know?\p"
	.string "You can go back to Castbelle Town from\n"
	.string "here without walking on a single\l"
	.string "grass patch!\p"
	.string "How?\n"
	.string "Use the ledges on the left side!$"

CastbellePath_EventScript_OldLady_Text_0:
# 118 "data/maps/CastbellePath/scripts.pory"
	.string "Walking on this grass path heal my tired,\n"
	.string "old feet.$"

CastbellePath_EventScript_YoungsterJoey_Text_0:
# 123 "data/maps/CastbellePath/scripts.pory"
	.string "I love wearing shorts!\nThey are comfy and easy to wear!$"

CastbellePath_EventScript_YoungsterJoey_Text_1:
# 123 "data/maps/CastbellePath/scripts.pory"
	.string "You got no chill!$"

CastbellePath_EventScript_YoungsterJoey_Text_2:
# 124 "data/maps/CastbellePath/scripts.pory"
	.string "You seem ill-tempered!\n"
	.string "Wearing shorts would fix that!$"

CastbellePath_EventScript_TriggerMeetBrian_Text_0:
# 130 "data/maps/CastbellePath/scripts.pory"
	.string "I should hand over Brian his Pokédex!$"
