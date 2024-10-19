CastbelleTown_PlayersHouse_2F_MapScripts::
	.byte 0


CastbelleTown_PlayerHouse_2F_EventScript_TriggerGetQuestMenu::
# 5 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	lock
# 6 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	msgbox CastbelleTown_PlayerHouse_2F_EventScript_TriggerGetQuestMenu_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	applymoveplayer Common_Movement_WalkDown
# 8 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	release
	end


CastbelleTown_PlayerHouse_2F_EventScript_Notebook::
# 13 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	lock
# 14 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	compare VAR_MAIN_STORY, 0
	goto_if_eq CastbelleTown_PlayerHouse_2F_EventScript_Notebook_1
# 26 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	return

CastbelleTown_PlayerHouse_2F_EventScript_Notebook_1:
# 16 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	msgbox CastbelleTown_PlayerHouse_2F_EventScript_Notebook_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	message CastbelleTown_PlayerHouse_2F_EventScript_Notebook_Text_1
# 19 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	waitfanfare
# 20 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 21 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 22 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAIN_STORY, 1
# 23 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	startquest QUEST_1_MAIN_STORY
	return


CastbelleTown_PlayerHouse_2F_EventScript_TriggerGetQuestMenu_Text_0:
# 6 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	.string "I should check my table before leaving!$"

CastbelleTown_PlayerHouse_2F_EventScript_Notebook_Text_0:
# 16 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	.string "It's my Quest Log!$"

CastbelleTown_PlayerHouse_2F_EventScript_Notebook_Text_1:
# 18 "data/maps/CastbelleTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} obtained a Quest Log!$"
