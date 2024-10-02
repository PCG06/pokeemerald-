CastbelleTown_ProfessorPinesLab_MapScripts::
	.byte 0


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine::
# 10 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_1
# 14 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 4
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_2
# 20 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 5
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_3
	return

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_1:
# 11 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_0, MSGBOX_NPC
	return

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_2:
# 15 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_1, MSGBOX_NPC
	return

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_3:
# 21 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_2, MSGBOX_NPC
	return


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon::
# 29 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 30 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_WalkUp
# 31 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 32 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, Common_Movement_WalkDown
# 42 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_1, MSGBOX_AUTOCLOSE
# 47 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 3
# 48 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end


CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter::
# 53 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 54 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3:
# 79 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1:
# 81 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2:
# 55 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 56 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 57 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1, MSGBOX_YESNO
# 64 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7
# 73 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 74 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_4:
# 54 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7:
# 65 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 66 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 67 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 68 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_GRASS
# 69 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
# 70 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_FireStarter::
# 86 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 87 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3:
# 113 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1:
# 115 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2:
# 88 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 89 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 90 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0, MSGBOX_AUTOCLOSE
# 95 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1, MSGBOX_YESNO
# 98 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7
# 107 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 108 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_4:
# 87 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7:
# 99 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
# 100 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
# 101 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY
# 102 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_FIRE
# 103 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LITTEN
# 104 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter::
# 120 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 121 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3:
# 148 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1:
# 150 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2:
# 122 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 123 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 124 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1, MSGBOX_YESNO
# 133 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7
# 142 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 143 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_4:
# 121 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7:
# 134 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
# 135 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIPLUP
# 136 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_ORAN_BERRY
# 137 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_WATER
# 138 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PIPLUP
# 139 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon::
# 155 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 156 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_NORMAL
# 157 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 158 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 159 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 160 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 161 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0
# 163 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitfanfare
# 164 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 165 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_1, MSGBOX_YESNO
# 167 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_2
CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_1:
# 171 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 172 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 4
# 174 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian
	return

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_2:
# 168 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 169 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_1


CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian::
# 178 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 179 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 180 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitse
# 181 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_QUESTION
# 183 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 184 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playbgm MUS_DP_RIVAL, TRUE
# 185 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceDown
# 186 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	addobject 6
# 187 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setobjectxy 6, 6, 11
# 188 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianRushToProf
# 189 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceLeft
# 190 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1, MSGBOX_AUTOCLOSE
# 197 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2, MSGBOX_AUTOCLOSE
# 201 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_WalkInPlaceFasterUp
# 202 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3, MSGBOX_AUTOCLOSE
# 204 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_EXCLAIM
# 205 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 206 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4, MSGBOX_AUTOCLOSE
# 209 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 6, EMOTE_EXCLAIM
# 210 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5, MSGBOX_AUTOCLOSE
# 214 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_GRASS_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2
# 224 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_FIRE_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3
# 235 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToGrassStarter
# 236 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8, MSGBOX_AUTOCLOSE
# 237 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 238 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 239 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 240 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 2
# 241 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceRight
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1:
# 243 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9, MSGBOX_DEFAULT
# 246 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_STARTER_MON
# 249 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9
# 252 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10
# 255 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9:
# 250 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7:
# 258 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	special HealPlayerParty
# 259 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11, MSGBOX_AUTOCLOSE
# 260 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceUp
# 261 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12
# 263 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 264 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FacePlayer
# 265 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13, MSGBOX_AUTOCLOSE
# 270 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianExitLab
# 271 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 6
# 272 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 1, EMOTE_EXCLAIM
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14, MSGBOX_DEFAULT
# 274 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 275 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 276 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_15, MSGBOX_AUTOCLOSE
# 278 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playbgm MUS_HG_ELM_LAB, TRUE
# 279 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 280 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 281 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_0x8000
# 282 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 7, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_14
# 284 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 8, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_15
# 286 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 9, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_16
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12:
# 289 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	turnplayer DIR_WEST
# 290 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_16, MSGBOX_AUTOCLOSE
# 296 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 297 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	message CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_17
# 298 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitfanfare
# 299 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 300 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 301 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 302 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_PROF_PINE
# 303 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_18, MSGBOX_AUTOCLOSE
# 319 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 320 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_19, MSGBOX_NPC
# 338 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2:
# 215 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToFireStarter
# 216 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 217 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6, MSGBOX_AUTOCLOSE
# 218 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 219 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 220 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 221 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 3
# 222 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3:
# 225 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToWaterStarter
# 226 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 227 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7, MSGBOX_AUTOCLOSE
# 228 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 229 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 230 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 231 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 4
# 232 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10:
# 253 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11:
# 256 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_14:
# 283 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_1
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_15:
# 285 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_16:
# 287 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_3
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12


# 342 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianRushToProf:
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 346 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianExitLab:
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
	step_end

# 350 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToFireStarter:
# 351 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 352 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 352 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 353 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 356 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToWaterStarter:
# 357 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 358 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 358 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 358 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 359 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToGrassStarter:
# 363 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 364 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	face_up
	step_end

# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_1:
# 368 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 369 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	face_right
	step_end

# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_2:
# 373 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 374 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 377 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_3:
# 378 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 379 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 379 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger1::
# 383 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Left
# 384 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 387 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Left:
# 388 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 388 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger2::
# 392 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Left
# 393 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 396 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Left:
# 397 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger4::
# 401 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Right
# 402 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 405 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Right:
# 406 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger5::
# 410 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Right
# 411 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 414 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Right:
# 415 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 415 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger6::
# 419 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx3_Right
# 420 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 423 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx3_Right:
# 424 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 424 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 424 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving::
# 428 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 429 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0, MSGBOX_AUTOCLOSE
# 432 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 433 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_0x8000
# 434 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 5, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3
# 436 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 6, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4
# 438 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 7, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5
# 440 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 8, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6
CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1:
# 443 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	turnplayer DIR_NORTH
# 444 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3:
# 435 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_1
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4:
# 437 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5:
# 439 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_3
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6:
# 441 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_4
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1


# 448 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_1:
# 449 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 452 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 455 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_2:
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 457 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 460 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_3:
# 461 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 461 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 461 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 461 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 461 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 461 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 464 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_4:
# 465 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 466 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 467 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 467 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 467 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 467 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 467 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 467 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_Aide1::
# 471 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0, MSGBOX_NPC
# 475 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	faceoriginaldir
	end


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_0:
# 11 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Go ahead, {PLAYER}!\p"
	.string "Choose your first Pokémon.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_1:
# 15 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Safe travels, {PLAYER}.\n"
	.string "Don't forget to meet your mother\l"
	.string "before you leave.\p"
	.string "It's rude to leave without goodbyes.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_2:
# 21 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Please when you meet Brian,\n"
	.string "give Brian his Pokédex, {PLAYER}.\p"
	.string "He must be wandering around Castbelle\n"
	.string "Path or 'next town'$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0:
# 32 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Hello, {PLAYER}!\p"
	.string "You're here to get your first Pokémon,\n"
	.string "huh?\p"
	.string "Where's Brian?\n"
	.string "I thought he was along with you?\p"
	.string "… … … … … … …\p"
	.string "Oh I see. Anyway, since you're here,\n"
	.string "you'd want to meet your first Pokémon\l"
	.string "now, right?$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_1:
# 42 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: In these three Poké Balls\n"
	.string "are three Pokémon I was gifted by an\l"
	.string "older student of mine.\p"
	.string "Prof. Pine: You can now go ahead and\n"
	.string "choose one, {PLAYER}!$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0:
# 57 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Grass-type\n"
	.string "Chikorita, I see!\p"
	.string "Chikorita is quite easy to raise!\p"
	.string "It's the perfect Pokémon for beginners.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1:
# 61 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Grass-type Chikorita as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2:
# 74 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Okay, take your time.\p"
	.string "This is an important decision.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3:
# 79 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "It's Prof. Pine's other starter Pokémon.$"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0:
# 90 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Fire-type\n"
	.string "Litten, I see!\p"
	.string "Litten can be a challenge to raise!\p"
	.string "Bonding with your Litten would be\n"
	.string "your ultimate test as a Trainer! $"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1:
# 95 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Fire-type Litten as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0:
# 124 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Water-type\n"
	.string "Piplup, I see!\p"
	.string "Piplup is the most balanced of the\n"
	.string "three!\p"
	.string "You need to take care of this one,\n"
	.string "though! They are clumsy.$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1:
# 130 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Water-type Piplup as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0:
# 161 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_1:
# 165 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof Pine: Would you like to give a\n"
	.string "nickname to your {STR_VAR_1}?$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0:
# 181 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "???: I'M HERE!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1:
# 190 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Sorry, I'm late, professor!\p"
	.string "I was buying some berries and may have\n"
	.string "forgotten about this!\p"
	.string "That was a lie!\n"
	.string "I would never forget something as\l"
	.string "important as this!\p"
	.string "I'm really sorry, Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2:
# 197 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: It's okay, Brian!\n"
	.string "We all get caught up in our hobbies.\p"
	.string "Now wouldn't you want to choose your\n"
	.string "partner Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3:
# 202 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: YES!\p"
	.string "I choose you, {STR_VAR_1}!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4:
# 206 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Uhh, sorry to be the\n"
	.string "bearer of bad news, but {PLAYER}\l"
	.string "has already chosen {STR_VAR_1}…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5:
# 210 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: …\n"
	.string "…\l"
	.string "Well, the Early Bird gets the Wurmple…\p"
	.string "Then in that case…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6:
# 217 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Litten!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7:
# 227 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Piplup!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8:
# 236 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Chikorita!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9:
# 243 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Okay, {PLAYER}!\n"
	.string "Now that we have our own Pokémon,\l"
	.string "let's battle em!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10:
# 250 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Ow man!\pYou got lucky!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11:
# 259 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: That was fun!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12:
# 261 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Thank you, Prof. Pine for my new\n"
	.string "best friend!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13:
# 265 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Hehe! I'm only joking,\n"
	.string "{PLAYER}!\p"
	.string "Anyway, I'm off to 'next town'!\n"
	.string "I wanna catch the ferry to the\l"
	.string "mainland and challenge 'gym 1 leader'!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14:
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Oh! Brian! Wait!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_15:
# 276 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "sigh…\p"
	.string "Kids these days…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_16:
# 290 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: {PLAYER}!\n"
	.string "Could you chase after Brian and give\l"
	.string "him the Pokédex?\p"
	.string "… … … … … … …\p"
	.string "Of course! You're getting one too!\n"
	.string "Haha!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_17:
# 297 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_18:
# 303 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: The Pokédex is a high-tech\n"
	.string "tool that records all Pokémon you see\l"
	.string "or capture.\p"
	.string "Whenever you catch a Pokémon,\n"
	.string "the Pokédex records its data and it\l"
	.string "gets sent to me!\p"
	.string "I use that data for my research.\n"
	.string "It helps me to know what moves a\l"
	.string "Pokémon can learn, what their traits\l"
	.string "are, where they can be commonly found,\l"
	.string "and their sizes and weights!\p"
	.string "For your fieldwork, all you need to do\n"
	.string "is go out there and catch any Pokémon\l"
	.string "you see.\p"
	.string "Of course, to catch Pokémon, you will\n"
	.string "need Poké Balls!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_19:
# 320 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: The Poké Ball is a capsule\n"
	.string "that catches a Pokémon.\p"
	.string "The Poké Ball becomes the home of the\n"
	.string "Pokémon.\p"
	.string "But it won't always work!\n"
	.string "You'd need to weaken the wild Pokémon\l"
	.string "first, then throw a Poké Ball.\p"
	.string "Also, note that you cannot catch other\n"
	.string "Trainer's Pokémon!\p"
	.string "Due to recent events, I feel like I'd\n"
	.string "need to announce it now.\p"
	.string "Anyway, {PLAYER}!\p"
	.string "I wish you all the best in your Pokémon\n"
	.string "adventure!\p"
	.string "Safe travels, {PLAYER}.\n"
	.string "Don't forget to meet your mother\l"
	.string "before you leave.\p"
	.string "It's rude to leave without goodbyes.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0:
# 429 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Wait! Don't leave just yet!\p"
	.string "You have not chosen your partner\n"
	.string "Pokémon, yet!$"

CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0:
# 471 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I help out Prof Pine in his research.\n"
	.string "He is a very passionate man!\p"
	.string "You'll learn a lot under him!\n"
	.string "I can guarentee that.$"
