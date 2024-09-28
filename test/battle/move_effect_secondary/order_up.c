#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Order Up increases a stat based on Tatsugiri's form")
{
    u32 species = 0;
    PARAMETRIZE { species = SPECIES_TATSUGIRI_CURLY; }
    PARAMETRIZE { species = SPECIES_TATSUGIRI_DROOPY; }
    PARAMETRIZE { species = SPECIES_TATSUGIRI_STRETCHY; }

    GIVEN {
        PLAYER(species) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); };
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_HAZE); MOVE(playerRight, MOVE_ORDER_UP, target: opponentLeft); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HAZE, opponentRight); // Remove previous stat boosts
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ORDER_UP, playerRight);
        switch (species)
        {
        case SPECIES_TATSUGIRI_CURLY:
            MESSAGE("Dondozo's Attack rose!");
            break;
        case SPECIES_TATSUGIRI_DROOPY:
            MESSAGE("Dondozo's Defense rose!");
            break;
        case SPECIES_TATSUGIRI_STRETCHY:
            MESSAGE("Dondozo's Speed rose!");
            break;
        }
    } THEN {
        switch (species)
        {
        case SPECIES_TATSUGIRI_CURLY:
            EXPECT_EQ(playerRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
            break;
        case SPECIES_TATSUGIRI_DROOPY:
            EXPECT_EQ(playerRight->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
            break;
        case SPECIES_TATSUGIRI_STRETCHY:
            EXPECT_EQ(playerRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
            break;
        }
    }
}

DOUBLE_BATTLE_TEST("Order Up increases a stat based on Tatsugiri's form even if Tatsugiri fainted inside Dondozo")
{
    u32 species = 0;
    PARAMETRIZE { species = SPECIES_TATSUGIRI_CURLY; }
    PARAMETRIZE { species = SPECIES_TATSUGIRI_DROOPY; }
    PARAMETRIZE { species = SPECIES_TATSUGIRI_STRETCHY; }

    GIVEN {
        PLAYER(species) { HP(1); Status1(STATUS1_POISON); Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); };
    } WHEN {
        TURN { }
        TURN { MOVE(opponentRight, MOVE_HAZE); MOVE(playerRight, MOVE_ORDER_UP, target: opponentLeft); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Tatsugiri is hurt by poison!");
        MESSAGE("Tatsugiri fainted!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HAZE, opponentRight); // Remove previous stat boosts
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ORDER_UP, playerRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        switch (species)
        {
        case SPECIES_TATSUGIRI_CURLY:
            MESSAGE("Dondozo's Attack rose!");
            break;
        case SPECIES_TATSUGIRI_DROOPY:
            MESSAGE("Dondozo's Defense rose!");
            break;
        case SPECIES_TATSUGIRI_STRETCHY:
            MESSAGE("Dondozo's Speed rose!");
            break;
        }
    } THEN {
        switch (species)
        {
        case SPECIES_TATSUGIRI_CURLY:
            EXPECT_EQ(playerRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
            break;
        case SPECIES_TATSUGIRI_DROOPY:
            EXPECT_EQ(playerRight->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
            break;
        case SPECIES_TATSUGIRI_STRETCHY:
            EXPECT_EQ(playerRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
            break;
        }
    }
}

DOUBLE_BATTLE_TEST("Order up does not boosts any stats if Dondozo is not affected by Commander")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_ORDER_UP, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
   }
}
