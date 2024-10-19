SolaCity_PokemonCenter_MapScripts::
# 4 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SolaCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SolaCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SOLA_CITY
	return


SolaCity_PokemonCenter_EventScript_Fisherman::
# 11 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	lock
# 12 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	faceplayer
# 13 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Fisherman_Text_0, MSGBOX_YESNO
# 20 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_2
SolaCity_PokemonCenter_EventScript_Fisherman_1:
# 27 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 28 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Fisherman_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 30 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_7
SolaCity_PokemonCenter_EventScript_Fisherman_6:
# 34 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	applymove 3, FishermanLeaveSolaPokeCenter_2
SolaCity_PokemonCenter_EventScript_Fisherman_4:
# 36 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	playse SE_SLIDING_DOOR
# 37 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	removeobject 3
# 38 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	release
	end

SolaCity_PokemonCenter_EventScript_Fisherman_2:
# 21 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Fisherman_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	givemon SPECIES_MAGIKARP, 5, ITEM_LEFTOVERS, ITEM_DIVE_BALL, NATURE_ADAMANT, 2, MON_MALE, 4, 144, 0, 32, 0, 0, 31, 31, 0, 31, 0, 31, MOVE_SPLASH, MOVE_TACKLE, MOVE_FLAIL, MOVE_NONE
# 23 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 24 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAGIKARP
# 25 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PlayerReceivedPokemon
	goto SolaCity_PokemonCenter_EventScript_Fisherman_1

SolaCity_PokemonCenter_EventScript_Fisherman_5:
# 31 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	applymove 3, FishermanLeaveSolaPokeCenter_1
	goto SolaCity_PokemonCenter_EventScript_Fisherman_4

SolaCity_PokemonCenter_EventScript_Fisherman_7:
# 30 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_5
	goto SolaCity_PokemonCenter_EventScript_Fisherman_6


# 42 "data/maps/SolaCity_PokemonCenter/scripts.pory"
FishermanLeaveSolaPokeCenter_1:
# 43 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 43 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 44 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 44 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 44 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 44 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 45 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 45 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 45 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 45 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 45 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 45 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 45 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 48 "data/maps/SolaCity_PokemonCenter/scripts.pory"
FishermanLeaveSolaPokeCenter_2:
# 49 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 49 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 49 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 49 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
	step_end

SolaCity_PokemonCenter_EventScript_Woman1::
# 54 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Woman1_Text_0, MSGBOX_NPC
	return


SolaCity_PokemonCenter_EventScript_Woman2::
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Woman2_Text_0, MSGBOX_NPC
	return


SolaCity_PokemonCenter_EventScript_Hiker::
# 71 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Hiker_Text_0, MSGBOX_NPC
	return


SolaCity_PokemonCenter_EventScript_Fisherman_Text_0:
# 13 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "What?\n"
	.string "Surprised to see a fisherman in the\l"
	.string "Sailor's City?\p"
	.string "I'm departing in a few minutes,\n"
	.string "nonetheless, do you want my most\l"
	.string "recent catch?\p"
	.string "Don't worry, I catch plenty of these.$"

SolaCity_PokemonCenter_EventScript_Fisherman_Text_1:
# 21 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "Okay, here's the fish!$"

SolaCity_PokemonCenter_EventScript_Fisherman_Text_2:
# 28 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "Alright, I shall now leave.$"

SolaCity_PokemonCenter_EventScript_Woman1_Text_0:
# 54 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "Did you know?\p"
	.string "Up until a few years ago, the Pokémon\n"
	.string "Center and Pokémon Mart were owned by\l"
	.string "two different corparation.\p"
	.string "They were acquired by the Pokémon\n"
	.string "League, which then decided to merge\l"
	.string "both of them.$"

SolaCity_PokemonCenter_EventScript_Woman2_Text_0:
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "I used to be employed at the old\n"
	.string "Pokémon Mart.\p"
	.string "Yeah, now I am jobless.\n"
	.string "This economy is unbearable!$"

SolaCity_PokemonCenter_EventScript_Hiker_Text_0:
# 71 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "My wife used to work at the old\n"
	.string "Pokémon Mart.\p"
	.string "Our lives were great back then.\n"
	.string "We were both employed and happy.\p"
	.string "Now I need to earn for two!$"
