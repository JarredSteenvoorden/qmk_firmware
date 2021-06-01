#include QMK_KEYBOARD_H
#include "jarred.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT_33_big_space(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
    NAV_A,  KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,    KC_K,   KC_L,  KC_BSPC,
    LSFT_Z, KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, KC_DOT, RSFT_SLH,
                 KC_LCTL, NUM_SPC, KC_ENT
  ),

  [_LW] = LAYOUT_33_big_space(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    _______,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11, _______, _______, KC_LBRC, KC_RBRC,
    _______,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F12,  KC_GRV, _______, _______, _______,
               RESET,                        _______,                       _______
  ),

  [_NV] = LAYOUT_33_big_space(
    _______, _______, KC_LGUI,  KC_DEL, KC_BSPC, _______, KC_HOME, KC_UP  , KC_END ,  KC_DEL,
    _______, _______, KC_LSFT, KC_LCTL,  KC_ENT, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,
    _______, _______, _______, _______, _______, KC_PGUP, KC_PGDN, _______, _______, _______,
             _______,                        ALT_TAB,                       _______
  ),
};
