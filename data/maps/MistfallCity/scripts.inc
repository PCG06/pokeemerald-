MistfallCity_MapScripts::
# 2 "data/maps/MistfallCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MistfallCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MistfallCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MistfallCity/scripts.pory"
	setflag FLAG_VISITED_MISTFALL_CITY
	return

