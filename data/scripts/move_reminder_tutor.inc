Common_EventScript_MoveTutor::
# 2 "data/scripts/move_reminder_tutor.pory"
	lock
# 3 "data/scripts/move_reminder_tutor.pory"
	faceplayer
# 4 "data/scripts/move_reminder_tutor.pory"
	message Common_EventScript_MoveTutor_Text_0
# 6 "data/scripts/move_reminder_tutor.pory"
	waitmessage
# 7 "data/scripts/move_reminder_tutor.pory"
	goto Common_EventScript_MoveTutorDynMultiChoice
# 8 "data/scripts/move_reminder_tutor.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 9 "data/scripts/move_reminder_tutor.pory"
	release
# 10 "data/scripts/move_reminder_tutor.pory"
	end
	end


Common_EventScript_MoveTutorDynMultiChoice::
# 15 "data/scripts/move_reminder_tutor.pory"
	showmoneybox 18, 0
# 16 "data/scripts/move_reminder_tutor.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_MoveTutorDynMultiChoice_Text_0, Common_EventScript_MoveTutorDynMultiChoice_Text_1, Common_EventScript_MoveTutorDynMultiChoice_Text_2, Common_EventScript_MoveTutorDynMultiChoice_Text_3, Common_EventScript_MoveTutorDynMultiChoice_Text_4
# 17 "data/scripts/move_reminder_tutor.pory"
	closemessage
# 18 "data/scripts/move_reminder_tutor.pory"
	hidemoneybox
# 19 "data/scripts/move_reminder_tutor.pory"
	switch VAR_RESULT
# 21 "data/scripts/move_reminder_tutor.pory"
	case 0, Common_EventScript_MoveTutorDynMultiChoice_3
# 31 "data/scripts/move_reminder_tutor.pory"
	case 1, Common_EventScript_MoveTutorDynMultiChoice_4
# 41 "data/scripts/move_reminder_tutor.pory"
	case 2, Common_EventScript_MoveTutorDynMultiChoice_5
# 51 "data/scripts/move_reminder_tutor.pory"
	case 3, Common_EventScript_MoveTutorDynMultiChoice_6
# 61 "data/scripts/move_reminder_tutor.pory"
	case 4, Common_EventScript_MoveTutorDynMultiChoice_7
Common_EventScript_MoveTutorDynMultiChoice_1:
# 66 "data/scripts/move_reminder_tutor.pory"
	release
	end

Common_EventScript_MoveTutorDynMultiChoice_3:
	checkmoney 2000
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_8
# 28 "data/scripts/move_reminder_tutor.pory"
	call Move_Tutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_4:
	checkmoney 5000
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_11
# 38 "data/scripts/move_reminder_tutor.pory"
	call Move_Tutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_5:
	checkmoney 200
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_14
# 48 "data/scripts/move_reminder_tutor.pory"
	call Move_Tutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_6:
	checkmoney 5000
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_17
# 58 "data/scripts/move_reminder_tutor.pory"
	call Move_Tutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_7:
# 62 "data/scripts/move_reminder_tutor.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 63 "data/scripts/move_reminder_tutor.pory"
	release
	end

Common_EventScript_MoveTutorDynMultiChoice_8:
# 23 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 2000
# 24 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_LEVEL_UP_MOVES
# 25 "data/scripts/move_reminder_tutor.pory"
	call TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_11:
# 33 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 5000
# 34 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_EGG_MOVES
# 35 "data/scripts/move_reminder_tutor.pory"
	call TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_14:
# 43 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 200
# 44 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_TM_MOVES
# 45 "data/scripts/move_reminder_tutor.pory"
	call TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_17:
# 53 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 5000
# 54 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_TUTOR_MOVES
# 55 "data/scripts/move_reminder_tutor.pory"
	call TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_1


MoveTutor_AnythingElse::
# 71 "data/scripts/move_reminder_tutor.pory"
	message MoveTutor_AnythingElse_Text_0
# 72 "data/scripts/move_reminder_tutor.pory"
	waitmessage
# 73 "data/scripts/move_reminder_tutor.pory"
	goto Common_EventScript_MoveTutorDynMultiChoice
	return


Move_Tutor_CannotAfford::
# 77 "data/scripts/move_reminder_tutor.pory"
	msgbox Move_Tutor_CannotAfford_Text_0, MSGBOX_AUTOCLOSE
	checkmoney 200
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Move_Tutor_CannotAfford_1
# 83 "data/scripts/move_reminder_tutor.pory"
	release
	end

Move_Tutor_CannotAfford_1:
# 80 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	return


TeachMove::
# 89 "data/scripts/move_reminder_tutor.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 90 "data/scripts/move_reminder_tutor.pory"
	special ChooseMonForMoveRelearner
# 91 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 92 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq TeachMove_2
TeachMove_1:
# 95 "data/scripts/move_reminder_tutor.pory"
	special IsSelectedMonEgg
# 96 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeachMove_5
TeachMove_4:
# 102 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8005, NO
	goto_if_eq TeachMove_8
TeachMove_7:
# 108 "data/scripts/move_reminder_tutor.pory"
	msgbox TeachMove_Text_2, MSGBOX_DEFAULT
# 109 "data/scripts/move_reminder_tutor.pory"
	special TeachMoveRelearnerMove
# 110 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 111 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, NO
	goto_if_eq TeachMove_11
# 115 "data/scripts/move_reminder_tutor.pory"
	showmoneybox 18, 0
# 116 "data/scripts/move_reminder_tutor.pory"
	removemoney VAR_TEMP_1
# 117 "data/scripts/move_reminder_tutor.pory"
	updatemoneybox
# 118 "data/scripts/move_reminder_tutor.pory"
	playse SE_SHOP
# 119 "data/scripts/move_reminder_tutor.pory"
	msgbox TeachMove_Text_3, MSGBOX_DEFAULT
# 121 "data/scripts/move_reminder_tutor.pory"
	hidemoneybox
TeachMove_10:
# 123 "data/scripts/move_reminder_tutor.pory"
	release
	end

TeachMove_2:
# 93 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto TeachMove_1

TeachMove_5:
# 97 "data/scripts/move_reminder_tutor.pory"
	msgbox TeachMove_Text_0, MSGBOX_AUTOCLOSE
# 99 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto TeachMove_4

TeachMove_8:
# 103 "data/scripts/move_reminder_tutor.pory"
	msgbox TeachMove_Text_1, MSGBOX_AUTOCLOSE
# 106 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto TeachMove_7

TeachMove_11:
# 112 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_AnythingElse
	goto TeachMove_10


Common_EventScript_MoveTutor_Text_0:
# 4 "data/scripts/move_reminder_tutor.pory"
	.string "Hi, I'm the Move Tutor.\n"
	.string "Would you like to learn new moves?$"

Common_EventScript_MoveTutorDynMultiChoice_Text_0:
# 16 "data/scripts/move_reminder_tutor.pory"
	.string "Level Up Moves{CLEAR_TO 0x50}¥2000$"

Common_EventScript_MoveTutorDynMultiChoice_Text_1:
# 16 "data/scripts/move_reminder_tutor.pory"
	.string "Egg Moves{CLEAR_TO 0x50}¥5000$"

Common_EventScript_MoveTutorDynMultiChoice_Text_2:
# 16 "data/scripts/move_reminder_tutor.pory"
	.string "TM Moves{CLEAR_TO 0x50}¥200$"

Common_EventScript_MoveTutorDynMultiChoice_Text_3:
# 16 "data/scripts/move_reminder_tutor.pory"
	.string "Tutor Moves{CLEAR_TO 0x50}¥5000$"

Common_EventScript_MoveTutorDynMultiChoice_Text_4:
# 16 "data/scripts/move_reminder_tutor.pory"
	.string "See ya!$"

MoveTutor_AnythingElse_Text_0:
# 71 "data/scripts/move_reminder_tutor.pory"
	.string "Is there anything else I may do for you?$"

Move_Tutor_CannotAfford_Text_0:
# 77 "data/scripts/move_reminder_tutor.pory"
	.string "I'm sorry…\n"
	.string "You cannot afford that.$"

TeachMove_Text_0:
# 97 "data/scripts/move_reminder_tutor.pory"
	.string "I'm sorry…\n"
	.string "But an Egg can't learn moves.$"

TeachMove_Text_1:
# 103 "data/scripts/move_reminder_tutor.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

TeachMove_Text_2:
# 108 "data/scripts/move_reminder_tutor.pory"
	.string "Which move should I teach?$"

TeachMove_Text_3:
# 119 "data/scripts/move_reminder_tutor.pory"
	.string "Thank you for using our services.\n"
	.string "Please come again!$"
