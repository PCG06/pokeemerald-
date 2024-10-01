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
	return


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon::
# 25 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 26 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_WalkUp
# 27 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 28 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, Common_Movement_WalkDown
# 38 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_1, MSGBOX_AUTOCLOSE
# 43 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 3
# 44 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end


CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter::
# 49 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 50 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3:
# 75 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1:
# 77 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2:
# 51 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 52 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 53 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1, MSGBOX_YESNO
# 60 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7
# 69 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 70 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_4:
# 50 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7:
# 61 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 62 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 63 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 64 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_GRASS
# 65 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
# 66 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_FireStarter::
# 82 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 83 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3:
# 109 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1:
# 111 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2:
# 84 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 85 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 86 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0, MSGBOX_AUTOCLOSE
# 91 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1, MSGBOX_YESNO
# 94 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7
# 103 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 104 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_4:
# 83 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7:
# 95 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
# 96 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
# 97 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY
# 98 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_FIRE
# 99 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LITTEN
# 100 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter::
# 116 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 117 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3:
# 144 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1:
# 146 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2:
# 118 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 119 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 120 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0, MSGBOX_AUTOCLOSE
# 126 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1, MSGBOX_YESNO
# 129 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7
# 138 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 139 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_4:
# 117 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7:
# 130 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
# 131 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIPLUP
# 132 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_ORAN_BERRY
# 133 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_WATER
# 134 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PIPLUP
# 135 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon::
# 151 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 152 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_NORMAL
# 153 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 154 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 155 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 156 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0
# 159 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitfanfare
# 160 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 161 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 162 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 4
# 163 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian
	return


CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian::
# 167 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 168 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 169 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitse
# 170 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0, MSGBOX_AUTOCLOSE
# 171 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_QUESTION
# 172 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 173 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playbgm MUS_DP_RIVAL, TRUE
# 174 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceDown
# 175 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	addobject 6
# 176 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setobjectxy 6, 6, 11
# 177 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianRushToProf
# 178 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceLeft
# 179 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1, MSGBOX_AUTOCLOSE
# 186 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2, MSGBOX_AUTOCLOSE
# 190 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_WalkInPlaceFasterUp
# 191 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3, MSGBOX_AUTOCLOSE
# 193 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_EXCLAIM
# 194 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 195 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 196 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4, MSGBOX_AUTOCLOSE
# 199 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 6, EMOTE_EXCLAIM
# 200 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5, MSGBOX_AUTOCLOSE
# 204 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_GRASS_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2
# 214 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_FIRE_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3
# 225 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToGrassStarter
# 226 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8, MSGBOX_AUTOCLOSE
# 227 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 228 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 229 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 230 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 2
# 231 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceRight
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1:
# 233 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9, MSGBOX_DEFAULT
# 236 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_STARTER_MON
# 239 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9
# 242 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10
# 245 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9:
# 240 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7:
# 248 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	special HealPlayerParty
# 249 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11, MSGBOX_AUTOCLOSE
# 250 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceUp
# 251 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12
# 253 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 254 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FacePlayer
# 255 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13, MSGBOX_AUTOCLOSE
# 260 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianExitLab
# 261 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 6
# 262 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14, MSGBOX_AUTOCLOSE
# 265 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 266 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 267 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playbgm MUS_HG_ELM_LAB, TRUE
# 268 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 1, EMOTE_EXCLAIM
# 270 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 271 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_0x8000
# 272 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 7, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_14
# 274 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 8, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_15
# 276 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 9, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_16
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12:
# 279 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	turnplayer DIR_WEST
# 280 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_15, MSGBOX_AUTOCLOSE
# 286 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 287 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	message CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_16
# 288 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitfanfare
# 289 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 290 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 291 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 292 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_PROF_PINE
# 293 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_17, MSGBOX_AUTOCLOSE
# 308 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 309 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_18, MSGBOX_NPC
# 327 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2:
# 205 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToFireStarter
# 206 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 207 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6, MSGBOX_AUTOCLOSE
# 208 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 209 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 210 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 211 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 3
# 212 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3:
# 215 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToWaterStarter
# 216 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 217 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7, MSGBOX_AUTOCLOSE
# 218 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 219 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 220 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 221 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 4
# 222 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10:
# 243 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11:
# 246 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_14:
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_1
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_15:
# 275 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_16:
# 277 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_3
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_12


# 331 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianRushToProf:
# 332 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 332 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 332 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 332 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 332 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 332 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 335 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianExitLab:
# 336 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 336 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 336 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 336 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 336 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToFireStarter:
# 340 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 341 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 341 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 342 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 345 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToWaterStarter:
# 346 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 348 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 351 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToGrassStarter:
# 352 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 353 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	face_up
	step_end

# 356 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_1:
# 357 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 358 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	face_right
	step_end

# 361 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_2:
# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 363 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 366 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_3:
# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 368 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 368 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger1::
# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Left
# 373 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 376 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Left:
# 377 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 377 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger2::
# 381 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Left
# 382 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 385 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Left:
# 386 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger4::
# 390 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Right
# 391 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 394 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Right:
# 395 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger5::
# 399 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Right
# 400 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 403 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Right:
# 404 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 404 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger6::
# 408 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx3_Right
# 409 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 412 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx3_Right:
# 413 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 413 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 413 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving::
# 417 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 418 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0, MSGBOX_AUTOCLOSE
# 421 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 422 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_0x8000
# 423 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 5, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3
# 425 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 6, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4
# 427 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 7, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5
# 429 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 8, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6
CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1:
# 432 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	turnplayer DIR_NORTH
# 433 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3:
# 424 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_1
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4:
# 426 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5:
# 428 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_3
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6:
# 430 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_4
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1


# 437 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_1:
# 438 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 439 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 440 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 440 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 440 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 440 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 440 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 440 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 441 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 444 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_2:
# 445 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 445 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 445 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 445 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 445 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 445 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 446 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 449 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_3:
# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 453 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_4:
# 454 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 455 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
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
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_Aide1::
# 460 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0, MSGBOX_NPC
# 464 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	faceoriginaldir
	end


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_0:
# 11 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Go ahead, {PLAYER}!\p"
	.string "Choose your first Pokémon.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_1:
# 15 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Safe travels, {PLAYER}.\n"
	.string "Don't forget to meet your mother before\l"
	.string "you leave.\p"
	.string "It's rude to leave without goodbyes.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0:
# 28 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
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
# 38 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: In these three Poké Balls\n"
	.string "are three Pokémon I was gifted by an\l"
	.string "older student of mine.\p"
	.string "Prof. Pine: You can now go ahead and\n"
	.string "choose one, {PLAYER}!$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0:
# 53 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Grass-type\n"
	.string "Chikorita, I see!\p"
	.string "Chikorita is quite easy to raise!\p"
	.string "It's the perfect Pokémon for beginners.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1:
# 57 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Grass-type Chikorita as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2:
# 70 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Okay, take your time.\p"
	.string "This is an important decision.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3:
# 75 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "It's Prof. Pine's other starter Pokémon.$"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0:
# 86 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Fire-type\n"
	.string "Litten, I see!\p"
	.string "Litten can be a challenge to raise!\p"
	.string "Bonding with your Litten would be\n"
	.string "your ultimate test as a Trainer! $"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1:
# 91 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Fire-type Litten as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0:
# 120 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Water-type\n"
	.string "Piplup, I see!\p"
	.string "Piplup is the most balanced of the\n"
	.string "three!\p"
	.string "You need to take care of this one,\n"
	.string "though! They are clumsy.$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1:
# 126 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Water-type Piplup as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0:
# 157 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0:
# 170 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "???: I'M HERE!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1:
# 179 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Sorry, I'm late, professor!\p"
	.string "I was buying some berries and may have\n"
	.string "forgotten about this!\p"
	.string "That was a lie!\n"
	.string "I would never forget something as\l"
	.string "important as this!\p"
	.string "I'm really sorry, Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2:
# 186 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: It's okay, Brian!\n"
	.string "We all get caught up in our hobbies.\p"
	.string "Now wouldn't you want to choose your\n"
	.string "partner Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3:
# 191 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: YES!\p"
	.string "I choose you {STR_VAR_1}!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4:
# 196 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Uhh, sorry to be the\n"
	.string "bearer of bad news, but {PLAYER}\l"
	.string "has already chosen {STR_VAR_1}…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5:
# 200 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: …\n"
	.string "…\l"
	.string "Well, the Early Bird gets the Wurmple…\p"
	.string "Then in that case…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6:
# 207 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Litten!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7:
# 217 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Piplup!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8:
# 226 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Chikorita!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9:
# 233 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Okay, {PLAYER}!\n"
	.string "Now that we have our own Pokémon,\l"
	.string "let's battle em!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10:
# 240 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Ow man!\pYou got lucky!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11:
# 249 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: That was fun!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12:
# 251 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Thank you, Prof. Pine for my new\n"
	.string "best friend!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13:
# 255 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Hehe! I'm only joking,\n"
	.string "{PLAYER}!\p"
	.string "Anyway, I'm off to 'next town'!\n"
	.string "I wanna catch the ferry to the\l"
	.string "mainland and challenge 'gym 1 leader'!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14:
# 262 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Oh! Brian! Wait!\p"
	.string "sigh…\p"
	.string "Kids these days…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_15:
# 280 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: {PLAYER}!\n"
	.string "Could you chase after Brian and give\l"
	.string "him the Pokédex?\p"
	.string "… … … … … … …\p"
	.string "Of course! You're getting one too!\n"
	.string "Haha!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_16:
# 287 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_17:
# 293 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: The Pokédex is a high-tech\n"
	.string "tool that records all Pokémon you see\l"
	.string "or capture.\p"
	.string "Whenever you catch a Pokémon,\n"
	.string "the Pokédex records its data and it\l"
	.string "gets sent to me!\p"
	.string "I use that data for my research.\n"
	.string "It helps me to know what moves a\l"
	.string "Pokémon can learn, what their traits are,\l"
	.string "where they can be commonly found, and\l"
	.string "their sizes and weights!\p"
	.string "For your fieldwork, all you need to do is\n"
	.string "go out there and catch any Pokémon you see.\p"
	.string "Of course, to catch Pokémon, you will need\n"
	.string "Poké Balls!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_18:
# 309 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
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
	.string "Don't forget to meet your mother before\l"
	.string "you leave.\p"
	.string "It's rude to leave without goodbyes.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0:
# 418 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Wait! Don't leave just yet!\p"
	.string "You have not chosen your partner\n"
	.string "Pokémon, yet!$"

CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0:
# 460 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I help out Prof Pine in his research.\n"
	.string "He is a very passionate man!\p"
	.string "You'll learn a lot under him!\n"
	.string "I can guarentee that.$"
