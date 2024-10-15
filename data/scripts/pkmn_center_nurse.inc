.set LOCALID_NURSE, 1

Common_EventScript_PkmnCenterNurse::
	call Common_EventScript_PkmnCenterNurse_Internal
	waitmessage
	waitbuttonpress
	release
	end

Common_EventScript_PkmnCenterNurse_Internal::
	lock
	faceplayer
	gettime
	setvar VAR_0x800A, 0
	specialvar VAR_RESULT, CountPlayerTrainerStars
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
	switch VAR_0x8000
	case 0, EventScript_PkmnCenterNurse_NurseIntro_Morning
	case 1, EventScript_PkmnCenterNurse_NurseIntro_Day
	case 2, EventScript_PkmnCenterNurse_NurseIntro_Evening
	case 3, EventScript_PkmnCenterNurse_NurseIntro_Night
	end

EventScript_PkmnCenterNurse_NurseIntro_Morning::
	msgbox gText_NurseIntro_Morning, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
	message gText_TakeCareStaySafeOutThere
	return

EventScript_PkmnCenterNurse_NurseIntro_Day::
	msgbox gText_NurseIntro_Day, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
	message gText_TakeCareStaySafeOutThere
	return

EventScript_PkmnCenterNurse_NurseIntro_Evening::
	msgbox gText_NurseIntro_Evening, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
	message gText_TakeCareStaySafeOutThere
	return

EventScript_PkmnCenterNurse_NurseIntro_Night::
	msgbox gText_NurseIntro_Night, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
	message gText_TakeCareStaySafeOutThere
	return

EventScript_PkmnCenterNurse_HealPkmn::
	incrementgamestat GAME_STAT_USED_POKECENTER
	call EventScript_PkmnCenterNurse_IllTakeYourPkmn
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
	goto EventScript_PkmnCenterNurse_ReturnPkmn
	end

EventScript_PkmnCenterNurse_IllTakeYourPkmn::
	message gText_IllTakeYourPkmn
	return

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
	applymove LOCALID_NURSE, Movement_PkmnCenterNurse_Turn @ Changed from Common_Movement_WalkInPlaceFasterLeft to force the follower to enter their Poké Ball
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymove LOCALID_NURSE, Common_Movement_WalkInPlaceFasterDown
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	return

@ VAR_0x800A is 1 when player has Gold Card
EventScript_PkmnCenterNurse_ReturnPkmn::
	message gText_ThankYouForWaiting
	waitmessage
	applymove LOCALID_NURSE, Movement_PkmnCenterNurse_Bow
	goto_if_eq VAR_0x800A, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
	message gText_TakeCareStaySafeOutThere
	return

EventScript_PkmnCenterNurse_ReturnPkmn2::
	message gText_TakeCareStaySafeOutTherePlayer
	return

EventScript_PkmnCenterNurse_CheckPokerus::
	specialvar VAR_RESULT, IsPokerusInParty
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_ReturnPkmn
	end

EventScript_PkmnCenterNurse_ExplainPokerus::
	message gText_PokerusExplanation
	setflag FLAG_POKERUS_EXPLAINED
	return

EventScript_PkmnCenterNurse_GoldCard::
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
	goto EventScript_PkmnCenterNurse_GoldCard_FlagNotSet
	end

EventScript_PkmnCenterNurse_GoldCard_FlagNotSet::
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
	playse SE_PIN
	applymove LOCALID_NURSE, Common_Movement_ExclamationMark
	applymove LOCALID_NURSE, Common_Movement_Delay48
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_TakeCareStaySafeOutTherePlayer
	return

EventScript_PkmnCenterNurse_AskForUsual::
	switch VAR_0x8000
	case 0, EventScript_PkmnCenterNurse_AskForUsual_Morning
	case 1, EventScript_PkmnCenterNurse_AskForUsual_Day
	case 2, EventScript_PkmnCenterNurse_AskForUsual_Evening
	case 3, EventScript_PkmnCenterNurse_AskForUsual_Night
	end

EventScript_PkmnCenterNurse_AskForUsual_Morning::
	msgbox gText_YouWantTheUsual_Morning, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_TakeCareStaySafeOutTherePlayer
	return

EventScript_PkmnCenterNurse_AskForUsual_Day::
	msgbox gText_YouWantTheUsual_Day, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message 
	return

EventScript_PkmnCenterNurse_AskForUsual_Evening::
	msgbox gText_YouWantTheUsual_Evening, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_TakeCareStaySafeOutTherePlayer
	return

EventScript_PkmnCenterNurse_AskForUsual_Night::
	msgbox gText_YouWantTheUsual_Night, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_TakeCareStaySafeOutTherePlayer
	return

EventScript_PkmnCenterNurse_GoldCardHealPkmn::
	setvar VAR_0x800A, 1
	goto EventScript_PkmnCenterNurse_HealPkmn
	end

Movement_PkmnCenterNurse_Bow:
	nurse_joy_bow
	delay_4
	step_end

Movement_PkmnCenterNurse_Turn:
	walk_in_place_faster_left
	step_end
