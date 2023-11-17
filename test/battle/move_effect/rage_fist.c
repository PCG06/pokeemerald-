#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_RAGE_FIST].effect == EFFECT_RAGE_FIST);
    ASSUME(gBattleMoves[MOVE_RAGE_FIST].power == 50);
}

SINGLE_BATTLE_TEST("Rage Fist base power is increased by 50 if the user takes damage")
{
    u8 turns;
    s16 rageFistHits[2];

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_REGIROCK);
    } WHEN {
        for (turns = 0; turns < 2; turns++) {
            TURN { MOVE(player, MOVE_RAGE_FIST); MOVE(opponent, MOVE_TACKLE); }
        }
    } SCENE {
        for (turns = 0; turns < 2; turns++) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, player);
            HP_BAR(opponent, captureDamage: &rageFistHits[turns]);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            HP_BAR(player);
        }
    } THEN {
        EXPECT_MUL_EQ(rageFistHits[0], Q_4_12(2.0), rageFistHits[1]);
    }
}

SINGLE_BATTLE_TEST("Rage Fist base power is increased by 50 if user is hit by confusion")
{
    s16 rageFistHits[2];

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_REGIROCK);
    } WHEN {
        TURN { MOVE(player, MOVE_RAGE_FIST); MOVE(opponent, MOVE_CONFUSE_RAY); }
        TURN {}
        TURN { MOVE(player, MOVE_RAGE_FIST, WITH_RNG(RNG_CONFUSION, FALSE)); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, player);
        HP_BAR(opponent, captureDamage: &rageFistHits[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, player);
        MESSAGE("Wobbuffet became confused!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, player);
        MESSAGE("It hurt itself in its confusion!");
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, player);
        HP_BAR(opponent, captureDamage: &rageFistHits[1]);
    } THEN {
        EXPECT_MUL_EQ(rageFistHits[0], Q_4_12(2.0), rageFistHits[1]);
    }
}

DOUBLE_BATTLE_TEST("Rage Fist maximum base power is 350")
{
    u16 turns;
    s16 rageFistHits[2];

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_REGIROCK);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (turns = 1; turns <= 3; turns++) {
            TURN {
                if (turns == 1)
                    MOVE(playerLeft, MOVE_RAGE_FIST, target: opponentLeft);

                MOVE(playerRight, MOVE_TACKLE, target: playerLeft);
                MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft);
                MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
            }
        }
        TURN { MOVE(playerLeft, MOVE_RAGE_FIST, target: opponentLeft); }
    } SCENE {
        for (turns = 1; turns <= 3; turns++) {
            if (turns == 1) {
                ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, playerLeft);
                HP_BAR(opponentLeft, captureDamage: &rageFistHits[0]);
            }
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
            HP_BAR(playerLeft);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
            HP_BAR(playerLeft);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
            HP_BAR(playerLeft);
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &rageFistHits[1]);
    } THEN {
        EXPECT_MUL_EQ(rageFistHits[0], Q_4_12(7.0), rageFistHits[1]);
    }
}

SINGLE_BATTLE_TEST("Rage Fist base power is not increased if a substitute was hit")
{
    s16 rageFistHits[2];

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_REGIROCK);
    } WHEN {
        TURN { MOVE(player, MOVE_RAGE_FIST); }
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_CRUNCH); }
        TURN { MOVE(player, MOVE_RAGE_FIST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, player);
        HP_BAR(opponent, captureDamage: &rageFistHits[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CRUNCH, opponent);
        MESSAGE("The SUBSTITUTE took damage for Wobbuffet!");
        MESSAGE("Wobbuffet's SUBSTITUTE faded!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, player);
        HP_BAR(opponent, captureDamage: &rageFistHits[1]);
    } THEN {
        EXPECT_EQ(rageFistHits[0], rageFistHits[1]);
    }
}

SINGLE_BATTLE_TEST("Rage Fist base power is not lost if user switches out")
{
    s16 rageFistHits[2];

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_REGIROCK);
    } WHEN {
        TURN { MOVE(player, MOVE_RAGE_FIST); MOVE(opponent, MOVE_TACKLE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_TACKLE); }
        TURN { SWITCH(player, 0); }
        TURN { MOVE(player, MOVE_RAGE_FIST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, player);
        HP_BAR(opponent, captureDamage: &rageFistHits[0]);
        MESSAGE("Wobbuffet, that's enough! Come back!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("Wynaut, that's enough! Come back!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAGE_FIST, player);
        HP_BAR(opponent, captureDamage: &rageFistHits[1]);
    } THEN {
        EXPECT_MUL_EQ(rageFistHits[0], Q_4_12(2.0), rageFistHits[1]);
    }
}
