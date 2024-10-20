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
# 46 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 47 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Fisherman_Text_3, MSGBOX_AUTOCLOSE
# 48 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 49 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_7
SolaCity_PokemonCenter_EventScript_Fisherman_6:
# 53 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	applymove 3, FishermanLeaveSolaPokeCenter_2
SolaCity_PokemonCenter_EventScript_Fisherman_4:
# 55 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	playse SE_SLIDING_DOOR
# 56 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	removeobject 3
# 57 "data/maps/SolaCity_PokemonCenter/scripts.pory"
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
	playfanfare MUS_DP_OBTAIN_ITEM
# 26 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	message SolaCity_PokemonCenter_EventScript_Fisherman_Text_2
# 27 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	waitfanfare
# 28 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	closemessage
# 29 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_10
# 37 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 38 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_15
# 42 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto SolaCity_PokemonCenter_EventScript_Fisherman_1

SolaCity_PokemonCenter_EventScript_Fisherman_5:
# 50 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	applymove 3, FishermanLeaveSolaPokeCenter_1
	goto SolaCity_PokemonCenter_EventScript_Fisherman_4

SolaCity_PokemonCenter_EventScript_Fisherman_7:
# 49 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_5
	goto SolaCity_PokemonCenter_EventScript_Fisherman_6

SolaCity_PokemonCenter_EventScript_Fisherman_10:
# 30 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 31 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SolaCity_PokemonCenter_EventScript_Fisherman_13
	goto SolaCity_PokemonCenter_EventScript_Fisherman_1

SolaCity_PokemonCenter_EventScript_Fisherman_13:
# 32 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 33 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SolaCity_PokemonCenter_EventScript_Fisherman_1

SolaCity_PokemonCenter_EventScript_Fisherman_15:
# 39 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto SolaCity_PokemonCenter_EventScript_Fisherman_1


# 61 "data/maps/SolaCity_PokemonCenter/scripts.pory"
FishermanLeaveSolaPokeCenter_1:
# 62 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 62 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 63 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 63 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 63 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 63 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 64 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/SolaCity_PokemonCenter/scripts.pory"
FishermanLeaveSolaPokeCenter_2:
# 68 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 68 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 68 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 68 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_right
# 69 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 69 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 69 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 69 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 69 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 69 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
# 69 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	walk_down
	step_end

SolaCity_PokemonCenter_EventScript_Woman1::
# 73 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Woman1_Text_0, MSGBOX_NPC
	return


SolaCity_PokemonCenter_EventScript_Woman2::
# 83 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	msgbox SolaCity_PokemonCenter_EventScript_Woman2_Text_0, MSGBOX_NPC
	return


SolaCity_PokemonCenter_EventScript_Hiker::
# 90 "data/maps/SolaCity_PokemonCenter/scripts.pory"
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
# 26 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "{PLAYER} received a Magikarp!$"

SolaCity_PokemonCenter_EventScript_Fisherman_Text_3:
# 47 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "Alright, I shall now leave.$"

SolaCity_PokemonCenter_EventScript_Woman1_Text_0:
# 73 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "Did you know?\p"
	.string "Up until a few years ago, the Pokémon\n"
	.string "Center and Pokémon Mart were owned by\l"
	.string "two different corparation.\p"
	.string "They were acquired by the Pokémon\n"
	.string "League, which then decided to merge\l"
	.string "both of them.$"

SolaCity_PokemonCenter_EventScript_Woman2_Text_0:
# 83 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "I used to be employed at the old\n"
	.string "Pokémon Mart.\p"
	.string "Yeah, now I am jobless.\n"
	.string "This economy is unbearable!$"

SolaCity_PokemonCenter_EventScript_Hiker_Text_0:
# 90 "data/maps/SolaCity_PokemonCenter/scripts.pory"
	.string "My wife used to work at the old\n"
	.string "Pokémon Mart.\p"
	.string "Our lives were great back then.\n"
	.string "We were both employed and happy.\p"
	.string "Now I need to earn for two!$"
