Common_EventScript_MoveRelearner::
# 2 "data/scripts/move_reminder_tutor.pory"
	lock
# 3 "data/scripts/move_reminder_tutor.pory"
	faceplayer
# 4 "data/scripts/move_reminder_tutor.pory"
	message Common_EventScript_MoveRelearner_Text_0
# 6 "data/scripts/move_reminder_tutor.pory"
	waitmessage
# 7 "data/scripts/move_reminder_tutor.pory"
	goto Common_EventScript_MoveRelearnerDynMultiChoice
# 8 "data/scripts/move_reminder_tutor.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 9 "data/scripts/move_reminder_tutor.pory"
	release
	end


Common_EventScript_MoveRelearnerDynMultiChoice::
# 14 "data/scripts/move_reminder_tutor.pory"
	showmoneybox 18, 0
# 15 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_0, 0
# 16 "data/scripts/move_reminder_tutor.pory"
	goto_if_set FLAG_SYS_RECEIVED_EGG_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_2
Common_EventScript_MoveRelearnerDynMultiChoice_1:
# 19 "data/scripts/move_reminder_tutor.pory"
	goto_if_set FLAG_SYS_RECEIVED_TM_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_5
Common_EventScript_MoveRelearnerDynMultiChoice_4:
# 22 "data/scripts/move_reminder_tutor.pory"
	goto_if_set FLAG_SYS_RECEIVED_TUTOR_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_8
Common_EventScript_MoveRelearnerDynMultiChoice_7:
# 25 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_4, 4
# 26 "data/scripts/move_reminder_tutor.pory"
	dynmultistack 0, 0, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 27 "data/scripts/move_reminder_tutor.pory"
	closemessage
# 28 "data/scripts/move_reminder_tutor.pory"
	hidemoneybox
# 29 "data/scripts/move_reminder_tutor.pory"
	switch VAR_RESULT
# 31 "data/scripts/move_reminder_tutor.pory"
	case 0, Common_EventScript_MoveRelearnerDynMultiChoice_12
# 41 "data/scripts/move_reminder_tutor.pory"
	case 1, Common_EventScript_MoveRelearnerDynMultiChoice_13
# 50 "data/scripts/move_reminder_tutor.pory"
	case 2, Common_EventScript_MoveRelearnerDynMultiChoice_14
# 60 "data/scripts/move_reminder_tutor.pory"
	case 3, Common_EventScript_MoveRelearnerDynMultiChoice_15
# 71 "data/scripts/move_reminder_tutor.pory"
	case 4, Common_EventScript_MoveRelearnerDynMultiChoice_16
Common_EventScript_MoveRelearnerDynMultiChoice_16:
# 72 "data/scripts/move_reminder_tutor.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 73 "data/scripts/move_reminder_tutor.pory"
	release
	end

Common_EventScript_MoveRelearnerDynMultiChoice_2:
# 17 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_1, 1
	goto Common_EventScript_MoveRelearnerDynMultiChoice_1

Common_EventScript_MoveRelearnerDynMultiChoice_5:
# 20 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_2, 2
	goto Common_EventScript_MoveRelearnerDynMultiChoice_4

Common_EventScript_MoveRelearnerDynMultiChoice_8:
# 23 "data/scripts/move_reminder_tutor.pory"
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_3, 3
	goto Common_EventScript_MoveRelearnerDynMultiChoice_7

Common_EventScript_MoveRelearnerDynMultiChoice_10:
# 76 "data/scripts/move_reminder_tutor.pory"
	release
	end

Common_EventScript_MoveRelearnerDynMultiChoice_12:
	checkmoney 2000
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_17
# 38 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_13:
	checkmoney 1000
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_20
# 47 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_14:
	checkmoney 100
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_23
# 57 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_15:
	checkmoney 500
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_26
# 67 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_17:
# 33 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 2000
# 34 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_LEVEL_UP_MOVES
# 35 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_20:
# 43 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_EGG_MOVES
# 44 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_23:
# 52 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 100
# 53 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TM_MOVES
# 54 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_26:
# 62 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_TEMP_1, 500
# 63 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TUTOR_MOVES
# 64 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10


MoveRelearner_AnythingElse::
# 81 "data/scripts/move_reminder_tutor.pory"
	message MoveRelearner_AnythingElse_Text_0
# 82 "data/scripts/move_reminder_tutor.pory"
	waitmessage
# 83 "data/scripts/move_reminder_tutor.pory"
	goto Common_EventScript_MoveRelearnerDynMultiChoice
	return


MoveRelearner_CannotAfford::
# 87 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_CannotAfford_Text_0, MSGBOX_AUTOCLOSE
	checkmoney 200
# 0 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveRelearner_CannotAfford_1
# 93 "data/scripts/move_reminder_tutor.pory"
	release
	end

MoveRelearner_CannotAfford_1:
# 90 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_AnythingElse
	return


MoveRelearner_TeachMove::
# 99 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_TeachMove_Text_0, MSGBOX_DEFAULT
# 100 "data/scripts/move_reminder_tutor.pory"
	special ChooseMonForMoveRelearner
# 101 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 102 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveRelearner_TeachMove_2
MoveRelearner_TeachMove_1:
# 105 "data/scripts/move_reminder_tutor.pory"
	special IsSelectedMonEgg
# 106 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoveRelearner_TeachMove_5
MoveRelearner_TeachMove_4:
# 112 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8005, NO
	goto_if_eq MoveRelearner_TeachMove_8
MoveRelearner_TeachMove_7:
# 118 "data/scripts/move_reminder_tutor.pory"
	switch VAR_MOVE_RELEARNER_STATE
# 120 "data/scripts/move_reminder_tutor.pory"
	case MOVE_RELEARNER_EGG_MOVES, MoveRelearner_TeachMove_12
# 123 "data/scripts/move_reminder_tutor.pory"
	case MOVE_RELEARNER_TM_MOVES, MoveRelearner_TeachMove_13
# 126 "data/scripts/move_reminder_tutor.pory"
	case MOVE_RELEARNER_TUTOR_MOVES, MoveRelearner_TeachMove_14
# 130 "data/scripts/move_reminder_tutor.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_6
MoveRelearner_TeachMove_10:
# 133 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_TeachMove_Text_7, MSGBOX_DEFAULT
# 134 "data/scripts/move_reminder_tutor.pory"
	special TeachMoveRelearnerMove
# 135 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 136 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, NO
	goto_if_eq MoveRelearner_TeachMove_17
# 140 "data/scripts/move_reminder_tutor.pory"
	showmoneybox 18, 0
# 141 "data/scripts/move_reminder_tutor.pory"
	removemoney VAR_TEMP_1
# 142 "data/scripts/move_reminder_tutor.pory"
	updatemoneybox
# 143 "data/scripts/move_reminder_tutor.pory"
	playse SE_SHOP
# 144 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_TeachMove_Text_8, MSGBOX_DEFAULT
# 146 "data/scripts/move_reminder_tutor.pory"
	hidemoneybox
MoveRelearner_TeachMove_16:
# 148 "data/scripts/move_reminder_tutor.pory"
	release
	end

MoveRelearner_TeachMove_2:
# 103 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_1

MoveRelearner_TeachMove_5:
# 107 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_TeachMove_Text_1, MSGBOX_AUTOCLOSE
# 109 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_4

MoveRelearner_TeachMove_8:
# 113 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_TeachMove_Text_2, MSGBOX_AUTOCLOSE
# 116 "data/scripts/move_reminder_tutor.pory"
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_7

MoveRelearner_TeachMove_12:
# 121 "data/scripts/move_reminder_tutor.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_3
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_13:
# 124 "data/scripts/move_reminder_tutor.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_4
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_14:
# 127 "data/scripts/move_reminder_tutor.pory"
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_5
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_17:
# 137 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_16


EventScript_MoveRelearnerDynMultiChoice::
# 154 "data/scripts/move_reminder_tutor.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_MoveRelearnerDynMultiChoice_Text_0, Common_EventScript_MoveRelearnerDynMultiChoice_Text_1, Common_EventScript_MoveRelearnerDynMultiChoice_Text_2, Common_EventScript_MoveRelearnerDynMultiChoice_Text_3, Common_EventScript_MoveRelearnerDynMultiChoice_Text_4
# 155 "data/scripts/move_reminder_tutor.pory"
	closemessage
# 156 "data/scripts/move_reminder_tutor.pory"
	switch VAR_RESULT
# 158 "data/scripts/move_reminder_tutor.pory"
	case 0, EventScript_MoveRelearnerDynMultiChoice_3
# 162 "data/scripts/move_reminder_tutor.pory"
	case 1, EventScript_MoveRelearnerDynMultiChoice_4
# 166 "data/scripts/move_reminder_tutor.pory"
	case 2, EventScript_MoveRelearnerDynMultiChoice_5
# 170 "data/scripts/move_reminder_tutor.pory"
	case 3, EventScript_MoveRelearnerDynMultiChoice_6
# 175 "data/scripts/move_reminder_tutor.pory"
	case 4, EventScript_MoveRelearnerDynMultiChoice_7
EventScript_MoveRelearnerDynMultiChoice_7:
# 176 "data/scripts/move_reminder_tutor.pory"
	release
	end

EventScript_MoveRelearnerDynMultiChoice_1:
# 179 "data/scripts/move_reminder_tutor.pory"
	release
	end

EventScript_MoveRelearnerDynMultiChoice_3:
# 159 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_LEVEL_UP_MOVES
# 160 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_4:
# 163 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_EGG_MOVES
# 164 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_5:
# 167 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TM_MOVES
# 168 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_6:
# 171 "data/scripts/move_reminder_tutor.pory"
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TUTOR_MOVES
# 172 "data/scripts/move_reminder_tutor.pory"
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1


MoveRelearner_TeachMoveDebug::
# 184 "data/scripts/move_reminder_tutor.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 185 "data/scripts/move_reminder_tutor.pory"
	special ChooseMonForMoveRelearner
# 186 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 187 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveRelearner_TeachMoveDebug_2
# 190 "data/scripts/move_reminder_tutor.pory"
	special IsSelectedMonEgg
# 191 "data/scripts/move_reminder_tutor.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoveRelearner_TeachMoveDebug_5
MoveRelearner_TeachMoveDebug_4:
# 196 "data/scripts/move_reminder_tutor.pory"
	compare VAR_0x8005, NO
	goto_if_eq MoveRelearner_TeachMoveDebug_8
MoveRelearner_TeachMoveDebug_7:
# 201 "data/scripts/move_reminder_tutor.pory"
	special TeachMoveRelearnerMove
# 202 "data/scripts/move_reminder_tutor.pory"
	waitstate
# 203 "data/scripts/move_reminder_tutor.pory"
	release
	end

MoveRelearner_TeachMoveDebug_2:
	end

MoveRelearner_TeachMoveDebug_5:
# 192 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_TeachMoveDebug_Text_0, MSGBOX_AUTOCLOSE
	goto MoveRelearner_TeachMoveDebug_4

MoveRelearner_TeachMoveDebug_8:
# 197 "data/scripts/move_reminder_tutor.pory"
	msgbox MoveRelearner_TeachMove_Text_2, MSGBOX_AUTOCLOSE
	goto MoveRelearner_TeachMoveDebug_7


Common_EventScript_MoveRelearner_Text_0:
# 4 "data/scripts/move_reminder_tutor.pory"
	.string "Hi, I'm the Move Relearner.\n"
	.string "Would you like to learn new moves?$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_0:
# 15 "data/scripts/move_reminder_tutor.pory"
	.string "Level Up Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_1:
# 17 "data/scripts/move_reminder_tutor.pory"
	.string "Egg Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_2:
# 20 "data/scripts/move_reminder_tutor.pory"
	.string "TM Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_3:
# 23 "data/scripts/move_reminder_tutor.pory"
	.string "Tutor Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_4:
# 25 "data/scripts/move_reminder_tutor.pory"
	.string "See ya!$"

MoveRelearner_AnythingElse_Text_0:
# 81 "data/scripts/move_reminder_tutor.pory"
	.string "Is there anything else I may do for you?$"

MoveRelearner_CannotAfford_Text_0:
# 87 "data/scripts/move_reminder_tutor.pory"
	.string "I'm sorry…\n"
	.string "You cannot afford that move.$"

MoveRelearner_TeachMove_Text_0:
# 99 "data/scripts/move_reminder_tutor.pory"
	.string "Please choose your Pokémon.$"

MoveRelearner_TeachMove_Text_1:
# 107 "data/scripts/move_reminder_tutor.pory"
	.string "Sorry…\n"
	.string "But an Egg can't learn moves.$"

MoveRelearner_TeachMove_Text_2:
# 113 "data/scripts/move_reminder_tutor.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

MoveRelearner_TeachMove_Text_3:
# 121 "data/scripts/move_reminder_tutor.pory"
	.string "egg move$"

MoveRelearner_TeachMove_Text_4:
# 124 "data/scripts/move_reminder_tutor.pory"
	.string "TM$"

MoveRelearner_TeachMove_Text_5:
# 127 "data/scripts/move_reminder_tutor.pory"
	.string "tutor move$"

MoveRelearner_TeachMove_Text_6:
# 130 "data/scripts/move_reminder_tutor.pory"
	.string "move$"

MoveRelearner_TeachMove_Text_7:
# 133 "data/scripts/move_reminder_tutor.pory"
	.string "Which {STR_VAR_3} should I teach?$"

MoveRelearner_TeachMove_Text_8:
# 144 "data/scripts/move_reminder_tutor.pory"
	.string "Thank you for using our services.\n"
	.string "Please come again!$"

MoveRelearner_TeachMoveDebug_Text_0:
# 192 "data/scripts/move_reminder_tutor.pory"
	.string "I'm sorry…\n"
	.string "But an Egg can't learn moves.$"
