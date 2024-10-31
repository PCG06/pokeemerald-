# 1 "data/scripts/pc.pory"

# 2 "data/scripts/pc.pory"
EventScript_PC::
# 3 "data/scripts/pc.pory"
	lockall
# 4 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 5 "data/scripts/pc.pory"
	special DoPCTurnOnEffect
# 6 "data/scripts/pc.pory"
	playse SE_PC_ON
# 7 "data/scripts/pc.pory"
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
# 8 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 9 "data/scripts/pc.pory"
	end
# 10 "data/scripts/pc.pory"

# 11 "data/scripts/pc.pory"
EventScript_PCMainMenu::
# 12 "data/scripts/pc.pory"
	message gText_WhichPCShouldBeAccessed
# 13 "data/scripts/pc.pory"
	waitmessage
# 14 "data/scripts/pc.pory"
	special ScriptMenu_CreatePCMultichoice
# 15 "data/scripts/pc.pory"
	waitstate
# 16 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 17 "data/scripts/pc.pory"
	end
# 18 "data/scripts/pc.pory"

# 19 "data/scripts/pc.pory"
EventScript_AccessPC::
# 20 "data/scripts/pc.pory"
	switch VAR_RESULT
# 21 "data/scripts/pc.pory"
	case 0, EventScript_AccessPokemonStorage
# 22 "data/scripts/pc.pory"
	case 1, EventScript_AccessPlayersPC
# 23 "data/scripts/pc.pory"
	case 2, EventScript_AccessHallOfFame
# 24 "data/scripts/pc.pory"
	case 3, EventScript_TurnOffPC
# 25 "data/scripts/pc.pory"
	case MULTI_B_PRESSED, EventScript_TurnOffPC
# 26 "data/scripts/pc.pory"
	end
# 27 "data/scripts/pc.pory"

# 28 "data/scripts/pc.pory"
EventScript_AccessPlayersPC::
# 29 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 30 "data/scripts/pc.pory"
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
# 31 "data/scripts/pc.pory"
	special PlayerPC
# 32 "data/scripts/pc.pory"
	waitstate
# 33 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 34 "data/scripts/pc.pory"
	end
# 35 "data/scripts/pc.pory"

# 36 "data/scripts/pc.pory"
EventScript_AccessPokemonStorage::
# 37 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 38 "data/scripts/pc.pory"
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
# 39 "data/scripts/pc.pory"
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
# 40 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 41 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 42 "data/scripts/pc.pory"
	waitstate
# 43 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 44 "data/scripts/pc.pory"
	end
# 45 "data/scripts/pc.pory"

# 46 "data/scripts/pc.pory"
EventScript_AccessSomeonesPC::
# 47 "data/scripts/pc.pory"
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
# 48 "data/scripts/pc.pory"
	return
# 49 "data/scripts/pc.pory"

# 50 "data/scripts/pc.pory"
EventScript_AccessLanettesPC::
# 51 "data/scripts/pc.pory"
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
# 52 "data/scripts/pc.pory"
	return
# 53 "data/scripts/pc.pory"

# 54 "data/scripts/pc.pory"
EventScript_TurnOffPC::
# 55 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 56 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 57 "data/scripts/pc.pory"
	special DoPCTurnOffEffect
# 58 "data/scripts/pc.pory"
	releaseall
# 59 "data/scripts/pc.pory"
	end
# 60 "data/scripts/pc.pory"

# 61 "data/scripts/pc.pory"
EventScript_AccessHallOfFame::
# 62 "data/scripts/pc.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
# 63 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 64 "data/scripts/pc.pory"
	special AccessHallOfFamePC
# 65 "data/scripts/pc.pory"
	waitstate
# 66 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 67 "data/scripts/pc.pory"
	end

EventScript_AccessPokemonBoxLink::
# 70 "data/scripts/pc.pory"
	lockall
# 71 "data/scripts/pc.pory"
	playse SE_PC_ON
# 72 "data/scripts/pc.pory"
	message EventScript_AccessPokemonBoxLink_Text_0
# 73 "data/scripts/pc.pory"
	waitse
# 74 "data/scripts/pc.pory"
	call EventScript_AccessPokemonBoxLinkDynMultiChoice
# 75 "data/scripts/pc.pory"
	goto BoxLink_LogOffPC
	end


EventScript_AccessPokemonBoxLinkDynMultiChoice::
# 80 "data/scripts/pc.pory"
	message EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_0
# 81 "data/scripts/pc.pory"
	goto_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessPokemonBoxLinkDynMultiChoice_2
# 85 "data/scripts/pc.pory"
	bufferstring STR_VAR_1, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_2
EventScript_AccessPokemonBoxLinkDynMultiChoice_1:
# 87 "data/scripts/pc.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_3, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_4, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_5
# 88 "data/scripts/pc.pory"
	closemessage
# 89 "data/scripts/pc.pory"
	switch VAR_RESULT
# 91 "data/scripts/pc.pory"
	case 0, EventScript_AccessPokemonBoxLinkDynMultiChoice_7
# 101 "data/scripts/pc.pory"
	case 1, EventScript_AccessPokemonBoxLinkDynMultiChoice_8
# 126 "data/scripts/pc.pory"
	case 2, EventScript_AccessPokemonBoxLinkDynMultiChoice_9
EventScript_AccessPokemonBoxLinkDynMultiChoice_5:
# 130 "data/scripts/pc.pory"
	goto BoxLink_LogOffPC
	end

EventScript_AccessPokemonBoxLinkDynMultiChoice_2:
# 82 "data/scripts/pc.pory"
	bufferstring STR_VAR_1, EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_1
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_1

EventScript_AccessPokemonBoxLinkDynMultiChoice_7:
# 92 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 93 "data/scripts/pc.pory"
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
# 94 "data/scripts/pc.pory"
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
# 95 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 96 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 97 "data/scripts/pc.pory"
	waitstate
# 98 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 99 "data/scripts/pc.pory"
	goto BoxLink_ContinueUsingPC
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_5

EventScript_AccessPokemonBoxLinkDynMultiChoice_8:
# 102 "data/scripts/pc.pory"
	compare VAR_POKEMON_BOX_LINK_HEAL, 0
	goto_if_gt EventScript_AccessPokemonBoxLinkDynMultiChoice_10
# 120 "data/scripts/pc.pory"
	playse SE_FAILURE
# 121 "data/scripts/pc.pory"
	waitse
# 122 "data/scripts/pc.pory"
	msgbox EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_8, MSGBOX_AUTOCLOSE
# 123 "data/scripts/pc.pory"
	goto BoxLink_ContinueUsingPC
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_5

EventScript_AccessPokemonBoxLinkDynMultiChoice_9:
# 127 "data/scripts/pc.pory"
	goto BoxLink_LogOffPC
	end

EventScript_AccessPokemonBoxLinkDynMultiChoice_10:
# 103 "data/scripts/pc.pory"
	special HealPlayerParty
# 104 "data/scripts/pc.pory"
	playse MUS_HEAL
# 105 "data/scripts/pc.pory"
	message EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_6
# 106 "data/scripts/pc.pory"
	waitmessage
# 107 "data/scripts/pc.pory"
	waitse
# 108 "data/scripts/pc.pory"
	closemessage
# 109 "data/scripts/pc.pory"
	subvar VAR_POKEMON_BOX_LINK_HEAL, 1
# 110 "data/scripts/pc.pory"
	compare VAR_POKEMON_BOX_LINK_HEAL, 0
	goto_if_gt EventScript_AccessPokemonBoxLinkDynMultiChoice_14
# 115 "data/scripts/pc.pory"
	msgbox EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_8, MSGBOX_AUTOCLOSE
EventScript_AccessPokemonBoxLinkDynMultiChoice_13:
# 117 "data/scripts/pc.pory"
	goto BoxLink_ContinueUsingPC
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_5

EventScript_AccessPokemonBoxLinkDynMultiChoice_14:
# 111 "data/scripts/pc.pory"
	buffernumberstring STR_VAR_2, VAR_POKEMON_BOX_LINK_HEAL
# 112 "data/scripts/pc.pory"
	msgbox EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_7, MSGBOX_AUTOCLOSE
	goto EventScript_AccessPokemonBoxLinkDynMultiChoice_13


BoxLink_ContinueUsingPC::
# 135 "data/scripts/pc.pory"
	lockall
# 136 "data/scripts/pc.pory"
	message EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_0
# 137 "data/scripts/pc.pory"
	call EventScript_AccessPokemonBoxLinkDynMultiChoice
# 138 "data/scripts/pc.pory"
	goto BoxLink_LogOffPC
	end


BoxLink_LogOffPC::
# 143 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 144 "data/scripts/pc.pory"
	releaseall
	end


EventScript_AccessPokemonBoxLink_Text_0:
# 72 "data/scripts/pc.pory"
	.string "{PKMN} Box Link opened.\n$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_0:
# 80 "data/scripts/pc.pory"
	.string "What will you like to do?$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_1:
# 82 "data/scripts/pc.pory"
	.string "Lanette$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_2:
# 85 "data/scripts/pc.pory"
	.string "Someone$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_3:
# 87 "data/scripts/pc.pory"
	.string "{STR_VAR_1}'s Storage$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_4:
# 87 "data/scripts/pc.pory"
	.string "Heal Pokémon$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_5:
# 87 "data/scripts/pc.pory"
	.string "See ya!$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_6:
# 105 "data/scripts/pc.pory"
	.string "Your party has been healed!\n$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_7:
# 112 "data/scripts/pc.pory"
	.string "Heals left: {STR_VAR_2}.$"

EventScript_AccessPokemonBoxLinkDynMultiChoice_Text_8:
# 115 "data/scripts/pc.pory"
	.string "No heals left!$"
