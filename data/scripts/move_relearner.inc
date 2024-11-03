Common_EventScript_MoveRelearner::
	lock
	faceplayer
	message Common_EventScript_MoveRelearner_Text_0
	waitmessage
	goto Common_EventScript_MoveRelearnerDynMultiChoice
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


Common_EventScript_MoveRelearnerDynMultiChoice::
	showmoneybox 18, 0
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_0, 0
	goto_if_set FLAG_SYS_RECEIVED_EGG_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_2
Common_EventScript_MoveRelearnerDynMultiChoice_1:
	goto_if_set FLAG_SYS_RECEIVED_TM_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_5
Common_EventScript_MoveRelearnerDynMultiChoice_4:
	goto_if_set FLAG_SYS_RECEIVED_TUTOR_MOVES, Common_EventScript_MoveRelearnerDynMultiChoice_8
Common_EventScript_MoveRelearnerDynMultiChoice_7:
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_4, 4
	dynmultistack 0, 0, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	hidemoneybox
	switch VAR_RESULT
	case 0, Common_EventScript_MoveRelearnerDynMultiChoice_12
	case 1, Common_EventScript_MoveRelearnerDynMultiChoice_13
	case 2, Common_EventScript_MoveRelearnerDynMultiChoice_14
	case 3, Common_EventScript_MoveRelearnerDynMultiChoice_15
	case 4, Common_EventScript_MoveRelearnerDynMultiChoice_16
Common_EventScript_MoveRelearnerDynMultiChoice_16:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Common_EventScript_MoveRelearnerDynMultiChoice_2:
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_1, 1
	goto Common_EventScript_MoveRelearnerDynMultiChoice_1

Common_EventScript_MoveRelearnerDynMultiChoice_5:
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_2, 2
	goto Common_EventScript_MoveRelearnerDynMultiChoice_4

Common_EventScript_MoveRelearnerDynMultiChoice_8:
	dynmultipush Common_EventScript_MoveRelearnerDynMultiChoice_Text_3, 3
	goto Common_EventScript_MoveRelearnerDynMultiChoice_7

Common_EventScript_MoveRelearnerDynMultiChoice_10:
	release
	end

Common_EventScript_MoveRelearnerDynMultiChoice_12:
	checkmoney 2000
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_17
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_13:
	checkmoney 1000
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_20
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_14:
	checkmoney 100
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_23
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_15:
	checkmoney 500
	compare VAR_RESULT, 0
	goto_if_ne Common_EventScript_MoveRelearnerDynMultiChoice_26
	call MoveRelearner_CannotAfford
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_17:
	setvar VAR_TEMP_1, 2000
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_LEVEL_UP_MOVES
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_20:
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_EGG_MOVES
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_23:
	setvar VAR_TEMP_1, 100
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TM_MOVES
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10

Common_EventScript_MoveRelearnerDynMultiChoice_26:
	setvar VAR_TEMP_1, 500
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TUTOR_MOVES
	goto MoveRelearner_TeachMove
	goto Common_EventScript_MoveRelearnerDynMultiChoice_10


MoveRelearner_AnythingElse::
	message MoveRelearner_AnythingElse_Text_0
	waitmessage
	goto Common_EventScript_MoveRelearnerDynMultiChoice
	return


MoveRelearner_CannotAfford::
	msgbox MoveRelearner_CannotAfford_Text_0, MSGBOX_AUTOCLOSE
	checkmoney 200
	compare VAR_RESULT, 0
	goto_if_ne MoveRelearner_CannotAfford_1
	release
	end

MoveRelearner_CannotAfford_1:
	call MoveRelearner_AnythingElse
	return


MoveRelearner_TeachMove::
	msgbox MoveRelearner_TeachMove_Text_0, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveRelearner_TeachMove_2
MoveRelearner_TeachMove_1:
	special IsSelectedMonEgg
	compare VAR_RESULT, YES
	goto_if_eq MoveRelearner_TeachMove_5
MoveRelearner_TeachMove_4:
	compare VAR_0x8005, NO
	goto_if_eq MoveRelearner_TeachMove_8
MoveRelearner_TeachMove_7:
	switch VAR_MOVE_RELEARNER_STATE
	case MOVE_RELEARNER_EGG_MOVES, MoveRelearner_TeachMove_12
	case MOVE_RELEARNER_TM_MOVES, MoveRelearner_TeachMove_13
	case MOVE_RELEARNER_TUTOR_MOVES, MoveRelearner_TeachMove_14
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_6
MoveRelearner_TeachMove_10:
	msgbox MoveRelearner_TeachMove_Text_7, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, NO
	goto_if_eq MoveRelearner_TeachMove_17
	showmoneybox 18, 0
	removemoney VAR_TEMP_1
	updatemoneybox
	playse SE_SHOP
	msgbox MoveRelearner_TeachMove_Text_8, MSGBOX_DEFAULT
	hidemoneybox
MoveRelearner_TeachMove_16:
	release
	end

MoveRelearner_TeachMove_2:
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_1

MoveRelearner_TeachMove_5:
	msgbox MoveRelearner_TeachMove_Text_1, MSGBOX_AUTOCLOSE
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_4

MoveRelearner_TeachMove_8:
	msgbox MoveRelearner_TeachMove_Text_2, MSGBOX_AUTOCLOSE
	call MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_7

MoveRelearner_TeachMove_12:
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_3
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_13:
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_4
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_14:
	bufferstring STR_VAR_3, MoveRelearner_TeachMove_Text_5
	goto MoveRelearner_TeachMove_10

MoveRelearner_TeachMove_17:
	goto MoveRelearner_AnythingElse
	goto MoveRelearner_TeachMove_16


EventScript_MoveRelearnerDynMultiChoice::
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_MoveRelearnerDynMultiChoice_Text_0, Common_EventScript_MoveRelearnerDynMultiChoice_Text_1, Common_EventScript_MoveRelearnerDynMultiChoice_Text_2, Common_EventScript_MoveRelearnerDynMultiChoice_Text_3, Common_EventScript_MoveRelearnerDynMultiChoice_Text_4
	closemessage
	switch VAR_RESULT
	case 0, EventScript_MoveRelearnerDynMultiChoice_3
	case 1, EventScript_MoveRelearnerDynMultiChoice_4
	case 2, EventScript_MoveRelearnerDynMultiChoice_5
	case 3, EventScript_MoveRelearnerDynMultiChoice_6
	case 4, EventScript_MoveRelearnerDynMultiChoice_7
EventScript_MoveRelearnerDynMultiChoice_7:
	release
	end

EventScript_MoveRelearnerDynMultiChoice_1:
	release
	end

EventScript_MoveRelearnerDynMultiChoice_3:
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_LEVEL_UP_MOVES
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_4:
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_EGG_MOVES
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_5:
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TM_MOVES
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1

EventScript_MoveRelearnerDynMultiChoice_6:
	setvar VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TUTOR_MOVES
	goto MoveRelearner_TeachMoveDebug
	goto EventScript_MoveRelearnerDynMultiChoice_1


MoveRelearner_TeachMoveDebug::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveRelearner_TeachMoveDebug_2
	special IsSelectedMonEgg
	compare VAR_RESULT, YES
	goto_if_eq MoveRelearner_TeachMoveDebug_5
MoveRelearner_TeachMoveDebug_4:
	compare VAR_0x8005, NO
	goto_if_eq MoveRelearner_TeachMoveDebug_8
MoveRelearner_TeachMoveDebug_7:
	special TeachMoveRelearnerMove
	waitstate
	release
	end

MoveRelearner_TeachMoveDebug_2:
	end

MoveRelearner_TeachMoveDebug_5:
	msgbox MoveRelearner_TeachMoveDebug_Text_0, MSGBOX_AUTOCLOSE
	goto MoveRelearner_TeachMoveDebug_4

MoveRelearner_TeachMoveDebug_8:
	msgbox MoveRelearner_TeachMove_Text_2, MSGBOX_AUTOCLOSE
	goto MoveRelearner_TeachMoveDebug_7


Common_EventScript_MoveRelearner_Text_0:
	.string "Hi, I'm the Move Relearner.\n"
	.string "Would you like to learn new moves?$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_0:
	.string "Level Up Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_1:
	.string "Egg Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_2:
	.string "TM Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_3:
	.string "Tutor Moves$"

Common_EventScript_MoveRelearnerDynMultiChoice_Text_4:
	.string "See ya!$"

MoveRelearner_AnythingElse_Text_0:
	.string "Is there anything else I may do for you?$"

MoveRelearner_CannotAfford_Text_0:
	.string "I'm sorry…\n"
	.string "You cannot afford that move.$"

MoveRelearner_TeachMove_Text_0:
	.string "Please choose your Pokémon.$"

MoveRelearner_TeachMove_Text_1:
	.string "Sorry…\n"
	.string "But an Egg can't learn moves.$"

MoveRelearner_TeachMove_Text_2:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

MoveRelearner_TeachMove_Text_3:
	.string "egg move$"

MoveRelearner_TeachMove_Text_4:
	.string "TM$"

MoveRelearner_TeachMove_Text_5:
	.string "tutor move$"

MoveRelearner_TeachMove_Text_6:
	.string "move$"

MoveRelearner_TeachMove_Text_7:
	.string "Which {STR_VAR_3} should I teach?$"

MoveRelearner_TeachMove_Text_8:
	.string "Thank you for using our services.\n"
	.string "Please come again!$"

MoveRelearner_TeachMoveDebug_Text_0:
	.string "I'm sorry…\n"
	.string "But an Egg can't learn moves.$"
