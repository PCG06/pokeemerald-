CastbelleTown_MapScripts::
# 2 "data/maps/CastbelleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CastbelleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CastbelleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CastbelleTown/scripts.pory"
	setflag FLAG_VISITED_CASTBELLE_TOWN
	return


CastbelleTown_EventScript_CastbelleTownSign::
# 8 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_CastbelleTownSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_PlayersHouseSign::
# 13 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_BrianHouseSign::
# 17 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_BrianHouseSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_ProfWoodsLabSign::
# 21 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_ProfWoodsLabSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_ProofWoodsHouseSign::
# 25 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_ProofWoodsHouseSign_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_BerryShop::
# 29 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_BerryShop_Text_0, MSGBOX_SIGN
	return


CastbelleTown_EventScript_Fatman::
# 34 "data/maps/CastbelleTown/scripts.pory"
	lock
# 35 "data/maps/CastbelleTown/scripts.pory"
	faceplayer
# 36 "data/maps/CastbelleTown/scripts.pory"
	msgbox CastbelleTown_EventScript_Fatman_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/CastbelleTown/scripts.pory"
	faceoriginaldir
# 38 "data/maps/CastbelleTown/scripts.pory"
	release
	end


CastbelleTown_EventScript_Munchlax::
# 43 "data/maps/CastbelleTown/scripts.pory"
	moncryscript SPECIES_MUNCHLAX, CastbelleTown_EventScript_Munchlax_Text_0
# 44 "data/maps/CastbelleTown/scripts.pory"
	faceoriginaldir
# 45 "data/maps/CastbelleTown/scripts.pory"
	release
	end


CastbelleTown_EventScript_CastbelleTownSign_Text_0:
# 8 "data/maps/CastbelleTown/scripts.pory"
	.string "Castbelle Town\n"
	.string "“New beginnings begin here!”$"

CastbelleTown_EventScript_PlayersHouseSign_Text_0:
# 13 "data/maps/CastbelleTown/scripts.pory"
	.string "{PLAYER}'s House$"

CastbelleTown_EventScript_BrianHouseSign_Text_0:
# 17 "data/maps/CastbelleTown/scripts.pory"
	.string "Brian's House$"

CastbelleTown_EventScript_ProfWoodsLabSign_Text_0:
# 21 "data/maps/CastbelleTown/scripts.pory"
	.string "Professor Wood's Laboratory$"

CastbelleTown_EventScript_ProofWoodsHouseSign_Text_0:
# 25 "data/maps/CastbelleTown/scripts.pory"
	.string "Professor Wood's House$"

CastbelleTown_EventScript_BerryShop_Text_0:
# 29 "data/maps/CastbelleTown/scripts.pory"
	.string "Castbelle Berry Shop\n"
	.string "“Your one stop for all things berries!”$"

CastbelleTown_EventScript_Fatman_Text_0:
# 36 "data/maps/CastbelleTown/scripts.pory"
	.string "My Munchlax is a happy boy!$"

CastbelleTown_EventScript_Munchlax_Text_0:
# 43 "data/maps/CastbelleTown/scripts.pory"
	.string "Munch! Munch!$"
