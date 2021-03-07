#pragma once

#ifdef COMBO_ENABLE
//#    define COMBO_COUNT 3
#    define COMBO_VARIABLE_LEN
#    define COMBO_TERM 30
#endif

#define ONESHOT_TIMEOUT 1000

#undef TAPPING_TERM
#undef PERMISSIVE_HOLD
#undef IGNORE_MOD_TAP_INTERRUPT
#undef TAPPING_FORCE_HOLD
#undef RETRO_TAPPING

#define TAPPING_TERM        200
#define TAPPING_TERM_FAST   100     // Use faster tapping on space bar
#define TAPPING_TERM_PER_KEY        
//#define TAPPING_FORCE_HOLD          // Fix rapid alternating Layer Tap. Space cannot be held
//#define RETRO_TAPPING               // Since tapping on space is low, this will still register a key if no mod is used
