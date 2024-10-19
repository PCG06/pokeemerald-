SolaCity_MapScripts::
# 5 "data/maps/SolaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SolaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SolaCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/SolaCity/scripts.pory"
	setflag FLAG_VISITED_SOLA_CITY
	return


SolaCity_EventScript_SolaCitySign::
# 11 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_SolaCitySign_Text_0, MSGBOX_SIGN
	return


SolaCity_EventScript_SeaMensHubSign::
# 16 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_SeaMensHubSign_Text_0, MSGBOX_SIGN
	return


SolaCity_EventScript_HarborSign::
# 21 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_HarborSign_Text_0, MSGBOX_SIGN
	return


SolaCity_EventScript_InnsSign::
# 26 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_InnsSign_Text_0, MSGBOX_SIGN
	return


SolaCity_EventScript_MarketSign::
# 31 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_MarketSign_Text_0, MSGBOX_SIGN
	return


SolaCity_EventScript_Sailor1::
# 36 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor1_Text_0, MSGBOX_NPC
	return


SolaCity_EventScript_Sailor2::
# 42 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor2_Text_0, MSGBOX_NPC
	return


SolaCity_EventScript_Sailor3::
# 48 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor3_Text_0, MSGBOX_NPC
	return


SolaCity_EventScript_Sailor4::
# 56 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor4_Text_0, MSGBOX_NPC
	return


SolaCity_EventScript_Sailor5::
# 64 "data/maps/SolaCity/scripts.pory"
	lock
# 65 "data/maps/SolaCity/scripts.pory"
	faceplayer
# 66 "data/maps/SolaCity/scripts.pory"
	goto_if_quest_complete QUEST_2_BEAT_THE_SEA_MEN, SolaCity_EventScript_Sailor5_QuestComplete
# 67 "data/maps/SolaCity/scripts.pory"
	goto_if_quest_reward QUEST_2_BEAT_THE_SEA_MEN, SolaCity_EventScript_Sailor5_QuestReward
# 68 "data/maps/SolaCity/scripts.pory"
	goto_if_quest_active QUEST_2_BEAT_THE_SEA_MEN, SolaCity_EventScript_Sailor5_QuestCheck
# 69 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor5_Text_0, MSGBOX_YESNO
# 79 "data/maps/SolaCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SolaCity_EventScript_Sailor5_2
# 87 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor5_Text_2, MSGBOX_NPC
SolaCity_EventScript_Sailor5_1:
# 91 "data/maps/SolaCity/scripts.pory"
	release
	end

SolaCity_EventScript_Sailor5_2:
# 80 "data/maps/SolaCity/scripts.pory"
	emote 5, EMOTE_EXCLAIM
# 81 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor5_Text_1
# 84 "data/maps/SolaCity/scripts.pory"
	startquest QUEST_2_BEAT_THE_SEA_MEN
	goto SolaCity_EventScript_Sailor5_1


SolaCity_EventScript_Sailor5_QuestCheck::
# 96 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor5_QuestCheck_Text_0, MSGBOX_NPC
	return


SolaCity_EventScript_Sailor5_QuestReward::
# 100 "data/maps/SolaCity/scripts.pory"
	emote 5, EMOTE_EXCLAIM
# 101 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor5_QuestReward_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/SolaCity/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 105 "data/maps/SolaCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 106 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor5_QuestReward_Text_1, MSGBOX_AUTOCLOSE
# 110 "data/maps/SolaCity/scripts.pory"
	completequest QUEST_2_BEAT_THE_SEA_MEN
# 111 "data/maps/SolaCity/scripts.pory"
	release
	end


SolaCity_EventScript_Sailor5_QuestComplete::
# 116 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Sailor5_QuestReward_Text_1, MSGBOX_NPC
	return


SolaCity_EventScript_LittleBoy::
# 123 "data/maps/SolaCity/scripts.pory"
	lock
# 124 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_LittleBoy_Text_0, MSGBOX_AUTOCLOSE
# 125 "data/maps/SolaCity/scripts.pory"
	release
	end


SolaCity_EventScript_LittleGirl::
# 130 "data/maps/SolaCity/scripts.pory"
	lock
# 131 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_LittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 132 "data/maps/SolaCity/scripts.pory"
	release
	end


SolaCity_EventScript_Woman::
# 137 "data/maps/SolaCity/scripts.pory"
	msgbox SolaCity_EventScript_Woman_Text_0, MSGBOX_NPC
	end


SolaCity_EventScript_Spheal::
# 143 "data/maps/SolaCity/scripts.pory"
	emote 11, EMOTE_QUESTION
# 144 "data/maps/SolaCity/scripts.pory"
	moncryscript SPECIES_SPHEAL, SolaCity_EventScript_Spheal_Text_0, CRY_MODE_FAINT
# 145 "data/maps/SolaCity/scripts.pory"
	faceoriginaldir
# 146 "data/maps/SolaCity/scripts.pory"
	release
	return


SolaCity_EventScript_TMsSeller::
# 150 "data/maps/SolaCity/scripts.pory"
	lock
# 151 "data/maps/SolaCity/scripts.pory"
	faceplayer
# 152 "data/maps/SolaCity/scripts.pory"
	message gText_HowMayIServeYou
# 153 "data/maps/SolaCity/scripts.pory"
	waitmessage
# 154 "data/maps/SolaCity/scripts.pory"
	pokemart TMsSeller_Items
# 155 "data/maps/SolaCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 156 "data/maps/SolaCity/scripts.pory"
	release
	end


	.align 2
# 160 "data/maps/SolaCity/scripts.pory"
TMsSeller_Items:
# 161 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 162 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 163 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_NONE

SolaCity_EventScript_BerrySeller1::
# 167 "data/maps/SolaCity/scripts.pory"
	lock
# 168 "data/maps/SolaCity/scripts.pory"
	faceplayer
# 169 "data/maps/SolaCity/scripts.pory"
	message gText_HowMayIServeYouBerryShop
# 170 "data/maps/SolaCity/scripts.pory"
	waitmessage
# 171 "data/maps/SolaCity/scripts.pory"
	pokemart BerrySeller1
# 172 "data/maps/SolaCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 173 "data/maps/SolaCity/scripts.pory"
	release
	end


	.align 2
# 177 "data/maps/SolaCity/scripts.pory"
BerrySeller1:
# 178 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 179 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 180 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 181 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 182 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 183 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 184 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 185 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 186 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
	.2byte ITEM_NONE

SolaCity_EventScript_BerrySeller2::
# 190 "data/maps/SolaCity/scripts.pory"
	lock
# 191 "data/maps/SolaCity/scripts.pory"
	faceplayer
# 192 "data/maps/SolaCity/scripts.pory"
	message gText_HowMayIServeYouBerryShop
# 193 "data/maps/SolaCity/scripts.pory"
	waitmessage
# 194 "data/maps/SolaCity/scripts.pory"
	pokemart BerrySeller2
# 195 "data/maps/SolaCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 196 "data/maps/SolaCity/scripts.pory"
	release
	end


	.align 2
# 200 "data/maps/SolaCity/scripts.pory"
BerrySeller2:
# 201 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 202 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 203 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 204 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 205 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 206 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 207 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 208 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 209 "data/maps/SolaCity/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE

SolaCity_EventScript_SolaCitySign_Text_0:
# 11 "data/maps/SolaCity/scripts.pory"
	.string "Sola City\n"
	.string "“City of the blue sailors!”$"

SolaCity_EventScript_SeaMensHubSign_Text_0:
# 16 "data/maps/SolaCity/scripts.pory"
	.string "Sea Men's Hub\n"
	.string "“Welcome the the sea!”$"

SolaCity_EventScript_HarborSign_Text_0:
# 21 "data/maps/SolaCity/scripts.pory"
	.string "Sola Harbor\n"
	.string "“Cruising to the mainland!”$"

SolaCity_EventScript_InnsSign_Text_0:
# 26 "data/maps/SolaCity/scripts.pory"
	.string "Sola Inns\n"
	.string "“Take a rest, forget the rest!”$"

SolaCity_EventScript_MarketSign_Text_0:
# 31 "data/maps/SolaCity/scripts.pory"
	.string "Sola Market\n"
	.string "“Mainland goods for half the price!”$"

SolaCity_EventScript_Sailor1_Text_0:
# 36 "data/maps/SolaCity/scripts.pory"
	.string "Ahoy, matey!\n"
	.string "Welcome to Sola City!\p"
	.string "Enjoy the Sailors' City!$"

SolaCity_EventScript_Sailor2_Text_0:
# 42 "data/maps/SolaCity/scripts.pory"
	.string "I need to get to work now.\n"
	.string "This places makes me forget how\l"
	.string "unforgiving the sea is!$"

SolaCity_EventScript_Sailor3_Text_0:
# 48 "data/maps/SolaCity/scripts.pory"
	.string "Did you know?\p"
	.string "These safehouses are free of cost for\n"
	.string "everyone!\p"
	.string "Not just sailors, or sea men, but any\n"
	.string "traveller who wishes to take a rest.$"

SolaCity_EventScript_Sailor4_Text_0:
# 56 "data/maps/SolaCity/scripts.pory"
	.string "I'm thinking of settling here.\n"
	.string "My family could move here, and I'd be\l"
	.string "able to see them everyday.\p"
	.string "Yeah!\n"
	.string "That's the dream!$"

SolaCity_EventScript_Sailor5_Text_0:
# 69 "data/maps/SolaCity/scripts.pory"
	.string "This building right here is called\n"
	.string "the Sea Men's Hub.\p"
	.string "Yes, you'll see a lot of sailors in\n"
	.string "there!\p"
	.string "You could also challenge them a battle.\n"
	.string "Those guys have caught a lot of\l"
	.string "Pokémon they caught during their time\l"
	.string "by the sea.\p"
	.string "A Trainer such as yourself would surely\n"
	.string "not miss such an opportunity, eh?$"

SolaCity_EventScript_Sailor5_Text_1:
# 81 "data/maps/SolaCity/scripts.pory"
	.string "Ah ha!\p"
	.string "Beat them up, and I'll reward you\n"
	.string "handsomely!$"

SolaCity_EventScript_Sailor5_Text_2:
# 87 "data/maps/SolaCity/scripts.pory"
	.string "Ah, darn!\p"
	.string "In case you change your mind,\n"
	.string "you know where to find me.$"

SolaCity_EventScript_Sailor5_QuestCheck_Text_0:
# 96 "data/maps/SolaCity/scripts.pory"
	.string "Did you beat those sailors yet?$"

SolaCity_EventScript_Sailor5_QuestReward_Text_0:
# 101 "data/maps/SolaCity/scripts.pory"
	.string "What?! You beat them?\p"
	.string "Ahoy! You are good at this!\n"
	.string "Now for your reward.$"

SolaCity_EventScript_Sailor5_QuestReward_Text_1:
# 106 "data/maps/SolaCity/scripts.pory"
	.string "You got skills, kid!\p"
	.string "Keep training like this and no doubt\n"
	.string "one day you might just become the very\l"
	.string "best!$"

SolaCity_EventScript_LittleBoy_Text_0:
# 124 "data/maps/SolaCity/scripts.pory"
	.string "Here, Spheal! Look at me!$"

SolaCity_EventScript_LittleGirl_Text_0:
# 131 "data/maps/SolaCity/scripts.pory"
	.string "No! Spheal, look at me!$"

SolaCity_EventScript_Woman_Text_0:
# 137 "data/maps/SolaCity/scripts.pory"
	.string "I'm here to buy some berries and TM for\n"
	.string "my daughter.$"

SolaCity_EventScript_Spheal_Text_0:
# 144 "data/maps/SolaCity/scripts.pory"
	.string "Sphea?$"
