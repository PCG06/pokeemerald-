CastbelleTown_ProfessorPinesLab_MapScripts::
	.byte 0


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine::
# 10 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_1
# 14 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 4
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_2
	return

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_1:
# 11 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_0, MSGBOX_NPC
	return

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_2:
# 15 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_1, MSGBOX_NPC
	return


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon::
# 23 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 24 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_WalkUp
# 25 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 26 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, Common_Movement_WalkDown
# 36 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_1, MSGBOX_AUTOCLOSE
# 41 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 3
# 42 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end


CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter::
# 47 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 48 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3:
# 73 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1:
# 75 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2:
# 49 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 50 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 51 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1, MSGBOX_YESNO
# 58 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7
# 67 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 68 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_4:
# 48 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7:
# 59 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 60 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 61 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 62 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_GRASS
# 63 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
# 64 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_FireStarter::
# 80 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 81 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3:
# 107 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1:
# 109 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2:
# 82 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 83 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 84 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0, MSGBOX_AUTOCLOSE
# 89 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1, MSGBOX_YESNO
# 92 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7
# 101 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 102 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_4:
# 81 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7:
# 93 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
# 94 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
# 95 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY
# 96 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_FIRE
# 97 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LITTEN
# 98 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter::
# 114 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 115 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_4
CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3:
# 142 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1:
# 144 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2:
# 116 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 117 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 118 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1, MSGBOX_YESNO
# 127 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7
# 136 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 137 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_4:
# 115 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7:
# 128 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
# 129 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIPLUP
# 130 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_ORAN_BERRY
# 131 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_WATER
# 132 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PIPLUP
# 133 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon::
# 149 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 150 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_NORMAL
# 151 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 152 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 153 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 154 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0
# 157 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitfanfare
# 158 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 159 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 160 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 4
# 161 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian
	return


CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian::
# 165 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 166 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 167 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitse
# 168 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0, MSGBOX_AUTOCLOSE
# 169 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_QUESTION
# 170 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 171 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceDown
# 172 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	addobject 6
# 173 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setobjectxy 6, 6, 11
# 174 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianRushToProf
# 175 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceLeft
# 176 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1, MSGBOX_AUTOCLOSE
# 183 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2, MSGBOX_AUTOCLOSE
# 187 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_WalkInPlaceFasterUp
# 188 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3, MSGBOX_AUTOCLOSE
# 190 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_EXCLAIM
# 191 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 192 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 193 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4, MSGBOX_AUTOCLOSE
# 196 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 6, EMOTE_EXCLAIM
# 197 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5, MSGBOX_AUTOCLOSE
# 201 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_GRASS_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2
# 211 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_FIRE_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3
# 222 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToGrassStarter
# 223 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8, MSGBOX_AUTOCLOSE
# 224 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 225 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 226 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 227 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 2
# 228 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceRight
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1:
# 230 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9, MSGBOX_DEFAULT
# 233 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_STARTER_MON
# 236 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9
# 239 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10
# 242 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9:
# 237 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7:
# 245 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	special HealPlayerParty
# 246 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11, MSGBOX_AUTOCLOSE
# 247 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceUp
# 248 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12
# 250 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 251 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FacePlayer
# 252 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13
# 257 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianRushDown
# 258 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 6
# 259 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 260 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitse
# 261 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 1, EMOTE_EXCLAIM
# 262 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14
# 263 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 264 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2:
# 202 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToFireStarter
# 203 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 204 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6, MSGBOX_AUTOCLOSE
# 205 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 206 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 207 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 208 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 3
# 209 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3:
# 212 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, MoveToWaterStarter
# 213 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 214 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7, MSGBOX_AUTOCLOSE
# 215 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 216 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 217 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 218 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 4
# 219 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10:
# 240 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11:
# 243 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7


# 268 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianRushToProf:
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 272 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianRushDown:
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 273 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
	step_end

# 276 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToFireStarter:
# 277 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 278 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 278 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 279 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 282 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToWaterStarter:
# 283 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 284 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 284 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 284 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 285 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 288 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
MoveToGrassStarter:
# 289 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 290 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	face_up
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger1::
# 294 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Left
# 295 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 298 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Left:
# 299 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 299 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger2::
# 303 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Left
# 304 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 307 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Left:
# 308 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger4::
# 312 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Right
# 313 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 316 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Right:
# 317 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger5::
# 321 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Right
# 322 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 325 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Right:
# 326 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 326 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger6::
# 330 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx3_Right
# 331 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 334 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx3_Right:
# 335 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 335 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 335 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving::
# 339 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 340 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0, MSGBOX_AUTOCLOSE
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 344 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_0x8000
# 345 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 5, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 6, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4
# 349 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 7, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5
# 351 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 8, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6
CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1:
# 354 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	turnplayer DIR_NORTH
# 355 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3:
# 346 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_1
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4:
# 348 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5:
# 350 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_3
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6:
# 352 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_4
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1


# 359 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_1:
# 360 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 361 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 362 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 363 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 366 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_2:
# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 367 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 368 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 371 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_3:
# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 372 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 375 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_4:
# 376 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 377 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 378 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 378 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 378 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 378 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 378 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 378 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_Aide1::
# 382 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0, MSGBOX_NPC
# 386 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	faceoriginaldir
	end


CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_0:
# 11 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Go ahead, {PLAYER}!\p"
	.string "Choose your first Pokémon.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_1:
# 15 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Please deliver this parcel\n"
	.string "to Brian.\p"
	.string "He must be somewhere wandering\n"
	.string "around Castbelle Path or 'next town'.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0:
# 26 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
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
# 36 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: In these three Poké Balls\n"
	.string "are three Pokémon I was gifted by an\l"
	.string "older student of mine.\p"
	.string "Prof. Pine: You can now go ahead and\n"
	.string "choose one, {PLAYER}!$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0:
# 51 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Grass-type\n"
	.string "Chikorita, I see!\p"
	.string "Chikorita is quite easy to raise!\p"
	.string "It's the perfect Pokémon for beginners.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1:
# 55 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Grass-type Chikorita as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2:
# 68 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Okay, take your time.\p"
	.string "This is an important decision.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3:
# 73 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "It's Prof. Pine's other starter Pokémon.$"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0:
# 84 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Fire-type\n"
	.string "Litten, I see!\p"
	.string "Litten can be a challenge to raise!\p"
	.string "Bonding with your Litten would be\n"
	.string "your ultimate test as a Trainer! $"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1:
# 89 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Fire-type Litten as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0:
# 118 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Water-type\n"
	.string "Piplup, I see!\p"
	.string "Piplup is the most balanced of the\n"
	.string "three!\p"
	.string "You need to take care of this one,\n"
	.string "though! They are clumsy.$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1:
# 124 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Water-type Piplup as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0:
# 155 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0:
# 168 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "???: I'M HERE!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1:
# 176 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Sorry, I'm late, professor!\p"
	.string "I was buying some berries and may have\n"
	.string "forgotten about this!\p"
	.string "That was a lie!\n"
	.string "I would never forget something as\l"
	.string "important as this!\p"
	.string "I'm really sorry, Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2:
# 183 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: It's okay, Brian!\n"
	.string "We all get caught up in our hobbies.\p"
	.string "Now wouldn't you want to choose your\n"
	.string "partner Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3:
# 188 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: YES!\p"
	.string "I choose you {STR_VAR_1}!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4:
# 193 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Uhh, sorry to be the\n"
	.string "bearer of bad news, but {PLAYER}\l"
	.string "has already chosen {STR_VAR_1}…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5:
# 197 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: …\n"
	.string "…\l"
	.string "Well, the Early Bird gets the Wurmple…\p"
	.string "Then in that case…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6:
# 204 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Litten!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7:
# 214 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Piplup!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8:
# 223 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Chikorita!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9:
# 230 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Okay, {PLAYER}!\n"
	.string "Now that we have our own Pokémon,\l"
	.string "let's battle em!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10:
# 237 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Ow man!\pYou got lucky!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11:
# 246 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: That was fun!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12:
# 248 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Thank you, Prof. Pine for my new\n"
	.string "best friend!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13:
# 252 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Hehe! I'm only joking,\n"
	.string "{PLAYER}!\p"
	.string "Anyway, I'm off to 'next town'!\n"
	.string "I wanna catch the ferry to the mainland\l"
	.string "and challenge 'gym 1 leader'!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14:
# 262 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Oh! Brian!$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0:
# 340 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Wait! Don't leave just yet!\p"
	.string "You have not chosen your partner\n"
	.string "Pokémon, yet!$"

CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0:
# 382 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I help out Prof Pine in his research.\n"
	.string "He is a very passionate man!\p"
	.string "You'll learn a lot under him!\n"
	.string "I can guarentee that.$"
