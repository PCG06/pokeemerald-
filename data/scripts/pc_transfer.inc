@ VAR_0x8004 here is used by ChangePokemonNickname
Common_EventScript_GetGiftMonPartySlot::
	getpartysize
	subvar VAR_RESULT, 1
	copyvar VAR_0x8004, VAR_RESULT
	return

Common_EventScript_NameReceivedBoxMon::
	fadescreen FADE_TO_BLACK
	special ChangeBoxPokemonNickname
	waitstate
	lock
	faceplayer
	return

Common_EventScript_TransferredToPC::
	bufferboxname STR_VAR_1, VAR_PC_BOX_TO_SEND_MON
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_TransferredSomeonesPC
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_TransferredLanettesPC
	return

EventScript_TransferredSomeonesPC::
	specialvar VAR_RESULT, ShouldShowBoxWasFullMessage
	goto_if_eq VAR_RESULT, TRUE, EventScript_SomeonesPCBoxFull
	msgbox gText_PkmnTransferredSomeonesPC, MSGBOX_DEFAULT
	return

EventScript_SomeonesPCBoxFull::
	specialvar VAR_RESULT, GetPCBoxToSendMon
	bufferboxname STR_VAR_3, VAR_RESULT
	msgbox gText_PkmnTransferredSomeonesPCBoxFull, MSGBOX_DEFAULT
	return

EventScript_TransferredLanettesPC::
	specialvar VAR_RESULT, ShouldShowBoxWasFullMessage
	goto_if_eq VAR_RESULT, TRUE, EventScript_LanettesPCBoxFull
	msgbox gText_PkmnTransferredLanettesPC, MSGBOX_DEFAULT
	return

EventScript_LanettesPCBoxFull::
	specialvar VAR_RESULT, GetPCBoxToSendMon
	bufferboxname STR_VAR_3, VAR_RESULT
	msgbox gText_PkmnTransferredLanettesPCBoxFull, MSGBOX_DEFAULT
	return

Common_EventScript_NoMoreRoomForPokemon::
	msgbox gText_NoMoreRoomForPokemon, MSGBOX_DEFAULT
	release
	end

Common_EventScript_PlayerReceivedPokemon::
	playfanfare MUS_DP_OBTAIN_ITEM
	message gText_PlayerReceivedPokemon
	waitfanfare
	closemessage
	call Common_EventScript_ShowPokemonNature
	call Common_EventScript_NicknameGiftPokemon
	return

Common_EventScript_ShowPokemonNature::
	call_if_eq VAR_0x8014, TRUE, PlayShinySoundShowShinyNature
	call_if_eq VAR_0x8014, FALSE, ShowNature
	return

PlayShinySoundShowShinyNature::
	playse SE_SHINY
	message gText_ItHasTheXNature
	waitse
	waitbuttonpress
	return

ShowNature::
	message gText_ItHasTheXNature
	waitbuttonpress
	return

Common_EventScript_NicknameGiftPokemon::
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, NicknamePartyMonYesNo
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, NicknameBoxMonYesNo
	return

NicknamePartyMonYesNo::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NicknamePartyMon
	return

NicknamePartyMon::
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return

NicknameBoxMonYesNo::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, NicknameBoxMon
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon::
	call Common_EventScript_NameReceivedBoxMon
	return
