CastbelleTown_BerryShop_MapScripts::
	.byte 0


CastbelleTown_BerryShop_EventScript_Clerk::
# 4 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 1
	goto_if_le CastbelleTown_BerryShop_EventScript_Clerk_1
# 15 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_lt CastbelleTown_BerryShop_EventScript_Clerk_2
# 21 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	lock
# 22 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	faceplayer
# 23 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	message CastbelleTown_BerryShop_EventScript_Clerk_Text_1
# 26 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	waitmessage
# 27 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	pokemart BerryShop_Items
# 28 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 29 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	release
	end

CastbelleTown_BerryShop_EventScript_Clerk_1:
# 6 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	lock
# 7 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	faceplayer
# 8 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	msgbox CastbelleTown_BerryShop_EventScript_Clerk_Text_0, MSGBOX_AUTOCLOSE
	return

CastbelleTown_BerryShop_EventScript_Clerk_2:
	end


	.align 2
# 34 "data/maps/CastbelleTown_BerryShop/scripts.pory"
BerryShop_Items:
# 35 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 36 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 37 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 38 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 39 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 40 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 41 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 42 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

CastbelleTown_BerryShop_EventScript_Brian::
# 46 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	lock
# 47 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	msgbox CastbelleTown_BerryShop_EventScript_Brian_Text_0, MSGBOX_AUTOCLOSE
# 49 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	release
	return


CastbelleTown_BerryShop_EventScript_Clerk_Text_0:
# 8 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.string "Hello, {PLAYER}!\n"
	.string "We're currently all out of berries.\p"
	.string "Our goods will be supplied in a short\n"
	.string "awhile.\p"
	.string "We sincerely apologize and hope such\n"
	.string "disasters won't happen in the future.$"

CastbelleTown_BerryShop_EventScript_Clerk_Text_1:
# 23 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.string "Hello {PLAYER},\n"
	.string "welcome to our Berry Shop!\l"
	.string "How may I serve you?$"

CastbelleTown_BerryShop_EventScript_Brian_Text_0:
# 47 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.string "Brian: Umm, I'll take 3 Oran Berries\n"
	.string "and uhh do you have Berry Juice?$"
