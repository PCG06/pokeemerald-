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
# 27 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_3, MSGBOX_NPC
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
# 33 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 34 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_WalkUp
# 35 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 24
# 36 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, Common_Movement_WalkDown
# 46 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setobjectxyperm 1, 6, 4
# 47 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_1, MSGBOX_AUTOCLOSE
# 52 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 3
# 53 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end


CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter::
# 58 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 59 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 2
	goto_if_le CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2
# 62 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3
# 87 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_4, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1:
# 89 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_2:
# 60 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_3:
# 63 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 64 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 65 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1, MSGBOX_AUTOCLOSE
# 69 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2, MSGBOX_YESNO
# 72 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7
# 81 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 82 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_7:
# 73 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 74 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 75 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 76 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_GRASS
# 77 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
# 78 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_FireStarter::
# 94 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 95 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 2
	goto_if_le CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2
# 98 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3
# 124 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_4, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1:
# 126 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_2:
# 96 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_3:
# 99 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 100 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 101 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0, MSGBOX_AUTOCLOSE
# 106 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1, MSGBOX_YESNO
# 109 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7
# 118 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 119 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_7:
# 110 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
# 111 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LITTEN
# 112 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY
# 113 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_FIRE
# 114 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LITTEN
# 115 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter::
# 131 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 132 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 2
	goto_if_le CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2
# 135 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_CASTBELLE_TOWN_STATE, 3
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3
# 162 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_4, MSGBOX_AUTOCLOSE
CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1:
# 164 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_2:
# 133 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_3:
# 136 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 137 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 138 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1, MSGBOX_YESNO
# 147 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7
# 156 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 157 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3, MSGBOX_AUTOCLOSE
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_7:
# 148 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
# 149 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIPLUP
# 150 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_ORAN_BERRY
# 151 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_STARTER_MON, STARTER_WATER
# 152 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PIPLUP
# 153 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_1


CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon::
# 169 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	hidemonpic
# 170 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_NORMAL
# 171 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 172 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 173 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 174 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 175 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	message CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0
# 177 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitfanfare
# 178 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 179 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	call Common_EventScript_ShowPokemonNature
# 180 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_1, MSGBOX_YESNO
# 182 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_2
CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_1:
# 186 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 187 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 188 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 4
# 189 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian
	return

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_2:
# 183 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 184 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_1


CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian::
# 193 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 194 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 195 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitse
# 196 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0, MSGBOX_AUTOCLOSE
# 197 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_HIDE_CASTBELLE_TOWN_BERRY_SHOP_BRIAN
# 198 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_QUESTION
# 199 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 200 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playbgm MUS_DP_RIVAL, TRUE
# 201 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceDown
# 202 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	addobject 6
# 203 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setobjectxy 6, 6, 11
# 204 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianRushToProf
# 205 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceLeft
# 206 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1, MSGBOX_AUTOCLOSE
# 213 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2, MSGBOX_AUTOCLOSE
# 217 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_WalkInPlaceFasterUp
# 218 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3, MSGBOX_AUTOCLOSE
# 220 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emotenowait 1, EMOTE_EXCLAIM
# 221 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 222 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4, MSGBOX_AUTOCLOSE
# 225 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 6, EMOTE_EXCLAIM
# 226 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5, MSGBOX_AUTOCLOSE
# 230 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_GRASS_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2
# 240 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto_if_set FLAG_HIDE_CASTBELLE_TOWN_PROF_PINES_LAB_FIRE_STARTER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3
# 251 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianWalkToGrassStarter
# 252 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8, MSGBOX_AUTOCLOSE
# 253 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 254 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 255 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 256 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 2
# 257 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceRight
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1:
# 259 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9, MSGBOX_DEFAULT
# 262 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_STARTER_MON
# 265 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9
# 268 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10
# 271 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case STARTER_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_9:
# 266 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_GRASS, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7:
# 274 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	special HealPlayerParty
# 275 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11, MSGBOX_AUTOCLOSE
# 276 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceUp
# 277 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12
# 279 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAIM
# 280 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FacePlayer
# 281 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13, MSGBOX_AUTOCLOSE
# 286 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianExitLab
# 287 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 6
# 288 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	emote 1, EMOTE_EXCLAIM
# 289 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14, MSGBOX_DEFAULT
# 290 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 6
# 291 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playse SE_EXIT
# 292 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 24
# 293 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_15, MSGBOX_AUTOCLOSE
# 295 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playbgm MUS_HG_ELM_LAB, TRUE
# 296 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 24
# 297 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex
	return

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_2:
# 231 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianWalkToFireStarter
# 232 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 233 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6, MSGBOX_AUTOCLOSE
# 234 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 235 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 236 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 237 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 3
# 238 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_3:
# 241 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, BrianWalkToWaterStarter
# 242 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer Common_Movement_FaceRight
# 243 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7, MSGBOX_AUTOCLOSE
# 244 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 245 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	delay 40
# 246 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitmoncry
# 247 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	removeobject 4
# 248 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 6, Common_Movement_FaceLeft
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_1

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_10:
# 269 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_FIRE, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_11:
# 272 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BRIAN_1_WATER, CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10
	goto CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_7


# 300 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianRushToProf:
# 301 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 301 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 301 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 301 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 301 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 301 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 304 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianExitLab:
# 305 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 305 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 305 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 305 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 305 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 305 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
	step_end

# 308 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianWalkToFireStarter:
# 309 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 310 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 310 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 311 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 314 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianWalkToWaterStarter:
# 315 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 316 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 316 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 316 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 317 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 320 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
BrianWalkToGrassStarter:
# 321 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 322 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	face_up
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex::
# 326 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 327 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_0x8000
# 328 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 7, CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_3
# 330 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 8, CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_4
# 332 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 9, CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_5
CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_1:
# 335 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	turnplayer DIR_WEST
# 336 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_0, MSGBOX_AUTOCLOSE
# 340 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 341 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	message CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_1
# 342 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	waitfanfare
# 343 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	closemessage
# 344 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 345 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 346 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_PROF_PINE
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_2, MSGBOX_AUTOCLOSE
# 363 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 364 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_3, MSGBOX_NPC
# 389 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	setvar VAR_MAIN_STORY, 4
# 390 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_3:
# 329 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_1
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_4:
# 331 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_5:
# 333 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymove 1, ProfPineWalkToPlayer_3
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_1


# 394 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_1:
# 395 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 396 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	face_right
	step_end

# 399 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_2:
# 400 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 401 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

# 404 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
ProfPineWalkToPlayer_3:
# 405 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_down
# 406 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 406 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger1::
# 410 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Left
# 411 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 414 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Left:
# 415 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 415 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger2::
# 419 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Left
# 420 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 423 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Left:
# 424 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger4::
# 428 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx1_Right
# 429 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 432 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx1_Right:
# 433 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger5::
# 437 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx2_Right
# 438 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 441 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx2_Right:
# 442 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 442 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Trigger6::
# 446 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerToCenterx3_Right
# 447 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon
	return


# 450 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerToCenterx3_Right:
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 451 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving::
# 455 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	lock
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0, MSGBOX_AUTOCLOSE
# 459 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 460 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	switch VAR_0x8000
# 461 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 5, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3
# 463 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 6, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4
# 465 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 7, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5
# 467 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	case 8, CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6
CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1:
# 470 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	turnplayer DIR_NORTH
# 471 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	release
	end

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_3:
# 462 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_1
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_4:
# 464 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_2
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_5:
# 466 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_3
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_6:
# 468 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	applymoveplayer PlayerBackToCenter_4
	goto CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_1


# 475 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_1:
# 476 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 477 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_right
# 478 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 478 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 478 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 478 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 478 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 481 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_2:
# 482 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 482 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 482 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 482 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 482 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 485 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_3:
# 486 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 487 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 487 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 487 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 487 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 487 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

# 490 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
PlayerBackToCenter_4:
# 491 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 492 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 492 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_left
# 493 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 493 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 493 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 493 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
# 493 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	walk_up
	step_end

CastbelleTown_ProfessorPinesLab_EventScript_Aide1::
# 497 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	msgbox CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0, MSGBOX_NPC
# 501 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
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
	.string "give him his Pokédex, {PLAYER}.\p"
	.string "He must be wandering around Castbelle\n"
	.string "Path!$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPine_Text_3:
# 27 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Hey, {PLAYER}!\p"
	.string "I hope your adventure goes smoothly!$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineGivesPokemon_Text_0:
# 36 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
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
# 47 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: In these three Poké Balls\n"
	.string "are three Pokémon I was gifted by an\l"
	.string "older student of mine.\p"
	.string "Prof. Pine: You can now go ahead and\n"
	.string "choose one, {PLAYER}!$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_0:
# 60 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "It's Prof. Pine's starter Pokémon!$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_1:
# 65 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Grass-type\n"
	.string "Chikorita, I see!\p"
	.string "Chikorita is quite easy to raise!\p"
	.string "It's the perfect Pokémon for beginners.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_2:
# 69 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Grass-type Chikorita as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_3:
# 82 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Okay, take your time.\p"
	.string "This is an important decision.$"

CastbelleTown_ProfessorPinesLab_EventScript_GrassStarter_Text_4:
# 87 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "It's Prof. Pine's other starter Pokémon.$"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_0:
# 101 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Fire-type\n"
	.string "Litten, I see!\p"
	.string "Litten can be a challenge to raise!\p"
	.string "Bonding with your Litten would be\n"
	.string "your ultimate test as a Trainer! $"

CastbelleTown_ProfessorPinesLab_EventScript_FireStarter_Text_1:
# 106 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Fire-type Litten as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_0:
# 138 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Ah, the Water-type\n"
	.string "Piplup, I see!\p"
	.string "Piplup is the most balanced of the\n"
	.string "three!\p"
	.string "You need to take care of this one,\n"
	.string "though! They are clumsy.$"

CastbelleTown_ProfessorPinesLab_EventScript_WaterStarter_Text_1:
# 144 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: So, do you choose the\n"
	.string "Water-type Piplup as your first\l"
	.string "Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_0:
# 175 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_ReceivedMon_Text_1:
# 180 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof Pine: Would you like to give a\n"
	.string "nickname to your {STR_VAR_1}?$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_0:
# 196 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "???: I'M HERE!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_1:
# 206 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Sorry, I'm late, professor!\p"
	.string "I was buying some berries and may have\n"
	.string "forgotten about this!\p"
	.string "That was a lie!\n"
	.string "I would never forget something as\l"
	.string "important as this!\p"
	.string "I'm really sorry, Prof. Pine!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_2:
# 213 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: It's okay, Brian!\n"
	.string "We all get caught up in our hobbies.\p"
	.string "Now wouldn't you want to choose your\n"
	.string "partner Pokémon?$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_3:
# 218 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: YES!\p"
	.string "I choose you, {STR_VAR_1}!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_4:
# 222 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Uhh, sorry to be the\n"
	.string "bearer of bad news, but {PLAYER}\l"
	.string "has already chosen {STR_VAR_1}…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_5:
# 226 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: …\n"
	.string "…\l"
	.string "Well, the Early Bird gets the Wurmple…\p"
	.string "Then in that case…$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_6:
# 233 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Litten!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_7:
# 243 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Piplup!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_8:
# 252 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I choose you, Chikorita!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_9:
# 259 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Okay, {PLAYER}!\n"
	.string "Now that we have our own Pokémon,\l"
	.string "let's battle em!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_10:
# 266 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Ow man!\pYou got lucky!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_11:
# 275 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: That was fun!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_12:
# 277 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Thank you, Prof. Pine for my new\n"
	.string "best friend!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_13:
# 281 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Brian: Hehe! I'm only joking,\n"
	.string "{PLAYER}!\p"
	.string "Anyway, I'm off to Sola City!\n"
	.string "I wanna catch the ferry to the\l"
	.string "mainland and challenge the Gym Leader!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_14:
# 289 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: Oh! Brian! Wait!$"

CastbelleTown_ProfessorPinesLab_EventScript_EnterBrian_Text_15:
# 293 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "sigh…\p"
	.string "Kids these days…$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_0:
# 336 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Prof. Pine: {PLAYER}!\n"
	.string "Now, for the main reason why I need\l"
	.string "your help!\p"
	.string "This is the Pokédex!$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_1:
# 341 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_2:
# 347 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
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

CastbelleTown_ProfessorPinesLab_EventScript_ProfPineGivesPokedex_Text_3:
# 364 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
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
	.string "Also, Brian was supposed to get his\n"
	.string "Pokédex right now, too.\p"
	.string "But, he ran off in a hurry.\n"
	.string "So, I need you to find him and give\l"
	.string "him his Pokédex.\p"
	.string "He must be wandering around Castbelle\n"
	.string "Path right now.\p"
	.string "Anyway, {PLAYER}!\p"
	.string "I wish you all the best in your Pokémon\n"
	.string "adventure!\p"
	.string "Safe travels, {PLAYER}.\n"
	.string "Don't forget to meet your mother\l"
	.string "before you leave.\p"
	.string "It's rude to leave without goodbyes.$"

CastbelleTown_ProfessorPinesLab_EventScript_ProfessorPineTakePokemonBeforeLeaving_Text_0:
# 456 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "Wait! Don't leave just yet!\p"
	.string "You have not chosen your partner\n"
	.string "Pokémon, yet!$"

CastbelleTown_ProfessorPinesLab_EventScript_Aide1_Text_0:
# 497 "data/maps/CastbelleTown_ProfessorPinesLab/scripts.pory"
	.string "I help out Prof. Pine in his research.\n"
	.string "He is a very passionate man!\p"
	.string "You'll learn a lot under him.\n"
	.string "I can guarentee that!$"
