#pragma once

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 12
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_INTERVAL 100
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40


// prevent holdback of 1-3 key TxBolt chords
// #define PREVENT_STUCK_MODIFIERS

// fix dual function timing
#define PERMISSIVE_HOLD

// if we dont set this, MOD_TAP is unusable when typing fast,
// because `la` is converted to `å` for example
#define IGNORE_MOD_TAP_INTERRUPT

// Leader Key
// #define LEADER_TIMEOUT 300
// #define LEADER_PER_KEY_TIMING

// Adding LT to the backspace key results in half the deletes I do failing because I don't release it fast enough. This should fix it...
//#define RETRO_TAPPING

#define TAPPING_TERM 250

// Apparently I don't release the A key as fast as other keys, so I'll need to tweak the tapping term for pinkies
#define TAPPING_TERM_PER_KEY


// Combos
#define COMBO_COUNT 2

#define UNICODE_SELECTED_MODES UC_MAC