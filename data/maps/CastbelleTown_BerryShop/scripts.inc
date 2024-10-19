CastbelleTown_BerryShop_MapScripts::
	.byte 0


CastbelleTown_BerryShop_EventScript_Clerk::
# 4 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	switch VAR_CASTBELLE_TOWN_STATE
# 7 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	case 0, CastbelleTown_BerryShop_EventScript_Clerk_2
# 8 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	case 1, CastbelleTown_BerryShop_EventScript_Clerk_2
# 26 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	case 2, CastbelleTown_BerryShop_EventScript_Clerk_3
# 32 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	playse SE_SELECT
# 33 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	lock
# 34 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	faceplayer
# 35 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	dotimebasedevents
# 36 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	goto_if_unset FLAG_DAILY_CASTBELLE_TOWN_BERRY_SHOP_RECEIVED_BERRY, CastbelleTown_BerryShop_EventScript_Clerk_8
# 40 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	message CastbelleTown_BerryShop_EventScript_Clerk_Text_1
# 43 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	waitmessage
# 44 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	pokemart BerryShop_Items
# 45 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 46 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	release
	end

CastbelleTown_BerryShop_EventScript_Clerk_2:
# 9 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	playse SE_SELECT
# 10 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	lock
# 11 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	faceplayer
# 12 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	dotimebasedevents
# 13 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	goto_if_unset FLAG_DAILY_CASTBELLE_TOWN_BERRY_SHOP_RECEIVED_BERRY, CastbelleTown_BerryShop_EventScript_Clerk_5
# 17 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	msgbox CastbelleTown_BerryShop_EventScript_Clerk_Text_0, MSGBOX_AUTOCLOSE
	return

CastbelleTown_BerryShop_EventScript_Clerk_3:
	end

CastbelleTown_BerryShop_EventScript_Clerk_5:
# 14 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	goto CastbelleTown_BerryShop_EventScript_DailyFreeBerry
	return

CastbelleTown_BerryShop_EventScript_Clerk_8:
# 37 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	goto CastbelleTown_BerryShop_EventScript_DailyFreeBerry
	return


	.align 2
# 52 "data/maps/CastbelleTown_BerryShop/scripts.pory"
BerryShop_Items:
# 53 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 54 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 55 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 56 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 57 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 58 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 59 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 60 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 63 "data/maps/CastbelleTown_BerryShop/scripts.pory"
BerryShop_Items_Expanded:
# 64 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 65 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 66 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 67 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 68 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 69 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 70 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 71 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 72 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 73 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 74 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 75 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 76 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 77 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

CastbelleTown_BerryShop_EventScript_DailyFreeBerry::
# 81 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	dotimebasedevents
# 82 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	msgbox CastbelleTown_BerryShop_EventScript_DailyFreeBerry_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 85 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	setflag FLAG_DAILY_CASTBELLE_TOWN_BERRY_SHOP_RECEIVED_BERRY
	end


CastbelleTown_BerryShop_EventScript_Brian::
# 90 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	lock
# 91 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	msgbox CastbelleTown_BerryShop_EventScript_Brian_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	release
	return


CastbelleTown_BerryShop_EventScript_Clerk_Text_0:
# 17 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.string "Hello, {PLAYER}!\n"
	.string "We're currently all out of berries.\p"
	.string "Our goods will be supplied in a short\n"
	.string "while.\p"
	.string "We sincerely apologize and hope such\n"
	.string "disasters won't happen in the future.$"

CastbelleTown_BerryShop_EventScript_Clerk_Text_1:
# 40 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.string "Hello. {PLAYER}!\n"
	.string "Welcome to our Berry Shop!\l"
	.string "How may I serve you?$"

CastbelleTown_BerryShop_EventScript_DailyFreeBerry_Text_0:
# 82 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.string "Hello, {PLAYER}.\n"
	.string "Here's a free berry as a gift from me.$"

CastbelleTown_BerryShop_EventScript_Brian_Text_0:
# 91 "data/maps/CastbelleTown_BerryShop/scripts.pory"
	.string "Brian: Umm, I'll take 3 Oran Berries\n"
	.string "and uhh do you have Berry Juice?$"
