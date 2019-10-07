#include QMK_KEYBOARD_H
#include "jarred.h"

#define LAYOUT_ortho_5x12_wrapper(...) LAYOUT_ortho_5x12(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT_ortho_5x12_wrapper(QWERTY_5x12),
    [_GAME] = LAYOUT_ortho_5x12_wrapper(GAME_5x12),
    [_LW] = LAYOUT_ortho_5x12_wrapper(LOWER_5x12),
    [_NV] = LAYOUT_ortho_5x12_wrapper(NAV_5x12),
    [_NP] = LAYOUT_ortho_5x12_wrapper(NUMPAD_5x12),
    [_MS] = LAYOUT_ortho_5x12_wrapper(MOUSE_5x12)
};
