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
	delay 12
# 12 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	turnplayer DIR_EAST
# 13 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymove 1, Common_Movement_FaceLeft
# 18 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 19 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	delay 6
# 20 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymove 1, MoveBrianToPlayer
# 21 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_1, MSGBOX_AUTOCLOSE
# 31 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 32 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_2, MSGBOX_AUTOCLOSE
# 36 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymovement 1, BrianWalkInPlaceLeft
# 37 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymoveplayer Common_Movement_StopInPlaceWalkLeft
# 38 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	applymove 1, BrianExit
# 39 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	delay 6
# 40 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	removeobject 1
# 41 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	setvar VAR_CASTBELLE_TOWN_STATE, 2
# 43 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	release
	end


# 47 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
MoveBrianToPlayer:
# 48 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 48 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 48 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 48 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 48 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 48 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
	step_end

# 51 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
BrianWalkInPlaceLeft:
# 52 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 55 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
BrianExit:
# 56 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	walk_left
# 57 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	face_up
	step_end

CastbelleTown_BriansHouse_2F_BriansPC::
# 61 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 62 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	releaseall
	end


CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_0:
# 13 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	.string "Brian: …Aaaand, packed!\n"
	.string "I'm ready to get my starter Pokémon!\p"
	.string "Woody better let me pick the best one\n"
	.string "first!$"

CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_1:
# 21 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	.string "Oh! Hi, {PLAYER}!\p"
	.string "Excited to get your first Pokémon?\p"
	.string "Honestly, I'm kind of nervous…\p"
	.string "I've been going over my type matchups,\n"
	.string "like Prof. Pine told us to.\p"
	.string "You'd better be ready to battle when\n"
	.string "we get our Pokemon!\p"
	.string "Phew!\n"
	.string "Now, let's go!\p"
	.string "I can't wait to pick my starter!$"

CastbelleTown_BriansHouse_2F_EventScript_BrianGettingReady_Text_2:
# 32 "data/maps/CastbelleTown_BriansHouse_2F/scripts.pory"
	.string "I forgot,\n"
	.string "I gotta buy some berries first!\p"
	.string "Looks like I won't be the first one\n"
	.string "there, haha…$"
