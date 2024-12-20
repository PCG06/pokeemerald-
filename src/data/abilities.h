const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .descriptionTwoLines = COMPOUND_STRING(
            "This Pokemon has no special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Stench"),
        .description = COMPOUND_STRING("May cause a foe to flinch."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Releases a stench that may cause\n"
            "an attacked foe to flinch."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Drizzle"),
        .description = COMPOUND_STRING("Summons rain in battle."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon makes it rain\n"
            "when it enters a battle."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Speed Boost"),
        .description = COMPOUND_STRING("Gradually boosts Speed."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's Speed stat\n"
            "is boosted every turn."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Battle Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Hard armor protects the\n"
            "Pokémon from critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Sturdy"),
        .description = COMPOUND_STRING("Negates 1-hit KO attacks."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon can't be knocked out\n"
            "in one hit or by one-hit KO moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Damp"),
        .description = COMPOUND_STRING("Prevents self-destruction."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents self-destruction by\n"
            "dampening its surroundings."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Limber"),
        .description = COMPOUND_STRING("Prevents paralysis."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's limber body prevents\n"
            "it from being paralyzed."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sand Veil"),
        .description = COMPOUND_STRING("Ups evasion in a sandstorm."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's evasiveness\n"
            "in a sandstorm."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Static"),
        .description = COMPOUND_STRING("Paralyzes on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is statically-charged.\n"
            "Contact with it may cause paralysis."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Volt Absorb"),
        .description = COMPOUND_STRING("Turns electricity into HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Restores HP if hit by Electric-type\n"
            "moves instead of taking damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Water Absorb"),
        .description = COMPOUND_STRING("Changes water into HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Restores HP if hit by Water-type\n"
            "moves instead of taking damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Oblivious"),
        .description = COMPOUND_STRING("Prevents attraction."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Keeps the Pokémon from being\n"
            "infatuated, taunted, or intimidated."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Cloud Nine"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Eliminates the effects of weather."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Compound Eyes"),
    #else
        .name = _("CompoundEyes"),
    #endif
        .description = COMPOUND_STRING("Raises accuracy."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's compound eyes\n"
            "boost its accuracy."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's insomnia prevents it\n"
            "from falling asleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Color Change"),
        .description = COMPOUND_STRING("Changes type to foe's move."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's type becomes the\n"
            "type of the move used on it."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunity"),
        .description = COMPOUND_STRING("Prevents poisoning."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's immune system\n"
            "prevents it from being poisoned."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Flash Fire"),
        .description = COMPOUND_STRING("Powers up if hit by fire."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Absorbs Fire-type moves to power up\n"
            "the Pokémon's own Fire-type moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Shield Dust"),
        .description = COMPOUND_STRING("Prevents added effects."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Protective dust shields the Pokémon\n"
            "from additional move effects."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Own Tempo"),
        .description = COMPOUND_STRING("Prevents confusion."),
        .descriptionTwoLines = COMPOUND_STRING(
            "This Pokémon has its own tempo, and\n"
            "cannot be confused or intimidated."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Suction Cups"),
        .description = COMPOUND_STRING("Firmly anchors the body."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is firmly anchored.\n"
            "It cannot be forcibly switched out."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidate"),
        .description = COMPOUND_STRING("Lowers the foe's Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon lowers the foe's\n"
            "Attack stat upon entering battle."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Shadow Tag"),
        .description = COMPOUND_STRING("Prevents the foe's escape."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon steps on the foe's\n"
            "shadow to prevent it from escaping."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rough Skin"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's rough skin damages\n"
            "foes making direct contact with it."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wonder Guard"),
        .description = COMPOUND_STRING("“Supereffective” hits."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's mysterious power only\n"
            "lets supereffective moves hit it."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitate"),
        .description = COMPOUND_STRING("Not hit by Ground attacks."),
        .descriptionTwoLines = COMPOUND_STRING(
            "By floating in the air, the Pokémon\n"
            "is immune to all Ground-type moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Effect Spore"),
        .description = COMPOUND_STRING("Leaves spores on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Contact with the Pokémon may inflict\n"
            "poison, sleep, or paralysis."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchronize"),
        .description = COMPOUND_STRING("Passes on status problems."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Passes poison, paralysis, or burn\n"
            "to the Pokémon that inflicted it."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Clear Body"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents other Pokémon's moves or\n"
            "Abilities from lowering its stats."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Natural Cure"),
        .description = COMPOUND_STRING("Heals upon switching out."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's status conditions\n"
            "are cured when it switches out."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Lightning Rod"),
    #else
        .name = _("LightningRod"),
    #endif
        .description = COMPOUND_STRING("Draws electrical moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Draws in Electric-type moves to\n"
            "boost Sp. Atk without getting hit."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Serene Grace"),
        .description = COMPOUND_STRING("Promotes added effects."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the likelihood of additional\n"
            "effects occurring when attacking."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Swift Swim"),
        .description = COMPOUND_STRING("Raises Speed in rain."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Speed\n"
            "stat in rain."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("Raises Speed in sunshine."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Speed\n"
            "stat in harsh sunlight."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Illuminate"),
        .description = COMPOUND_STRING("Encounter rate increases."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Illuminates its surroundings.\n"
            "Its acccuracy cannot be lowered."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Trace"),
        .description = COMPOUND_STRING("Copies special ability."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When it enters a battle, the Pokémon\n"
            "copies a foe Pokémon's ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Huge Power"),
        .description = COMPOUND_STRING("Raises Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Doubles the Pokémon's Attack stat."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Poison Point"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Contact with the Pokémon\n"
            "may poison the attacker."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Inner Focus"),
        .description = COMPOUND_STRING("Prevents flinching."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is intensely focused and\n"
            "cannot be flinched or intimidated."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magma Armor"),
        .description = COMPOUND_STRING("Prevents freezing."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's hot magma coating\n"
            "prevents it from being frozen."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Water Veil"),
        .description = COMPOUND_STRING("Prevents burns."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's water veil prevents\n"
            "it from being burned."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnet Pull"),
        .description = COMPOUND_STRING("Traps Steel-type Pokémon."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents Steel-type Pokémon from\n"
            "fleeing with its magenetic force."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Soundproof"),
        .description = COMPOUND_STRING("Avoids sound-based moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Soundproofing gives the Pokémon\n"
            "immunity to all sound-based moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Rain Dish"),
        .description = COMPOUND_STRING("Slight HP recovery in rain."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon gradually\n"
            "regains HP in rain."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sand Stream"),
        .description = COMPOUND_STRING("Summons a sandstorm."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon summons a sandstorm\n"
            "when it enters a battle."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Pressure"),
        .description = COMPOUND_STRING("Raises foe's PP usage."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Puts other Pokémon under pressure.\n"
            "They will expend more PP to attack."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Thick Fat"),
        .description = COMPOUND_STRING("Heat-and-cold protection."),
        .descriptionTwoLines = COMPOUND_STRING(
            "A layer of fat halves the damage\n"
            "taken from Fire- and Ice-type moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Early Bird"),
        .description = COMPOUND_STRING("Awakens quickly from sleep."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon awakens from sleep\n"
            "twice as fast as other Pokémon."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flame Body"),
        .description = COMPOUND_STRING("Burns the foe on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Contact with the Pokémon\n"
            "may burn the attacker."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Run Away"),
        .description = COMPOUND_STRING("Makes escaping easier."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Enables a sure getaway\n"
            "from wild Pokémon."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Keen Eye"),
        .description = COMPOUND_STRING("Prevents loss of accuracy."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's keen eyes prevent its\n"
            "accuracy from being lowered."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Hyper Cutter"),
        .description = COMPOUND_STRING("Prevents Attack reduction."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's mighty pincers prevent\n"
            "others from lowering its Attack."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Pickup"),
        .description = COMPOUND_STRING("May pick up items."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon may pick up an item\n"
            "both in an out of battle."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Truant"),
        .description = COMPOUND_STRING("Moves only every two turns."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Each time the Pokémon uses a move,\n"
            "it loafs around the next turn."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Hustle"),
        .description = COMPOUND_STRING("Trades accuracy for power."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Attack stat\n"
            "but lowers its accuracy."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Cute Charm"),
        .description = COMPOUND_STRING("Infatuates on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Contact with the Pokémon\n"
            "may cause infatuation."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("Powers up with Minus."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Sp. Atk stat\n"
            "if an active ally has Plus or Minus."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING("Powers up with Plus."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Sp. Atk stat\n"
            "if an active ally has Plus or Minus."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Forecast"),
        .description = COMPOUND_STRING("Changes with the weather."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes the Pokémon's type to Water,\n"
            "Fire, or Ice dependent on weather."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Sticky Hold"),
        .description = COMPOUND_STRING("Prevents item theft."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's held items are stuck\n"
            "fast and cannot be forcibly removed."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Shed Skin"),
        .description = COMPOUND_STRING("Heals the body by shedding."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon may cure its own status\n"
            "conditions by shedding its skin."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Guts"),
        .description = COMPOUND_STRING("Ups Attack if suffering."),
        .descriptionTwoLines = COMPOUND_STRING(
            "It's so gutsy that having a status\n"
            "condition boosts its Attack stat."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Marvel Scale"),
        .description = COMPOUND_STRING("Ups Defense if suffering."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its scales boost its Defense stat\n"
            "if it has a status condition."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Liquid Ooze"),
        .description = COMPOUND_STRING("Draining causes injury."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's oozed liquid damages\n"
            "attackers that drain its HP."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Overgrow"),
        .description = COMPOUND_STRING("Ups Grass moves in a pinch."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers ups Grass-type moves when\n"
            "the Pokémon's HP is low."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Blaze"),
        .description = COMPOUND_STRING("Ups Fire moves in a pinch."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers ups Fire-type moves when\n"
            "the Pokémon's HP is low."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrent"),
        .description = COMPOUND_STRING("Ups Water moves in a pinch."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers ups Water-type moves when\n"
            "the Pokémon's HP is low."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Swarm"),
        .description = COMPOUND_STRING("Ups Bug moves in a pinch."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers ups Bug-type moves when\n"
            "the Pokémon's HP is low."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Rock Head"),
        .description = COMPOUND_STRING("Prevents recoil damage."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Protects the Pokémon\n"
            "from recoil damage."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Drought"),
        .description = COMPOUND_STRING("Summons sunlight in battle."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Turns the sunlight harsh when\n"
            "the Pokémon enters battle."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Arena Trap"),
        .description = COMPOUND_STRING("Prevents fleeing."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents the opposing Pokémon\n"
            "from fleeing battle."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Vital Spirit"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's incredible vitality\n"
            "prevents it from falling asleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("White Smoke"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its protective white smoke prevents\n"
            "others from lowering its stats."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Pure Power"),
        .description = COMPOUND_STRING("Raises Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Using its pure power, the Pokémon\n"
            "doubles its Attack stat."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Shell Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .descriptionTwoLines = COMPOUND_STRING(
            "A hard shell protects the Pokémon\n"
            "from critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Air Lock"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Eliminates the effects of weather."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tangled Feet"),
        .description = COMPOUND_STRING("Ups evasion if confused."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's evasiveness\n"
            "if it is confused."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Motor Drive"),
        .description = COMPOUND_STRING("Electricity raises Speed."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Incoming Electric-type moves do no\n"
            "damage and boost Speed instead."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalry"),
        .description = COMPOUND_STRING("Powers up against rivals."),
        .descriptionTwoLines = COMPOUND_STRING(
            "It does more damage to the same\n"
            "gender but less to the opposite."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Steadfast"),
        .description = COMPOUND_STRING("Flinching raises Speed."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's determination boosts\n"
            "its Speed stat when it flinches."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Snow Cloak"),
        .description = COMPOUND_STRING("Ups evasion in Hail or Snow."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's\n"
            "evasiveness in snow."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gluttony"),
        .description = COMPOUND_STRING("Eats Berries early."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon will eat its held Berry\n"
            "at half HP instead of at quarter HP."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Anger Point"),
        .description = COMPOUND_STRING("Critical hits raise Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is angered when hit\n"
            "critically, maxing its Attack stat."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Unburden"),
        .description = COMPOUND_STRING("Using a hold item ups Speed."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Speed stat if the\n"
            "Pokémon's held item is used or lost."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Heatproof"),
        .description = COMPOUND_STRING("Heat and burn protection."),
        .descriptionTwoLines = COMPOUND_STRING(
            "With its heatproof body, it halves\n"
            "damage taken from Fire-type moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("Prone to wild stat changes."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Doubles the effects of\n"
            "the Pokémon's stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Dry Skin"),
        .description = COMPOUND_STRING("Prefers moisture to heat."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Water and rain restore its HP, but\n"
            "it's damaged by sun and Fire."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("Adjusts power favorably."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon analyzes a foe to raise\n"
            "its most-effective attacking stat."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Iron Fist"),
        .description = COMPOUND_STRING("Boosts punching moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up punching moves."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Poison Heal"),
        .description = COMPOUND_STRING("Restores HP if poisoned."),
        .descriptionTwoLines = COMPOUND_STRING(
            "If poisoned, the Pokémon has its HP\n"
            "restored instead of taking damage."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptability"),
        .description = COMPOUND_STRING("Boosts same type attacks."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up moves of the same type\n"
            "as the Pokémon."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Skill Link"),
        .description = COMPOUND_STRING("Multi-hit moves hit 5 times."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Maximizes the number of times\n"
            "a multistrike move hits."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING("Cures status in rain."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Cures the Pokémon's status\n"
            "conditions in rain."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solar Power"),
        .description = COMPOUND_STRING("Powers up in sunshine."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Sp. Atk stat in sunlight,\n"
            "but HP is decreased every turn."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Quick Feet"),
        .description = COMPOUND_STRING("Ups Speed if suffering."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Speed stat if the Pokémon\n"
            "has a status condition."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalize"),
        .description = COMPOUND_STRING("Moves become Normal-type."),
        .descriptionTwoLines = COMPOUND_STRING(
            "All its moves become Normal-type\n"
            "and their power is boosted."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Sniper"),
        .description = COMPOUND_STRING("Boosts critical hits."),
        .descriptionTwoLines = COMPOUND_STRING(
            "If the Pokémon lands a critical hit,\n"
            "the attack is powered up further."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magic Guard"),
        .description = COMPOUND_STRING("Only damaged by attacks."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon only takes damage\n"
            "from attacks."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("No Guard"),
        .description = COMPOUND_STRING("Ensures that all moves hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon ensures incoming\n"
            "and outgoing attacks never miss."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Stall"),
        .description = COMPOUND_STRING("Always moves last."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is always the last\n"
            "to use its moves."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Technician"),
        .description = COMPOUND_STRING("Boosts weaker moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up weak moves so the Pokémon\n"
            "can deal more damage with them."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Leaf Guard"),
        .description = COMPOUND_STRING("Blocks status in sunshine."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents status conditions\n"
            "in harsh sunlight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Klutz"),
        .description = COMPOUND_STRING("Can't use hold items."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon can't use\n"
            "any held items."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Mold Breaker"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's moves are unimpeded\n"
            "by the Ability of the target."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Super Luck"),
        .description = COMPOUND_STRING("Critical hits land often."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is so lucky that its\n"
            "moves critically hit more often."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Aftermath"),
        .description = COMPOUND_STRING("Fainting damages the foe."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Damages the attacker that knocks it\n"
            "out with a direct contact move."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipation"),
        .description = COMPOUND_STRING("Senses dangerous moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon can sense an opposing\n"
            "Pokémon's dangerous moves."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Forewarn"),
        .description = COMPOUND_STRING("Determines a foe's move."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon can tell one of its foe's\n"
            "moves when entering battle."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unaware"),
        .description = COMPOUND_STRING("Ignores stat changes."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When attacking, the Pokémon ignores\n"
            "the target's stat changes."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Tinted Lens"),
        .description = COMPOUND_STRING("Ups “not very effective”."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's “not very effective”\n"
            "moves deal regular damage."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Reduces the power of supereffective\n"
            "attacks that hit the Pokémon."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Slow Start"),
        .description = COMPOUND_STRING("Takes a while to get going."),
        .descriptionTwoLines = COMPOUND_STRING(
            "For five turns, the Pokémon's\n"
            "Attack and Speed stats are halved."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Scrappy"),
        .description = COMPOUND_STRING("Hits Ghost-type Pokémon."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Hits Ghost types with Fighting- and\n"
            "Normal-type moves. Not intimidated."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Storm Drain"),
        .description = COMPOUND_STRING("Draws in Water moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Draws in Water-type moves to\n"
            "boost Sp. Atk without getting hit."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Ice Body"),
        .description = COMPOUND_STRING("HP recovery in Hail or Snow."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon gradually\n"
            "regains HP in snow."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solid Rock"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Reduces the power of supereffective\n"
            "attacks that hit the Pokémon."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Snow Warning"),
        .description = COMPOUND_STRING("Summons snow in battle."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon makes it snow\n"
            "when it enters a battle."),
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honey Gather"),
        .description = COMPOUND_STRING("May gather Honey."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon may gather Honey\n"
            "after a battle."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Frisk"),
        .description = COMPOUND_STRING("Checks a foe's item."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When it enters battle, the Pokémon\n"
            "checks a foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Reckless"),
        .description = COMPOUND_STRING("Boosts moves with recoil."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up moves that\n"
            "have recoil damage."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multitype"),
        .description = COMPOUND_STRING("Changes type to its Plate."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes the Pokémon's type to match\n"
            "the plate it holds."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Flower Gift"),
        .description = COMPOUND_STRING("Allies power up in sunshine."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Attack and Sp. Def stats\n"
            "of itself and allies in sunlight."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Bad Dreams"),
        .description = COMPOUND_STRING("Damages sleeping Pokémon."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Damages opposing Pokémon\n"
            "that are asleep."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Pickpocket"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon steals an attacker's\n"
            "held item when they make contact."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Sheer Force"),
        .description = COMPOUND_STRING("Trades effects for power."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Additional move effects don't occur,\n"
            "but the moves' power is boosted."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Contrary"),
        .description = COMPOUND_STRING("Inverts stat changes."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Inverts stat changes. Boosting stats\n"
            "lowers them instead, and vice versa."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Unnerve"),
        .description = COMPOUND_STRING("Foes can't eat Berries."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Unnerves opposing Pokémon and\n"
            "makes them unable to eat Berries."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Defiant"),
        .description = COMPOUND_STRING("Lowered stats up Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Sharply boosts the Pokémon's Attack\n"
            "stat if a foe lowers its stats."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Defeatist"),
        .description = COMPOUND_STRING("Gives up at half HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Halves the Pokémon's Attack and Sp.\n"
            "Atk stats when HP is half or less."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Cursed Body"),
        .description = COMPOUND_STRING("Disables moves on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "May disable a move that has dealt\n"
            "damage to the Pokémon."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Healer"),
        .description = COMPOUND_STRING("Heals partner Pokémon."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Sometimes cures the status\n"
            "conditions of the Pokémon's allies."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Friend Guard"),
        .description = COMPOUND_STRING("Lowers damage to partner."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Reduces damage dealt to allies."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Weak Armor"),
        .description = COMPOUND_STRING("Its stats change when hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When physically hit, its Defense stat\n"
            "falls and Speed is sharply boosted."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Heavy Metal"),
        .description = COMPOUND_STRING("Doubles weight."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Doubles the Pokémon's weight."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Light Metal"),
        .description = COMPOUND_STRING("Halves weight."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Halves the Pokémon's weight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiscale"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Reduces the amount of damage the\n"
            "Pokémon takes while its HP is full."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Toxic Boost"),
        .description = COMPOUND_STRING("Ups Attack if poisoned."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up physical moves when\n"
            "the Pokémon is poisoned."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Flare Boost"),
        .description = COMPOUND_STRING("Ups Sp. Atk if burned."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up special moves when\n"
            "the Pokémon is burned."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Harvest"),
        .description = COMPOUND_STRING("May recycle a used Berry."),
        .descriptionTwoLines = COMPOUND_STRING(
            "May create another Berry\n"
            "after one is used."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathy"),
        .description = COMPOUND_STRING("Can't be damaged by an ally."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon anticipates and dodges\n"
            "the attacks of its allies."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Moody"),
        .description = COMPOUND_STRING("Stats change gradually."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Every turn, one stat will be sharply\n"
            "boosted and another lowered."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Overcoat"),
        .description = COMPOUND_STRING("Blocks weather and powder."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is protected from\n"
            "sandstorms, powders, and spores."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Poison Touch"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "May poison a target when\n"
            "the Pokémon makes contact."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regenerator"),
        .description = COMPOUND_STRING("Heals upon switching out."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon has a little of its HP\n"
            "restored when withdrawn from battle."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Big Pecks"),
        .description = COMPOUND_STRING("Prevents Defense loss."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents the Pokémon from having\n"
            "its Defense stat lowered."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sand Rush"),
        .description = COMPOUND_STRING("Ups Speed in a sandstorm."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Speed stat\n"
            "in a sandstorm."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wonder Skin"),
        .description = COMPOUND_STRING("May avoid status problems."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Makes status moves more likely\n"
            "to miss the Pokémon."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analytic"),
        .description = COMPOUND_STRING("Moving last boosts power."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the power of the Pokémon's\n"
            "move if it acts last that turn."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Illusion"),
        .description = COMPOUND_STRING("Appears as a partner."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Comes out disguised as the Pokémon\n"
            "in the party's last spot."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Imposter"),
        .description = COMPOUND_STRING("Transforms into the foe."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon transforms itself\n"
            "into the Pokémon it's facing."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Infiltrator"),
        .description = COMPOUND_STRING("Passes through barriers."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's moves penetrate the\n"
            "target's barriers, substitutes, etc."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mummy"),
        .description = COMPOUND_STRING("Spreads with contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Contact with the Pokémon changes\n"
            "the attacker's Ability to Mummy."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Moxie"),
        .description = COMPOUND_STRING("KOs raise Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Knocking out a Pokémon shows moxie,\n"
            "and that boosts its Attack stat."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justified"),
        .description = COMPOUND_STRING("Dark hits raise Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When hit by a Dark-type move, its\n"
            "Attack stat is boosted for justice."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Rattled"),
        .description = COMPOUND_STRING("Raises Speed when scared."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Ups Speed when intimidated or hit by\n"
            "Bug-, Ghost-, or Dark-type moves."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magic Bounce"),
        .description = COMPOUND_STRING("Reflects status moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon reflects status moves\n"
            "instead of getting hit by them."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Sap Sipper"),
        .description = COMPOUND_STRING("Grass increases Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Incoming Grass-type moves do no\n"
            "damage and boost Attack instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Prankster"),
        .description = COMPOUND_STRING("Status moves go first."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Gives priority to the Pokémon's\n"
            "status moves."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sand Force"),
        .description = COMPOUND_STRING("Powers up in a sandstorm."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the power of Rock-, Ground-,\n"
            "and Steel-type moves in a sandstorm."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Iron Barbs"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's iron barbs damage\n"
            "foes making direct contact with it."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Zen Mode"),
        .description = COMPOUND_STRING("Transforms at half HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes the Pokémon's shape when\n"
            "its HP drops to half or less."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Victory Star"),
        .description = COMPOUND_STRING("Raises party accuracy."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the accuracy of the Pokémon\n"
            "and its allies."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turboblaze"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's moves are unimpeded\n"
            "by the Ability of the target."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's moves are unimpeded\n"
            "by the Ability of the target."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Aroma Veil"),
        .description = COMPOUND_STRING("Prevents limiting of moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Protects the Pokémon and its allies\n"
            "from effects that prevent move use."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Flower Veil"),
        .description = COMPOUND_STRING("Protects Grass-types."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Ally Grass types are protected from\n"
            "status conditions and stat lowering."),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Cheek Pouch"),
        .description = COMPOUND_STRING("Eating Berries restores HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Eating a Berry restores HP\n"
            "in addition to its usual effect."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Protean"),
        .description = COMPOUND_STRING("Changes type to used move."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes its type to that of a queued\n"
            "move once per battle entrance."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fur Coat"),
        .description = COMPOUND_STRING("Raises Defense."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Halves the damage from\n"
            "physical moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Magician"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon steals the held item\n"
            "from any target it hits with a move."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Bulletproof"),
        .description = COMPOUND_STRING("Avoids some projectiles."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Protects the Pokémon from\n"
            "ball and bomb moves."),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Competitive"),
        .description = COMPOUND_STRING("Lowered stats up Sp. Atk."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Sharply boosts the Pokémon's Sp. Atk\n"
            "stat if a foe lowers its stats."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Strong Jaw"),
        .description = COMPOUND_STRING("Boosts biting moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's strong jaw boosts\n"
            "the power of its biting moves."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Refrigerate"),
        .description = COMPOUND_STRING("Normal moves become Ice."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Normal-type moves become Ice-type\n"
            "and their power is boosted."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Sweet Veil"),
        .description = COMPOUND_STRING("Prevents party from sleep."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents the Pokémon and its allies\n"
            "from falling asleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Stance Change"),
    #else
        .name = _("StanceChange"),
    #endif
        .description = COMPOUND_STRING("Transforms as it battles."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes to Blade Forme by attacking,\n"
            "and Shield Forme with King's Shield."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Gale Wings"),
        .description = COMPOUND_STRING("Flying moves go first."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Gives priority to Flying-type\n"
            "moves while its HP is full."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mega Launcher"),
    #else
        .name = _("MegaLauncher"),
    #endif
        .description = COMPOUND_STRING("Boosts pulse moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up pulse moves."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Grass Pelt"),
        .description = COMPOUND_STRING("Ups Defense in grass."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Defense\n"
            "stat on Grassy Terrain."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiosis"),
        .description = COMPOUND_STRING("Passes its item to an ally."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon passes its item to\n"
            "an ally that has used up an item."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Tough Claws"),
        .description = COMPOUND_STRING("Boosts contact moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up moves that\n"
            "make direct contact."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Pixilate"),
        .description = COMPOUND_STRING("Normal moves become Fairy."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Normal-type moves become Fairy-\n"
            "type and their power is boosted."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Gooey"),
        .description = COMPOUND_STRING("Lowers Speed on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Contact with the Pokémon lowers\n"
            "the attacker's Speed stat."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Aerilate"),
        .description = COMPOUND_STRING("Normal moves become Flying."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Normal-type moves become Flying-\n"
            "type and their power is boosted."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Parental Bond"),
    #else
        .name = _("ParentalBond"),
    #endif
        .description = COMPOUND_STRING("Moves hit twice."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The parent and child attack\n"
            "one after the other."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dark Aura"),
        .description = COMPOUND_STRING("Boosts Dark moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up the Dark-type moves\n"
            "of all Pokémon on the field."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Fairy Aura"),
        .description = COMPOUND_STRING("Boosts Fairy moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up the Fairy-type moves\n"
            "of all Pokémon on the field."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura Break"),
        .description = COMPOUND_STRING("Reverse aura abilities."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The effects of “Aura” Abilities are\n"
            "reversed, weakening affected moves."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Primordial Sea"),
    #else
        .name = _("PrimrdialSea"),
    #endif
        .description = COMPOUND_STRING("Summons heavy rain."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon changes the weather to\n"
            "nullify Fire-type attacks."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Desolate Land"),
    #else
        .name = _("DesolateLand"),
    #endif
        .description = COMPOUND_STRING("Summons intense sunlight."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon changes the weather to\n"
            "nullify Water-type attacks."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta Stream"),
        .description = COMPOUND_STRING("Summons strong winds."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon changes the weather so\n"
            "Flying-types have no weaknesses."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Stamina"),
        .description = COMPOUND_STRING("Boosts Defense when hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Defense stat when the\n"
            "Pokémon is hit by an attack."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Wimp Out"),
        .description = COMPOUND_STRING("Flees at half HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon cowardly switches out\n"
            "when its HP drops to half or less."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Emergency Exit"),
    #else
        .name = _("EmergncyExit"),
    #endif
        .description = COMPOUND_STRING("Flees at half HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "It, sensing danger, switches out\n"
            "when its HP drops to half or less."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Water Compaction"),
    #else
        .name = _("WtrCmpaction"),
    #endif
        .description = COMPOUND_STRING("Water boosts Defense."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Defense stat sharply\n"
            "when hit by a Water-type move."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Merciless"),
        .description = COMPOUND_STRING("Criticals poisoned foes."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's attacks hit critically\n"
            "if the target is poisoned."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Shields Down"),
        .description = COMPOUND_STRING("Shell breaks at half HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "At half HP or less, its shell breaks\n"
            "and it becomes aggressive."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Stakeout"),
        .description = COMPOUND_STRING("Stronger as foes switch in."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Doubles the damage dealt to a target\n"
            "that has just switched into battle."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Water Bubble"),
        .description = COMPOUND_STRING("Guards from fire and burns."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Halves Fire damage, prevents burns,\n"
            "and doubles Water-type move power."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Steelworker"),
        .description = COMPOUND_STRING("Powers up Steel moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up Steel-type moves."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Berserk"),
        .description = COMPOUND_STRING("Boosts Sp. Atk at low HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts its Sp. Atk stat when a hit\n"
            "drops its HP to half or less."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Slush Rush"),
        .description = COMPOUND_STRING("Raises Speed in Hail/Snow."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's\n"
            "Speed stat in snow."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Long Reach"),
        .description = COMPOUND_STRING("Never makes contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon uses its moves without\n"
            "making contact with the target."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Liquid Voice"),
        .description = COMPOUND_STRING("Makes sound moves Water."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Sound-based moves become\n"
            "Water-type moves."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Triage"),
        .description = COMPOUND_STRING("Healing moves go first."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Gives priority to the\n"
            "Pokémon's healing moves."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Galvanize"),
        .description = COMPOUND_STRING("Normal moves turn Electric."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Normal-type moves become Electric-\n"
            "type and their power is boosted."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surge Surfer"),
        .description = COMPOUND_STRING("Faster on electricity."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Doubles the Pokémon's Speed\n"
            "stat on Electric Terrain."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Schooling"),
        .description = COMPOUND_STRING("Forms a school when strong."),
        .descriptionTwoLines = COMPOUND_STRING(
            "With high HP, forms a mighty school.\n"
            "It stops schooling with low HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Disguise"),
        .description = COMPOUND_STRING("Decoy protects it once."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Once per battle, the shroud covering\n"
            "it can protect it from an attack."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Battle Bond"),
        .description = COMPOUND_STRING("Changes form after a KO."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When it KOs a target, its Attack, Sp.\n"
            "Atk, and Speed stats are boosted."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Power Construct"),
    #else
        .name = _("PwrConstruct"),
    #endif
        .description = COMPOUND_STRING("Cells aid it when weakened."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When its HP drops to half or less,\n"
            "cells change it into Complete Forme."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosion"),
        .description = COMPOUND_STRING("Poisons any type."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon can poison the target\n"
            "even if it's a Steel or Poison type."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Comatose"),
        .description = COMPOUND_STRING("Always drowsing."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon is always drowsing. It\n"
            "can still attack without ever waking."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Queenly Majesty"),
    #else
        .name = _("QueenlyMjsty"),
    #endif
        .description = COMPOUND_STRING("Protects from priority."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's majesty makes foes\n"
            "unable to hit with priority moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Innards Out"),
        .description = COMPOUND_STRING("Hurts foe when defeated."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When knocked out, does damage equal\n"
            "to its remaining HP to the attacker."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Dancer"),
        .description = COMPOUND_STRING("Dances along with others."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When another Pokémon dances, it will\n"
            "copy the move and use it next."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Battery"),
        .description = COMPOUND_STRING("Boosts ally's Sp. Atk."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up ally Pokémon's\n"
            "special moves."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Fluffy"),
        .description = COMPOUND_STRING("Tougher but flammable."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Halves the damage taken from contact\n"
            "moves, but doubles Fire-type damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Dazzling"),
        .description = COMPOUND_STRING("Protects from priority."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon dazzles its foes so\n"
            "they can't hit with priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Soul-Heart"),
        .description = COMPOUND_STRING("KOs raise Sp. Atk."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Sp. Atk stat\n"
            "every time another Pokémon faints."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Tangling Hair"),
    #else
        .name = _("TanglingHair"),
    #endif
        .description = COMPOUND_STRING("Lowers Speed on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Contact with the Pokémon lowers\n"
            "the attacker's Speed stat."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("Copies ally's ability."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon copies the Ability\n"
            "of a defeated ally."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Power Of Alchemy"),
    #else
        .name = _("PwrOfAlchemy"),
    #endif
        .description = COMPOUND_STRING("Copies ally's ability."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon copies the Ability\n"
            "of a defeated ally."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Beast Boost"),
        .description = COMPOUND_STRING("KOs boost best stat."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's most proficient\n"
            "stat every time it KOs a target."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("RKS System"),
        .description = COMPOUND_STRING("Memories change its type."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes the Pokémon's type to match\n"
            "the memory disc it holds."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Electric Surge"),
    #else
        .name = _("ElectrcSurge"),
    #endif
        .description = COMPOUND_STRING("Field becomes Electric."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Turns the field into Electric Terrain\n"
            "when the Pokémon enters battle."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Psychic Surge"),
    #else
        .name = _("PsychicSurge"),
    #endif
        .description = COMPOUND_STRING("Field becomes weird."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Turns the field into Psychic Terrain\n"
            "when the Pokémon enters battle."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Misty Surge"),
        .description = COMPOUND_STRING("Field becomes misty."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Turns the field into Misty Terrain\n"
            "when the Pokémon enters battle."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Grassy Surge"),
        .description = COMPOUND_STRING("Field becomes grassy."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Turns the field into Grassy Terrain\n"
            "when the Pokémon enters battle."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Full Metal Body"),
    #else
        .name = _("FullMetalBdy"),
    #endif
        .description = COMPOUND_STRING("Prevents stat reduction."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents other Pokémon's moves or\n"
            "Abilities from lowering its stats."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Shadow Shield"),
    #else
        .name = _("ShadowShield"),
    #endif
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Reduces the amount of damage the\n"
            "Pokémon takes while its HP is full."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prism Armor"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Reduces the power of supereffective\n"
            "attacks that hit the Pokémon."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Neuroforce"),
        .description = COMPOUND_STRING("Ups “supereffective”."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up the Pokémon's\n"
            "supereffective moves even further."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Intrepid Sword"),
    #else
        .name = _("IntrepidSwrd"),
    #endif
        .description = COMPOUND_STRING("Ups Attack on entry."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Attack stat\n"
            "the first time it enters battle."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Dauntless Shield"),
    #else
        .name = _("DauntlssShld"),
    #endif
        .description = COMPOUND_STRING("Ups Defense on entry."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's Defense stat\n"
            "the first time it enters battle."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("Changes type to move's."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes its type to that of a queued\n"
            "move once per battle entrance."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Ball Fetch"),
        .description = COMPOUND_STRING("Fetches failed Poké Ball."),
        .descriptionTwoLines = COMPOUND_STRING(
            "It will fetch a failed Poké Ball if\n"
            "it is not already holding an item."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Cotton Down"),
        .description = COMPOUND_STRING("Lower Speed of all when hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Cotton fluff is scattered when hit,\n"
            "lowering all others' Speed stats."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Propeller Tail"),
    #else
        .name = _("PropellrTail"),
    #endif
        .description = COMPOUND_STRING("Ignores foe's redirection."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Ignores redirection effects from\n"
            "the foe's Abilities and moves."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Mirror Armor"),
        .description = COMPOUND_STRING("Reflect stat decreases."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Bounces back only the stat-lowering\n"
            "effects that the Pokémon receives."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Gulp Missile"),
        .description = COMPOUND_STRING("If hit, spits prey from sea."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Finds prey with Surf or Dive. When\n"
            "hit, it spits the prey out at the foe."),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Stalwart"),
        .description = COMPOUND_STRING("Ignores foe's redirection."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Ignores redirection effects from\n"
            "the foe's Abilities and moves."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Steam Engine"),
        .description = COMPOUND_STRING("Fire or Water hits up Speed."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Drastically boosts Speed if it's hit\n"
            "by Fire- or Water-type moves."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Ups and resists sound."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the power of and takes half\n"
            "damage from sound-based moves."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sand Spit"),
        .description = COMPOUND_STRING("Creates a sandstorm if hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon creates a sandstorm\n"
            "if it's hit by an attack."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Ice Scales"),
        .description = COMPOUND_STRING("Halves special damage."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's ice scales halve\n"
            "damage taken from special moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Ripen"),
        .description = COMPOUND_STRING("Doubles effect of Berries."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Ripens Berries and doubles\n"
            "their effect."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Ice Face"),
        .description = COMPOUND_STRING("Hail or Snow renew free hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its ice head acts as a substitute.\n"
            "The ice is restored when it snows."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Power Spot"),
        .description = COMPOUND_STRING("Powers up ally moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Just being next to the\n"
            "Pokémon powers up moves."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimicry"),
        .description = COMPOUND_STRING("Changes type on terrain."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Changes the Pokémon's type\n"
            "depending on the terrain."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Screen Cleaner"),
    #else
        .name = _("ScreenCleanr"),
    #endif
        .description = COMPOUND_STRING("Removes walls of light."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When it enters battle, Light Screen\n"
            "Reflect, and Aurora Veil all end."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Steely Spirit"),
    #else
        .name = _("SteelySpirit"),
    #endif
        .description = COMPOUND_STRING("Boosts ally's Steel moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up the Steel-type moves\n"
            "of the Pokémon and its allies."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Perish Body"),
        .description = COMPOUND_STRING("Foe faints in 3 turns if hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "If the foe makes direct contact, it\n"
            "and the foe will faint in three turns."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Wandering Spirit"),
    #else
        .name = _("WandrngSprit"),
    #endif
        .description = COMPOUND_STRING("Trade abilities on contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon trades Abilities with a\n"
            "foe that makes direct contact."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Gorilla Tactics"),
    #else
        .name = _("GorillaTacti"),
    #endif
        .description = COMPOUND_STRING("Ups Attack and locks move."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts its Attack stat but only\n"
            "the first move selected is usable."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Neutralizing Gas"),
    #else
        .name = _("NeutrlzngGas"),
    #endif
        .description = COMPOUND_STRING("All Abilities are nullified."),
        .descriptionTwoLines = COMPOUND_STRING(
            "While the Pokémon is in battle, all\n"
            "other Abilities are nullified."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastel Veil"),
        .description = COMPOUND_STRING("Protects team from poison."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Prevents the Pokémon and its allies\n"
            "from being poisoned."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hunger Switch"),
    #else
        .name = _("HungerSwitch"),
    #endif
        .description = COMPOUND_STRING("Changes form each turn."),
        .descriptionTwoLines = COMPOUND_STRING(
            "It oscillates between its Full\n"
            "Belly and Hangry Modes each turn."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Quick Draw"),
        .description = COMPOUND_STRING("Moves first occasionally."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Enables the Pokémon to\n"
            "move first occasionally."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Unseen Fist"),
        .description = COMPOUND_STRING("Contact evades protection."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's direct contact moves\n"
            "bypass the foe's protection effects."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Curious Medicine"),
    #else
        .name = _("CuriusMedicn"),
    #endif
        .description = COMPOUND_STRING("Remove ally's stat changes."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When the Pokémon enters battle, all\n"
            "allies' stat changes are removed."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Ups Electric-type moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up Electric-type moves."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("Ups Dragon-type moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up Dragon-type moves."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Chilling Neigh"),
    #else
        .name = _("ChillngNeigh"),
    #endif
        .description = COMPOUND_STRING("KOs boost Attack stat."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Utters a chilling neigh when KOing\n"
            "a foe, boosting its Attack stat."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Grim Neigh"),
        .description = COMPOUND_STRING("KOs boost Sp. Atk stat."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Utters a terrifying neigh when KOing\n"
            "a foe, boosting its Sp. Atk stat."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
        .descriptionTwoLines = COMPOUND_STRING(
            "KOing a foe boosts its Attack stat.\n"
            "The foe cannot eat Berries."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
        .descriptionTwoLines = COMPOUND_STRING(
            "KOing a foe boosts its Sp. Atk stat.\n"
            "The foe cannot eat Berries."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Lingering Aroma"),
    #else
        .name = _("LngerngAroma"),
    #endif
        .description = COMPOUND_STRING("Spreads with contact."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The attacker's Ability changes to\n"
            "Lingering Aroma when making contact."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Seed Sower"),
        .description = COMPOUND_STRING("Affects terrain when hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When hit by an attack, turns the\n"
            "field into Grassy Terrain."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Thermal Exchange"),
    #else
        .name = _("ThrmlExchnge"),
    #endif
        .description = COMPOUND_STRING("Fire hits up Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts its Attack when hit by Fire-\n"
            "type moves. It cannot be burned."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Anger Shell"),
        .description = COMPOUND_STRING("Gets angry at half HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "At half HP or less, its defenses\n"
            "fall while offenses and Speed rise."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Purifying Salt"),
    #else
        .name = _("PurfyingSalt"),
    #endif
        .description = COMPOUND_STRING("Protected by pure salts."),
        .descriptionTwoLines = COMPOUND_STRING(
            "It's immune to status conditions.\n"
            "Ghost-type moves do half damage."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Well-Baked Body"),
    #else
        .name = _("WellBakedBdy"),
    #endif
        .description = COMPOUND_STRING("Strengthened by Fire."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Incoming Fire-type moves do no\n"
            "damage and sharply boost Defense."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Wind Rider"),
        .description = COMPOUND_STRING("Ups Attack if hit by wind."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Incoming wind moves do no damage\n"
            "and boost its Attack stat instead."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Guard Dog"),
        .description = COMPOUND_STRING("Cannot be intimidated."),
        .descriptionTwoLines = COMPOUND_STRING(
            "If intimidated, its Attack stat is\n"
            "boosted. Cannot be forced to flee."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Rocky Payload"),
    #else
        .name = _("RockyPayload"),
    #endif
        .description = COMPOUND_STRING("Powers up Rock moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up Rock-type moves."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Wind Power"),
        .description = COMPOUND_STRING("Gets charged by wind."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Being hit by a wind move charges\n"
            "its next Electric-type move."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Zero to Hero"),
        .description = COMPOUND_STRING("Changes form on switch out."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon transforms into its\n"
            "Hero Form when it switches out."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Commander"),
        .description = COMPOUND_STRING("Commands from Dondozo."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When it enters battle, it goes into an\n"
            "ally Dondozo's mouth to command it."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Electromorphosis"),
    #else
        .name = _("Elecmrphosis"),
    #endif
        .description = COMPOUND_STRING("Gets Charged when hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Taking damage charges it, boosting\n"
            "its next Electric-type move."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Protosynthesis"),
    #else
        .name = _("Protosnthsis"),
    #endif
        .description = COMPOUND_STRING("Sun boosts best stat."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts the Pokémon's most proficient\n"
            "stat in sun or with a Booster Energy."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quark Drive"),
        .description = COMPOUND_STRING("Elec. field ups best stat."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Boosts its best stat on Electric\n"
            "Terrain or with a Booster Energy."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Good as Gold"),
        .description = COMPOUND_STRING("Avoids status problems."),
        .descriptionTwoLines = COMPOUND_STRING(
            "A body of pure gold grants immunity\n"
            "to other Pokémon's status moves."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Vessel of Ruin"),
    #else
        .name = _("VesselOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' sp. damage."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Lowers all other Pokémon's Sp. Atk\n"
            "stats with its ruinous vessel."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Sword of Ruin"),
    #else
        .name = _("SwordOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' Defense."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Lowers all other Pokémon's Defense\n"
            "stats with its ruinous sword."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Tablets of Ruin"),
    #else
        .name = _("TabltsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' damage."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Lowers all other Pokémon's Attack\n"
            "stats with its ruinous tablets."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Beads of Ruin"),
    #else
        .name = _("BeadsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' Sp. Defense."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Lowers all other Pokémon's Sp. Def\n"
            "stats with its ruinous beads."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Orichalcum Pulse"),
    #else
        .name = _("OrchlcumPlse"),
    #endif
        .description = COMPOUND_STRING("Summons sunlight in battle."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Summons harsh sunlight when entering\n"
            "battle. Sunlight raises its Attack."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hadron Engine"),
    #else
        .name = _("HadronEngine"),
    #endif
        .description = COMPOUND_STRING("Field becomes Electric."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Sets Electric Terrain when entering\n"
            "battle. That terrain ups its Sp. Atk."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Opportunist"),
        .description = COMPOUND_STRING("Copies foe's stat change."),
        .descriptionTwoLines = COMPOUND_STRING(
            "If a foe's stat is boosted, it\n"
            "boosts the same stat for itself."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Cud Chew"),
        .description = COMPOUND_STRING("Eats a used berry again."),
        .descriptionTwoLines = COMPOUND_STRING(
            "An eaten Berry will be regurgitated\n"
            "and eaten once more on the next turn."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Sharpness"),
        .description = COMPOUND_STRING("Strengthens slicing moves."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Powers up slicing moves."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Supreme Overlord"),
    #else
        .name = _("SuprmeOvrlrd"),
    #endif
        .description = COMPOUND_STRING("Inherits fallen's strength."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Each fainted party member slightly\n"
            "boosts the Pokémon's offensive stats."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Costar"),
        .description = COMPOUND_STRING("Copies ally's stat changes."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When the Pokémon enters a battle,\n"
            "it copies an ally's stat changes."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Toxic Debris"),
        .description = COMPOUND_STRING("Throws poison spikes if hit."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When hit by a physical move, lays\n"
            "Toxic Spikes at the feet of the foe."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Armor Tail"),
        .description = COMPOUND_STRING("Protects from priority."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's odd tail makes foes\n"
            "unable to hit with priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Earth Eater"),
        .description = COMPOUND_STRING("Eats ground to heal HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Restores HP if hit by Ground-type\n"
            "moves instead of taking damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mycelium Might"),
    #else
        .name = _("MceliumMight"),
    #endif
        .description = COMPOUND_STRING("Status moves never fail."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's status moves are slow,\n"
            "but can't be blocked by Abilities."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitality"),
        .description = COMPOUND_STRING("Restores ally's HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Restores a quarter of an ally's HP\n"
            "when the Pokémon enters battle."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Mind's Eye"),
        .description = COMPOUND_STRING("Keen Eye and Scrappy."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its accuracy can't drop. Ignores\n"
            "evasiveness and Ghost immunities."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Speed."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its Teal Mask shines,\n"
            "boosting the Pokémon's Speed stat."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Attack."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its Hearthflame Mask shines,\n"
            "boosting the Pokémon's Attack stat."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Sp. Def."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its Wellspring Mask shines,\n"
            "boosting the Pokémon's Sp. Def stat."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Defense."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Its Cornerstone Mask shines,\n"
            "boosting the Pokémon's Defense stat."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Toxic Chain"),
        .description = COMPOUND_STRING("Moves can poison."),
        .descriptionTwoLines = COMPOUND_STRING(
            "The Pokémon's toxic chain may badly\n"
            "poison foes hit by its moves."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Supersweet Syrup"),
    #else
        .name = _("SuprswtSyrup"),
    #endif
        .description = COMPOUND_STRING("Lowers the foe's Evasion."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Once per battle, the Pokémon emits\n"
            "a scent that lowers evasiveness."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera Shift"),
        .description = COMPOUND_STRING("Terastallizes upon entry."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When entering battle, it absorbs\n"
            "energy to assume its Terastal Form."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera Shell"),
        .description = COMPOUND_STRING("Resists all at full HP."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When at full HP, all damage-dealing\n"
            "moves it's hit by are resisted."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Teraform Zero"),
    #else
        .name = _("TeraformZero"),
    #endif
        .description = COMPOUND_STRING("Zeroes weather and terrain."),
        .descriptionTwoLines = COMPOUND_STRING(
            "When assuming its Stellar Form, it\n"
            "eliminates weather and terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Poison Puppeteer"),
    #else
        .name = _("PoisnPuppter"),
    #endif
        .description = COMPOUND_STRING("Confuses poisoned foes."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Pokémon poisoned by the Pokémon's\n"
            "moves will also become confused."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_METAL_SURGE] =
    {
        .name = _("Metal Surge"),
        .description = COMPOUND_STRING("Field becomes metallic."),
        .descriptionTwoLines = COMPOUND_STRING(
            "Turns the field into Metal Terrain\n"
            "when the Pokémon enters battle."),
        .aiRating = 8,
    },
};
