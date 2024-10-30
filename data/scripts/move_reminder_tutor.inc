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
	end


Common_EventScript_MoveTutorDynMultiChoice::
# 14 "data/scripts/move_reminder_tutor.pory"
	showmoneybox 18, 0
# 15 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveTutorDynMultiChoice_Text_0, 0
# 16 "data/scripts/move_reminder_tutor.pory"
	goto_if_set FLAG_SYS_RECEIVED_EGG_MOVES, Common_EventScript_MoveTutorDynMultiChoice_2
Common_EventScript_MoveTutorDynMultiChoice_1:
# 19 "data/scripts/move_reminder_tutor.pory"
	goto_if_set FLAG_SYS_RECEIVED_TM_MOVES, Common_EventScript_MoveTutorDynMultiChoice_5
Common_EventScript_MoveTutorDynMultiChoice_4:
# 22 "data/scripts/move_reminder_tutor.pory"
	goto_if_set FLAG_SYS_RECEIVED_TUTOR_MOVES, Common_EventScript_MoveTutorDynMultiChoice_8
Common_EventScript_MoveTutorDynMultiChoice_7:
# 25 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveTutorDynMultiChoice_Text_4, 4
# 26 "data/scripts/move_reminder_tutor.pory"
	dynmultistack 0, 0, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 27 "data/scripts/move_reminder_tutor.pory"
	closemessage
# 28 "data/scripts/move_reminder_tutor.pory"
	hidemoneybox
# 29 "data/scripts/move_reminder_tutor.pory"
	switch VAR_RESULT
# 31 "data/scripts/move_reminder_tutor.pory"
	case 0, Common_EventScript_MoveTutorDynMultiChoice_12
# 41 "data/scripts/move_reminder_tutor.pory"
	case 1, Common_EventScript_MoveTutorDynMultiChoice_13
# 50 "data/scripts/move_reminder_tutor.pory"
	case 2, Common_EventScript_MoveTutorDynMultiChoice_14
# 60 "data/scripts/move_reminder_tutor.pory"
	case 3, Common_EventScript_MoveTutorDynMultiChoice_15
# 71 "data/scripts/move_reminder_tutor.pory"
	case 4, Common_EventScript_MoveTutorDynMultiChoice_16
Common_EventScript_MoveTutorDynMultiChoice_16:
# 72 "data/scripts/move_reminder_tutor.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 73 "data/scripts/move_reminder_tutor.pory"
	release
	end

Common_EventScript_MoveTutorDynMultiChoice_2:
# 17 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveTutorDynMultiChoice_Text_1, 1
	goto Common_EventScript_MoveTutorDynMultiChoice_1

Common_EventScript_MoveTutorDynMultiChoice_5:
# 20 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveTutorDynMultiChoice_Text_2, 2
	goto Common_EventScript_MoveTutorDynMultiChoice_4

Common_EventScript_MoveTutorDynMultiChoice_8:
# 23 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveTutorDynMultiChoice_Text_3, 3
	goto Common_EventScript_MoveTutorDynMultiChoice_7

Common_EventScript_MoveTutorDynMultiChoice_10:
# 76 "data/scripts/move_reminder_tutor.pory"
	release
	end

Common_EventScript_MoveTutorDynMultiChoice_12:
	checkmoney 2000
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_17
# 38 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_10

Common_EventScript_MoveTutorDynMultiChoice_13:
	checkmoney 1000
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_20
# 47 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_10

Common_EventScript_MoveTutorDynMultiChoice_14:
	checkmoney 100
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_23
# 57 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_10

Common_EventScript_MoveTutorDynMultiChoice_15:
	checkmoney 500
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveTutorDynMultiChoice_26
# 67 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_CannotAfford
	goto Common_EventScript_MoveTutorDynMultiChoice_10

Common_EventScript_MoveTutorDynMultiChoice_17:
# 33 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 2000
# 34 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_LEVEL_UP_MOVES
# 35 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_10

Common_EventScript_MoveTutorDynMultiChoice_20:
# 43 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_EGG_MOVES
# 44 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_10

Common_EventScript_MoveTutorDynMultiChoice_23:
# 52 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 100
# 53 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_TM_MOVES
# 54 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_10

Common_EventScript_MoveTutorDynMultiChoice_26:
# 62 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 500
# 63 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_TUTOR_MOVES
# 64 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMove
	goto Common_EventScript_MoveTutorDynMultiChoice_10


MoveTutor_AnythingElse::
# 81 "data/scripts/move_reminder_tutor.pory"
	message MoveTutor_AnythingElse_Text_0
# 82 "data/scripts/move_reminder_tutor.pory"
	waitmessage
# 83 "data/scripts/move_reminder_tutor.pory"
	goto Common_EventScript_MoveTutorDynMultiChoice
	return


MoveTutor_CannotAfford::
# 87 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_CannotAfford_Text_0, MSGBOX_AUTOCLOSE
	checkmoney 200
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveTutor_CannotAfford_1
# 93 "data/scripts/move_reminder_tutor.pory"
	release
	end

MoveTutor_CannotAfford_1:
# 90 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	return


MoveTutor_TeachMove::
# 99 "data/scripts/move_reminder_tutor.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 100 "data/scripts/move_reminder_tutor.pory"
	special ChooseMonForMoveRelearner
# 101 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 102 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveTutor_TeachMove_2
MoveTutor_TeachMove_1:
# 105 "data/scripts/move_reminder_tutor.pory"
	special IsSelectedMonEgg
# 106 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoveTutor_TeachMove_5
MoveTutor_TeachMove_4:
# 112 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8005, NO
	goto_if_eq MoveTutor_TeachMove_8
MoveTutor_TeachMove_7:
# 118 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMove_Text_2, MSGBOX_DEFAULT
# 119 "data/scripts/move_reminder_tutor.pory"
	special TeachMoveRelearnerMove
# 120 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 121 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, NO
	goto_if_eq MoveTutor_TeachMove_11
# 125 "data/scripts/move_reminder_tutor.pory"
	showmoneybox 18, 0
# 126 "data/scripts/move_reminder_tutor.pory"
	removemoney VAR_TEMP_1
# 127 "data/scripts/move_reminder_tutor.pory"
	updatemoneybox
# 128 "data/scripts/move_reminder_tutor.pory"
	playse SE_SHOP
# 129 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMove_Text_3, MSGBOX_DEFAULT
# 131 "data/scripts/move_reminder_tutor.pory"
	hidemoneybox
MoveTutor_TeachMove_10:
# 133 "data/scripts/move_reminder_tutor.pory"
	release
	end

MoveTutor_TeachMove_2:
# 103 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto MoveTutor_TeachMove_1

MoveTutor_TeachMove_5:
# 107 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMove_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto MoveTutor_TeachMove_4

MoveTutor_TeachMove_8:
# 113 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMove_Text_1, MSGBOX_AUTOCLOSE
# 116 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto MoveTutor_TeachMove_7

MoveTutor_TeachMove_11:
# 122 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_AnythingElse
	goto MoveTutor_TeachMove_10


EventScript_MoveTutorDynMultiChoice::
# 139 "data/scripts/move_reminder_tutor.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_MoveTutorDynMultiChoice_Text_0, Common_EventScript_MoveTutorDynMultiChoice_Text_1, Common_EventScript_MoveTutorDynMultiChoice_Text_2, Common_EventScript_MoveTutorDynMultiChoice_Text_3, Common_EventScript_MoveTutorDynMultiChoice_Text_4
# 140 "data/scripts/move_reminder_tutor.pory"
	closemessage
# 141 "data/scripts/move_reminder_tutor.pory"
	switch VAR_RESULT
# 143 "data/scripts/move_reminder_tutor.pory"
	case 0, EventScript_MoveTutorDynMultiChoice_3
# 147 "data/scripts/move_reminder_tutor.pory"
	case 1, EventScript_MoveTutorDynMultiChoice_4
# 151 "data/scripts/move_reminder_tutor.pory"
	case 2, EventScript_MoveTutorDynMultiChoice_5
# 155 "data/scripts/move_reminder_tutor.pory"
	case 3, EventScript_MoveTutorDynMultiChoice_6
# 160 "data/scripts/move_reminder_tutor.pory"
	case 4, EventScript_MoveTutorDynMultiChoice_7
EventScript_MoveTutorDynMultiChoice_7:
# 161 "data/scripts/move_reminder_tutor.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 162 "data/scripts/move_reminder_tutor.pory"
	release
	end

EventScript_MoveTutorDynMultiChoice_1:
# 165 "data/scripts/move_reminder_tutor.pory"
	release
	end

EventScript_MoveTutorDynMultiChoice_3:
# 144 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_LEVEL_UP_MOVES
# 145 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMoveDebug
	goto EventScript_MoveTutorDynMultiChoice_1

EventScript_MoveTutorDynMultiChoice_4:
# 148 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_EGG_MOVES
# 149 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMoveDebug
	goto EventScript_MoveTutorDynMultiChoice_1

EventScript_MoveTutorDynMultiChoice_5:
# 152 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_TM_MOVES
# 153 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMoveDebug
	goto EventScript_MoveTutorDynMultiChoice_1

EventScript_MoveTutorDynMultiChoice_6:
# 156 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_TUTOR_MOVES
# 157 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_TeachMoveDebug
	goto EventScript_MoveTutorDynMultiChoice_1


MoveTutor_TeachMoveDebug::
# 170 "data/scripts/move_reminder_tutor.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 171 "data/scripts/move_reminder_tutor.pory"
	special ChooseMonForMoveRelearner
# 172 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 173 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveTutor_TeachMoveDebug_2
MoveTutor_TeachMoveDebug_1:
# 176 "data/scripts/move_reminder_tutor.pory"
	special IsSelectedMonEgg
# 177 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoveTutor_TeachMoveDebug_5
MoveTutor_TeachMoveDebug_4:
# 183 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8005, NO
	goto_if_eq MoveTutor_TeachMoveDebug_8
MoveTutor_TeachMoveDebug_7:
# 189 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMove_Text_2, MSGBOX_DEFAULT
# 190 "data/scripts/move_reminder_tutor.pory"
	special TeachMoveRelearnerMove
# 191 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 192 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, NO
	goto_if_eq MoveTutor_TeachMoveDebug_11
# 196 "data/scripts/move_reminder_tutor.pory"
	playse SE_SHOP
# 197 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMove_Text_3, MSGBOX_DEFAULT
MoveTutor_TeachMoveDebug_10:
# 200 "data/scripts/move_reminder_tutor.pory"
	release
	end

MoveTutor_TeachMoveDebug_2:
# 174 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto MoveTutor_TeachMoveDebug_1

MoveTutor_TeachMoveDebug_5:
# 178 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMoveDebug_Text_0, MSGBOX_AUTOCLOSE
# 180 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto MoveTutor_TeachMoveDebug_4

MoveTutor_TeachMoveDebug_8:
# 184 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveTutor_TeachMove_Text_1, MSGBOX_AUTOCLOSE
# 187 "data/scripts/move_reminder_tutor.pory"
	call MoveTutor_AnythingElse
	goto MoveTutor_TeachMoveDebug_7

MoveTutor_TeachMoveDebug_11:
# 193 "data/scripts/move_reminder_tutor.pory"
	goto MoveTutor_AnythingElse
	goto MoveTutor_TeachMoveDebug_10


Common_EventScript_MoveTutor_Text_0:
# 4 "data/scripts/move_reminder_tutor.pory"
	.string "Hi, I'm the Move Tutor.\n"
	.string "Would you like to learn new moves?$"

Common_EventScript_MoveTutorDynMultiChoice_Text_0:
# 15 "data/scripts/move_reminder_tutor.pory"
	.string "Level Up Moves$"

Common_EventScript_MoveTutorDynMultiChoice_Text_1:
# 17 "data/scripts/move_reminder_tutor.pory"
	.string "Egg Moves$"

Common_EventScript_MoveTutorDynMultiChoice_Text_2:
# 20 "data/scripts/move_reminder_tutor.pory"
	.string "TM Moves$"

Common_EventScript_MoveTutorDynMultiChoice_Text_3:
# 23 "data/scripts/move_reminder_tutor.pory"
	.string "Tutor Moves$"

Common_EventScript_MoveTutorDynMultiChoice_Text_4:
# 25 "data/scripts/move_reminder_tutor.pory"
	.string "See ya!$"

MoveTutor_AnythingElse_Text_0:
# 81 "data/scripts/move_reminder_tutor.pory"
	.string "Is there anything else I may do for you?$"

MoveTutor_CannotAfford_Text_0:
# 87 "data/scripts/move_reminder_tutor.pory"
	.string "I'm sorry…\n"
	.string "You cannot afford that.$"

MoveTutor_TeachMove_Text_0:
# 107 "data/scripts/move_reminder_tutor.pory"
	.string "Ssorry…\n"
	.string "But an Egg can't learn moves.$"

MoveTutor_TeachMove_Text_1:
# 113 "data/scripts/move_reminder_tutor.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

MoveTutor_TeachMove_Text_2:
# 118 "data/scripts/move_reminder_tutor.pory"
	.string "Which move should I teach?$"

MoveTutor_TeachMove_Text_3:
# 129 "data/scripts/move_reminder_tutor.pory"
	.string "Thank you for using our services.\n"
	.string "Please come again!$"

MoveTutor_TeachMoveDebug_Text_0:
# 178 "data/scripts/move_reminder_tutor.pory"
	.string "I'm sorry…\n"
	.string "But an Egg can't learn moves.$"
