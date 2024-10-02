CastbelleTown_MapScripts::
# 2 "data/maps/CastbelleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CastbelleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CastbelleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CastbelleTown/scripts.pory"
	setflag FLAG_VISITED_CASTBELLE_TOWN
	return


CastbelleTown_EventScript_MeetBrian::
# 11 "data/maps/CastbelleTown/scripts.pory"
	lock
# 12 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_MeetBrian_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/CastbelleTown/scripts.pory"
	applymoveplayer Common_Movement_WalkDown
# 14 "data/maps/CastbelleTown/scripts.pory"
	release
	end


CastbelleTown_EventScript_MeetProfPine::
# 20 "data/maps/CastbelleTown/scripts.pory"
	lock
# 21 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_MeetProfPine_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/CastbelleTown/scripts.pory"
	applymoveplayer Common_Movement_WalkDown
# 24 "data/maps/CastbelleTown/scripts.pory"
	release
	end


CastbelleTown_EventScript_TalkToMomBeforeLeaving::
# 30 "data/maps/CastbelleTown/scripts.pory"
	lock
# 31 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_TalkToMomBeforeLeaving_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/CastbelleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 33 "data/maps/CastbelleTown/scripts.pory"
	applymoveplayer Common_Movement_WalkDown
# 34 "data/maps/CastbelleTown/scripts.pory"
	release
	end


CastbelleTown_EventScript_CastbelleTownSign::
# 39 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_CastbelleTownSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_PlayersHouseSign::
# 44 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_BrianHouseSign::
# 48 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_BrianHouseSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_ProfPinesLabSign::
# 52 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_ProfPinesLabSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_ProofWoodsHouseSign::
# 56 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_ProofWoodsHouseSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_BerryShop::
# 60 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_BerryShop_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_Fatman::
# 65 "data/maps/CastbelleTown/scripts.pory"
	lock
# 66 "data/maps/CastbelleTown/scripts.pory"
	faceplayer
# 67 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_Fatman_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/CastbelleTown/scripts.pory"
	faceoriginaldir
# 69 "data/maps/CastbelleTown/scripts.pory"
	release
	end


CastbelleTown_EventScript_Munchlax::
# 74 "data/maps/CastbelleTown/scripts.pory"
	moncryscript SPECIES_MUNCHLAX, CastbelleTown_EventScript_Munchlax_Text_0
# 75 "data/maps/CastbelleTown/scripts.pory"
	faceoriginaldir
# 76 "data/maps/CastbelleTown/scripts.pory"
	release
	end


CastbelleTown_EventScript_Boy::
# 81 "data/maps/CastbelleTown/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_le CastbelleTown_EventScript_Boy_1
# 88 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_Boy_Text_1, MSGBOX_NPC
	return

CastbelleTown_EventScript_Boy_1:
# 82 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_Boy_Text_0, MSGBOX_NPC
	return


CastbelleTown_EventScript_MeetBrian_Text_0:
# 12 "data/maps/CastbelleTown/scripts.pory"
	.string "I should go and meet Brian first!$"

CastbelleTown_EventScript_MeetProfPine_Text_0:
# 21 "data/maps/CastbelleTown/scripts.pory"
	.string "I should meet Prof. Pine and get my\n"
	.string "Pokémon before leaving!$"

CastbelleTown_EventScript_TalkToMomBeforeLeaving_Text_0:
# 31 "data/maps/CastbelleTown/scripts.pory"
	.string "I should talk to my mom before leaving!$"

CastbelleTown_EventScript_CastbelleTownSign_Text_0:
# 39 "data/maps/CastbelleTown/scripts.pory"
	.string "Castbelle Town\n"
	.string "“New beginnings begin here!”$"

CastbelleTown_EventScript_PlayersHouseSign_Text_0:
# 44 "data/maps/CastbelleTown/scripts.pory"
	.string "{PLAYER}'s House$"

CastbelleTown_EventScript_BrianHouseSign_Text_0:
# 48 "data/maps/CastbelleTown/scripts.pory"
	.string "Brian's House$"

CastbelleTown_EventScript_ProfPinesLabSign_Text_0:
# 52 "data/maps/CastbelleTown/scripts.pory"
	.string "Professor Wood's Laboratory$"

CastbelleTown_EventScript_ProofWoodsHouseSign_Text_0:
# 56 "data/maps/CastbelleTown/scripts.pory"
	.string "Professor Wood's House$"

CastbelleTown_EventScript_BerryShop_Text_0:
# 60 "data/maps/CastbelleTown/scripts.pory"
	.string "Castbelle Berry Shop\n"
	.string "“Your one stop for all things berries!”$"

CastbelleTown_EventScript_Fatman_Text_0:
# 67 "data/maps/CastbelleTown/scripts.pory"
	.string "My Munchlax is a happy boy!$"

CastbelleTown_EventScript_Munchlax_Text_0:
# 74 "data/maps/CastbelleTown/scripts.pory"
	.string "Munch! Munch!$"

CastbelleTown_EventScript_Boy_Text_0:
# 82 "data/maps/CastbelleTown/scripts.pory"
	.string "Hey, {PLAYER}.\p"
	.string "I heard you're going on your own\n"
	.string "Pokémon adventure.\p"
	.string "All the best, {PLAYER}!$"

CastbelleTown_EventScript_Boy_Text_1:
# 88 "data/maps/CastbelleTown/scripts.pory"
	.string "Woah!\n"
	.string "That's a cool Pokémon, {PLAYER}!$"
