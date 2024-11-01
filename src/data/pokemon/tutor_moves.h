#include "constants/flags.h"
#include "constants/moves.h"

// ADD NEW TUTOR MOVES HERE!!!

const struct TutorMoves gTutorMoves[MOVES_COUNT] =
{
    [MOVE_BIDE] =
    {
        .move = MOVE_BIDE,
        .flag = FLAG_SYS_RECEIVED_TUTOR_MOVES,
    },
    [MOVE_NATURAL_GIFT] =
    {
        .move = MOVE_NATURAL_GIFT,
        .flag = FLAG_SYS_RECEIVED_TUTOR_MOVES,
    },
    [MOVE_RAGE] =
    {
        .move = MOVE_RAGE,
        .flag = FLAG_SYS_RECEIVED_TUTOR_MOVES,
    },
    [MOVE_BODY_SLAM] =
    {
        .move = MOVE_BODY_SLAM,
        .flag = FLAG_MOVE_TUTOR_BODY_SLAM,
    },
    [MOVE_COUNTER] =
    {
        .move = MOVE_COUNTER,
        .flag = FLAG_MOVE_TUTOR_COUNTER,
    },
    [MOVE_DEFENSE_CURL] =
    {
        .move = MOVE_DEFENSE_CURL,
        .flag = FLAG_MOVE_TUTOR_DEFENSE_CURL,
    },
    [MOVE_DOUBLE_EDGE] =
    {
        .move = MOVE_DOUBLE_EDGE,
        .flag = FLAG_MOVE_TUTOR_DOUBLE_EDGE,
    },
    [MOVE_DREAM_EATER] =
    {
        .move = MOVE_DREAM_EATER,
        .flag = FLAG_MOVE_TUTOR_DREAM_EATER,
    },
    [MOVE_DYNAMIC_PUNCH] =
    {
        .move = MOVE_DYNAMIC_PUNCH,
        .flag = FLAG_MOVE_TUTOR_DYNAMIC_PUNCH,
    },
    [MOVE_ENDURE] =
    {
        .move = MOVE_ENDURE,
        .flag = FLAG_MOVE_TUTOR_ENDURE,
    },
    [MOVE_EXPLOSION] =
    {
        .move = MOVE_EXPLOSION,
        .flag = FLAG_MOVE_TUTOR_EXPLOSION,
    },
    [MOVE_FIRE_PUNCH] =
    {
        .move = MOVE_FIRE_PUNCH,
        .flag = FLAG_MOVE_TUTOR_FIRE_PUNCH,
    },
    [MOVE_FURY_CUTTER] =
    {
        .move = MOVE_FURY_CUTTER,
        .flag = FLAG_MOVE_TUTOR_FURY_CUTTER,
    },
    [MOVE_ICE_PUNCH] =
    {
        .move = MOVE_ICE_PUNCH,
        .flag = FLAG_MOVE_TUTOR_ICE_PUNCH,
    },
    [MOVE_ICY_WIND] =
    {
        .move = MOVE_ICY_WIND,
        .flag = FLAG_MOVE_TUTOR_ICY_WIND,
    },
    [MOVE_MEGA_KICK] =
    {
        .move = MOVE_MEGA_KICK,
        .flag = FLAG_MOVE_TUTOR_MEGA_KICK,
    },
    [MOVE_MEGA_PUNCH] =
    {
        .move = MOVE_MEGA_PUNCH,
        .flag = FLAG_MOVE_TUTOR_MEGA_PUNCH,
    },
    [MOVE_METRONOME] =
    {
        .move = MOVE_METRONOME,
        .flag = FLAG_MOVE_TUTOR_METRONOME,
    },
    [MOVE_MIMIC] =
    {
        .move = MOVE_MIMIC,
        .flag = FLAG_MOVE_TUTOR_MIMIC,
    },
    [MOVE_MUD_SLAP] =
    {
        .move = MOVE_MUD_SLAP,
        .flag = FLAG_MOVE_TUTOR_MUD_SLAP,
    },
    [MOVE_PSYCH_UP] =
    {
        .move = MOVE_PSYCH_UP,
        .flag = FLAG_MOVE_TUTOR_PSYCH_UP,
    },
    [MOVE_ROCK_SLIDE] =
    {
        .move = MOVE_ROCK_SLIDE,
        .flag = FLAG_MOVE_TUTOR_ROCK_SLIDE,
    },
    [MOVE_ROLLOUT] =
    {
        .move = MOVE_ROLLOUT,
        .flag = FLAG_MOVE_TUTOR_ROLLOUT,
    },
    [MOVE_SEISMIC_TOSS] =
    {
        .move = MOVE_SEISMIC_TOSS,
        .flag = FLAG_MOVE_TUTOR_SEISMIC_TOSS,
    },
    [MOVE_SLEEP_TALK] =
    {
        .move = MOVE_SLEEP_TALK,
        .flag = FLAG_MOVE_TUTOR_SLEEP_TALK,
    },
    [MOVE_SNORE] =
    {
        .move = MOVE_SNORE,
        .flag = FLAG_MOVE_TUTOR_SNORE,
    },
    [MOVE_SOFT_BOILED] =
    {
        .move = MOVE_SOFT_BOILED,
        .flag = FLAG_MOVE_TUTOR_SOFT_BOILED,
    },
    [MOVE_SUBSTITUTE] =
    {
        .move = MOVE_SUBSTITUTE,
        .flag = FLAG_MOVE_TUTOR_SUBSTITUTE,
    },
    [MOVE_SWAGGER] =
    {
        .move = MOVE_SWAGGER,
        .flag = FLAG_MOVE_TUTOR_SWAGGER,
    },
    [MOVE_SWIFT] =
    {
        .move = MOVE_SWIFT,
        .flag = FLAG_MOVE_TUTOR_SWIFT,
    },
    [MOVE_SWORDS_DANCE] =
    {
        .move = MOVE_SWORDS_DANCE,
        .flag = FLAG_MOVE_TUTOR_SWORDS_DANCE,
    },
    [MOVE_THUNDER_PUNCH] =
    {
        .move = MOVE_THUNDER_PUNCH,
        .flag = FLAG_MOVE_TUTOR_THUNDER_PUNCH,
    },
    [MOVE_THUNDER_WAVE] =
    {
        .move = MOVE_THUNDER_WAVE,
        .flag = FLAG_MOVE_TUTOR_THUNDER_WAVE,
    },
    [MOVE_TERA_BLAST] =
    {
        .move = MOVE_TERA_BLAST,
        .flag = FLAG_MOVE_TUTOR_TERA_BLAST,
    }
};
