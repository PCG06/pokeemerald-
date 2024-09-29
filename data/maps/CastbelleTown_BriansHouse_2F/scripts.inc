CastbelleTown_BriansHouse_2F_MapScripts::
# 4 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CastbelleTown_BriansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CastbelleTown_BriansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	map_script_2 VAR_CASTBELLE_TOWN_STATE, 1, CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady
	.2byte 0


CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady::
# 10 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	lock
# 11 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	turnplayer DIR_EAST
# 12 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	delay 6
# 13 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymove 1, Common_Movement_FaceLeft
# 17 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 18 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	delay 6
# 19 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymove 1, MoveBrianToPlayer
# 20 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_1, MSGBOX_AUTOCLOSE
# 30 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 31 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_2, MSGBOX_AUTOCLOSE
# 35 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymovement 1, BrianWalkInPlaceLeft
# 36 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymoveplayer Common_Movement_StopInPlaceWalkLeft
# 37 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymove 1, BrianExit
# 38 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	delay 12
# 39 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	removeobject 1
# 40 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	playse SE_DOOR
# 41 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 2
# 42 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	release
	end


# 46 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
MoveBrianToPlayer:
# 47 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
	step_end

# 50 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
BrianWalkInPlaceLeft:
# 51 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 54 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
BrianExit:
# 55 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 56 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	face_up
	step_end

CastbelleTown_BriansHouse_2F_BriansPC::
# 60 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 61 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	releaseall
	end


CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_0:
# 13 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	.string "Brian: Aand, packed!\n"
	.string "I'm ready to get my starter Pokémon!\p"
	.string "Woody better keep the best one for me!$"

CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_1:
# 20 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	.string "Oh! Hi, {PLAYER}!\p"
	.string "Excited to get your first Pokémon, too?\p"
	.string "I'm nervous, I tell you that!\p"
	.string "I've been going over my type matchups\n"
	.string "like Prof. Wood told us to!\p"
	.string "You better be ready, when we get our\n"
	.string "Pokémon, we're battling!\p"
	.string "Phew!\n"
	.string "Now, let's go!\p"
	.string "I can't wait to pick my starter!$"

CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_2:
# 31 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	.string "I forgot,\n"
	.string "I gotta get some berries first!\p"
	.string "Looks like I won't the first one there,\n"
	.string "haha…$"
