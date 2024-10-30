// ADD NEW TUTOR MOVES HERE!!!

const struct TutorMoves gTutorMoves[MOVES_COUNT] =
{
    [MOVE_BIDE] =
    {
        .move = MOVE_BIDE,
        .flag = FLAG_SYS_RECEIVED_TUTOR_MOVES,
        .price = 500,
    },
    [MOVE_NATURAL_GIFT] =
    {
        .move = MOVE_NATURAL_GIFT,
        .flag = FLAG_SYS_RECEIVED_TUTOR_MOVES,
        .price = 500,
    },
    [MOVE_RAGE] =
    {
        .move = MOVE_RAGE,
        .flag = FLAG_SYS_RECEIVED_TUTOR_MOVES,
        .price = 500,
    },
    [MOVE_BODY_SLAM] =
    {
        .move = MOVE_BODY_SLAM,
        .flag = FLAG_MOVE_TUTOR_BODY_SLAM,
        .price = 1000,
    },
    [MOVE_COUNTER] =
    {
        .move = MOVE_COUNTER,
        .flag = FLAG_MOVE_TUTOR_COUNTER,
        .price = 1000,
    },
    [MOVE_DEFENSE_CURL] =
    {
        .move = MOVE_DEFENSE_CURL,
        .flag = FLAG_MOVE_TUTOR_DEFENSE_CURL,
        .price = 1000,
    },
    [MOVE_DOUBLE_EDGE] =
    {
        .move = MOVE_DOUBLE_EDGE,
        .flag = FLAG_MOVE_TUTOR_DOUBLE_EDGE,
        .price = 1000,
    },
    [MOVE_DREAM_EATER] =
    {
        .move = MOVE_DREAM_EATER,
        .flag = FLAG_MOVE_TUTOR_DREAM_EATER,
        .price = 1000,
    },
    [MOVE_DYNAMIC_PUNCH] =
    {
        .move = MOVE_DYNAMIC_PUNCH,
        .flag = FLAG_MOVE_TUTOR_DYNAMIC_PUNCH,
        .price = 1000,
    },
    [MOVE_ENDURE] =
    {
        .move = MOVE_ENDURE,
        .flag = FLAG_MOVE_TUTOR_ENDURE,
        .price = 1000,
    },
    [MOVE_EXPLOSION] =
    {
        .move = MOVE_EXPLOSION,
        .flag = FLAG_MOVE_TUTOR_EXPLOSION,
        .price = 1000,
    },
    [MOVE_FIRE_PUNCH] =
    {
        .move = MOVE_FIRE_PUNCH,
        .flag = FLAG_MOVE_TUTOR_FIRE_PUNCH,
        .price = 1000,
    },
    [MOVE_FURY_CUTTER] =
    {
        .move = MOVE_FURY_CUTTER,
        .flag = FLAG_MOVE_TUTOR_FURY_CUTTER,
        .price = 1000,
    },
    [MOVE_ICE_PUNCH] =
    {
        .move = MOVE_ICE_PUNCH,
        .flag = FLAG_MOVE_TUTOR_ICE_PUNCH,
        .price = 1000,
    },
    [MOVE_ICY_WIND] =
    {
        .move = MOVE_ICY_WIND,
        .flag = FLAG_MOVE_TUTOR_ICY_WIND,
        .price = 1000,
    },
    [MOVE_MEGA_KICK] =
    {
        .move = MOVE_MEGA_KICK,
        .flag = FLAG_MOVE_TUTOR_MEGA_KICK,
        .price = 1000,
    },
    [MOVE_MEGA_PUNCH] =
    {
        .move = MOVE_MEGA_PUNCH,
        .flag = FLAG_MOVE_TUTOR_MEGA_PUNCH,
        .price = 1000,
    },
    [MOVE_METRONOME] =
    {
        .move = MOVE_METRONOME,
        .flag = FLAG_MOVE_TUTOR_METRONOME,
        .price = 1000,
    },
    [MOVE_MIMIC] =
    {
        .move = MOVE_MIMIC,
        .flag = FLAG_MOVE_TUTOR_MIMIC,
        .price = 1000,
    },
    [MOVE_MUD_SLAP] =
    {
        .move = MOVE_MUD_SLAP,
        .flag = FLAG_MOVE_TUTOR_MUD_SLAP,
        .price = 1000,
    },
    [MOVE_PSYCH_UP] =
    {
        .move = MOVE_PSYCH_UP,
        .flag = FLAG_MOVE_TUTOR_PSYCH_UP,
        .price = 1000,
    },
    [MOVE_ROCK_SLIDE] =
    {
        .move = MOVE_ROCK_SLIDE,
        .flag = FLAG_MOVE_TUTOR_ROCK_SLIDE,
        .price = 1000,
    },
    [MOVE_ROLLOUT] =
    {
        .move = MOVE_ROLLOUT,
        .flag = FLAG_MOVE_TUTOR_ROLLOUT,
        .price = 1000,
    },
    [MOVE_SEISMIC_TOSS] =
    {
        .move = MOVE_SEISMIC_TOSS,
        .flag = FLAG_MOVE_TUTOR_SEISMIC_TOSS,
        .price = 1000,
    },
    [MOVE_SLEEP_TALK] =
    {
        .move = MOVE_SLEEP_TALK,
        .flag = FLAG_MOVE_TUTOR_SLEEP_TALK,
        .price = 1000,
    },
    [MOVE_SNORE] =
    {
        .move = MOVE_SNORE,
        .flag = FLAG_MOVE_TUTOR_SNORE,
        .price = 1000,
    },
    [MOVE_SOFT_BOILED] =
    {
        .move = MOVE_SOFT_BOILED,
        .flag = FLAG_MOVE_TUTOR_SOFT_BOILED,
        .price = 1000,
    },
    [MOVE_SUBSTITUTE] =
    {
        .move = MOVE_SUBSTITUTE,
        .flag = FLAG_MOVE_TUTOR_SUBSTITUTE,
        .price = 1000,
    },
    [MOVE_SWAGGER] =
    {
        .move = MOVE_SWAGGER,
        .flag = FLAG_MOVE_TUTOR_SWAGGER,
        .price = 1000,
    },
    [MOVE_SWIFT] =
    {
        .move = MOVE_SWIFT,
        .flag = FLAG_MOVE_TUTOR_SWIFT,
        .price = 1000,
    },
    [MOVE_SWORDS_DANCE] =
    {
        .move = MOVE_SWORDS_DANCE,
        .flag = FLAG_MOVE_TUTOR_SWORDS_DANCE,
        .price = 1000,
    },
    [MOVE_THUNDER_PUNCH] =
    {
        .move = MOVE_THUNDER_PUNCH,
        .flag = FLAG_MOVE_TUTOR_THUNDER_PUNCH,
        .price = 1000,
    },
    [MOVE_THUNDER_WAVE] =
    {
        .move = MOVE_THUNDER_WAVE,
        .flag = FLAG_MOVE_TUTOR_THUNDER_WAVE,
        .price = 1000,
    },
    [MOVE_TERA_BLAST] =
    {
        .move = MOVE_TERA_BLAST,
        .flag = FLAG_MOVE_TUTOR_TERA_BLAST,
        .price = 20000,
    }
};
