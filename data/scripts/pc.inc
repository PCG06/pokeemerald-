
EventScript_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_OTHER
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
	goto EventScript_PCMainMenu
	end

EventScript_PCMainMenu::
	message gText_WhichPCShouldBeAccessed
	waitmessage
	special ScriptMenu_CreatePCMultichoice
	waitstate
	goto EventScript_AccessPC
	end

EventScript_AccessPC::
	switch VAR_RESULT
	case 0, EventScript_AccessPokemonStorage
	case 1, EventScript_AccessPlayersPC
	case 2, EventScript_AccessHallOfFame
	case 3, EventScript_TurnOffPC
	case MULTI_B_PRESSED, EventScript_TurnOffPC
	end

EventScript_AccessPlayersPC::
	playse SE_PC_LOGIN
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
	special PlayerPC
	waitstate
	goto EventScript_PCMainMenu
	end

EventScript_AccessPokemonStorage::
	playse SE_PC_LOGIN
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_PCMainMenu
	end

EventScript_AccessSomeonesPC::
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
	return

EventScript_AccessLanettesPC::
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
	return

EventScript_TurnOffPC::
	setvar VAR_0x8004, PC_LOCATION_OTHER
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

EventScript_AccessHallOfFame::
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
	playse SE_PC_LOGIN
	special AccessHallOfFamePC
	waitstate
	goto EventScript_AccessPC
	end

EventScript_AccessPokemonBoxLink::
	lockall
	playse SE_PC_ON
	message EventScript_AccessPokemonBoxLink_Text_0
	waitse
	call EventScript_AccessPokemonBoxLinkDynMultiChoice
	goto BoxLink_LogOffPC
	end


EventScript_AccessPokemonBoxLinkDynMultiChoice::
	message EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_0
	goto_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessPokemonBoxLinkDynMultiChoice_2
	bufferstring STR_VAR_1, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_2
EventScript_AccessPokemonBoxLinkDynMultiChoice_1:
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_3, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_4, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_5
	closemessage
	switch VAR_RESULT
	case 0, EventScript_AccessPokemonBoxLinkDynMultiChoice_7
	case 1, EventScript_AccessPokemonBoxLinkDynMultiChoice_8
	case 2, EventScript_AccessPokemonBoxLinkDynMultiChoice_9
EventScript_AccessPokemonBoxLinkDynMultiChoice_5:
	goto BoxLink_LogOffPC
	end

EventScript_AccessPokemonBoxLinkDynMultiChoice_2:
	bufferstring STR_VAR_1, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_1
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_1

EventScript_AccessPokemonBoxLinkDynMultiChoice_7:
	playse SE_PC_LOGIN
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	playse SE_PC_OFF
	goto BoxLink_ContinueUsingPC
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_5

EventScript_AccessPokemonBoxLinkDynMultiChoice_8:
	compare VAR_POKEMON_BOX_LINK_HEAL, 0
	goto_if_gt EventScript_AccessPokemonBoxLinkDynMultiChoice_10
	playse SE_FAILURE
	waitse
	msgbox EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_8, MSGBOX_AUTOCLOSE
	goto BoxLink_ContinueUsingPC
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_5

EventScript_AccessPokemonBoxLinkDynMultiChoice_9:
	goto BoxLink_LogOffPC
	end

EventScript_AccessPokemonBoxLinkDynMultiChoice_10:
	special HealPlayerParty
	playse MUS_HEAL
	message EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_6
	waitmessage
	waitse
	closemessage
	subvar VAR_POKEMON_BOX_LINK_HEAL, 1
	compare VAR_POKEMON_BOX_LINK_HEAL, 0
	goto_if_gt EventScript_AccessPokemonBoxLinkDynMultiChoice_14
	msgbox EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_8, MSGBOX_AUTOCLOSE
EventScript_AccessPokemonBoxLinkDynMultiChoice_13:
	goto BoxLink_ContinueUsingPC
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_5

EventScript_AccessPokemonBoxLinkDynMultiChoice_14:
	buffernumberstring STR_VAR_2, VAR_POKEMON_BOX_LINK_HEAL
	msgbox EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_7, MSGBOX_AUTOCLOSE
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_13


BoxLink_ContinueUsingPC::
	lockall
	message EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_0
	call EventScript_AccessPokemonBoxLinkDynMultiChoice
	goto BoxLink_LogOffPC
	end


BoxLink_LogOffPC::
	playse SE_PC_OFF
	releaseall
	end


EventScript_AccessPokemonBoxLink_Text_0:
	.string "{PKMN} Box Link opened.\n$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_0:
	.string "What will you like to do?$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_1:
	.string "Lanette$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_2:
	.string "Someone$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_3:
	.string "{STR_VAR_1}'s Storage$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_4:
	.string "Heal Pokémon$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_5:
	.string "See ya!$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_6:
	.string "Your party has been healed!\n$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_7:
	.string "Heals left: {STR_VAR_2}.$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_8:
	.string "No heals left!$"
