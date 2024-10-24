EventScript_FishOrSurf::
# 2 "data/scripts/surf.pory"
	lockall
	checkitem ITEM_FISHING_ROD
# 0 "data/scripts/surf.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_FishOrSurf_11
EventScript_FishOrSurf_9:
	checkitem ITEM_FISHING_ROD
# 0 "data/scripts/surf.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_FishOrSurf_8
EventScript_FishOrSurf_6:
	checkitem ITEM_HM_SURF
# 0 "data/scripts/surf.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_FishOrSurf_5
EventScript_FishOrSurf_4:
# 26 "data/scripts/surf.pory"
	releaseall
	end

EventScript_FishOrSurf_1:
# 4 "data/scripts/surf.pory"
	message EventScript_FishOrSurf_Text_0
# 5 "data/scripts/surf.pory"
	delay 45
# 6 "data/scripts/surf.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, EventScript_FishOrSurf_Text_1, EventScript_FishOrSurf_Text_2
# 7 "data/scripts/surf.pory"
	closemessage
# 8 "data/scripts/surf.pory"
	switch VAR_RESULT
# 10 "data/scripts/surf.pory"
	case 0, EventScript_FishOrSurf_15
# 12 "data/scripts/surf.pory"
	case 1, EventScript_FishOrSurf_16
# 15 "data/scripts/surf.pory"
	releaseall
	end

EventScript_FishOrSurf_2:
# 20 "data/scripts/surf.pory"
	goto EventScript_Fishing
	return

EventScript_FishOrSurf_3:
# 23 "data/scripts/surf.pory"
	goto EventScript_Surf
	return

EventScript_FishOrSurf_5:
	checkitem ITEM_FISHING_ROD
# 0 "data/scripts/surf.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_FishOrSurf_3
	goto EventScript_FishOrSurf_4

EventScript_FishOrSurf_8:
	checkitem ITEM_HM_SURF
# 0 "data/scripts/surf.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_FishOrSurf_2
	goto EventScript_FishOrSurf_6

EventScript_FishOrSurf_11:
	checkitem ITEM_HM_SURF
# 0 "data/scripts/surf.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_FishOrSurf_1
	goto EventScript_FishOrSurf_9

EventScript_FishOrSurf_15:
# 11 "data/scripts/surf.pory"
	goto EventScript_Fishing
	return

EventScript_FishOrSurf_16:
# 13 "data/scripts/surf.pory"
	goto EventScript_Surf
	return


EventScript_Fishing::
# 33 "data/scripts/surf.pory"
	callnative DoFishing
# 34 "data/scripts/surf.pory"
	releaseall
	end


EventScript_Surf::
# 39 "data/scripts/surf.pory"
	dofieldeffect FLDEFF_USE_SURF
# 40 "data/scripts/surf.pory"
	releaseall
	end


EventScript_FishOrSurf_Text_0:
# 4 "data/scripts/surf.pory"
	.string "Would you like to fish or surf?$"

EventScript_FishOrSurf_Text_1:
# 6 "data/scripts/surf.pory"
	.string "FISH$"

EventScript_FishOrSurf_Text_2:
# 6 "data/scripts/surf.pory"
	.string "SURF$"
