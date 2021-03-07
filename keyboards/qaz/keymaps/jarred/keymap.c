#include QMK_KEYBOARD_H
#include "jarred.h"

#define NAV_A      LT(_NV,KC_A)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT_split_space(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
    NAV_A,     KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_BSPC,
    LSFT_T(KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, RSFT_T(KC_DOT),
    KC_LCTL, KC_LGUI, KC_LALT, LT(_LW,KC_SPACE), LT(_LW,KC_ENT), KC_RALT, KC_RGUI, KC_RCTL
  ),

  [_LW] = LAYOUT_split_space(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8  , KC_9   , KC_0   ,
    _______,     KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11, _______, _______, KC_LBRC, KC_RBRC,
    _______,        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F12,  KC_GRV, _______, _______,
    _______, _______, _______, _______, KC_BSPC, _______, RESET, _______
  ),

  [_NV] = LAYOUT_split_space(
    _______, _______, KC_LGUI,  KC_DEL, KC_BSPC, _______, KC_HOME, KC_UP  , KC_END ,  KC_DEL,
    _______,   _______, KC_LSFT, KC_LCTL,  KC_ENT, _______, KC_LEFT, KC_DOWN, KC_RGHT,  KC_BSPC,
    _______,        _______, _______, _______, _______, KC_PGUP, KC_PGDN, _______, _______,
    _______, _______, _______, ALT_TAB, _______, _______, _______, _______
  ),

  [_GAME] = LAYOUT_split_space(
    KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    _______,   _______, _______, _______,  _______, _______, _______, _______, KC_LCBR, KC_RCBR,
    _______,        _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, KC_BSPC, _______, _______, _______
  ),
};

/*uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_LW,KC_SPACE):
        case LT(_LW,KC_ENT):
            return 125;
        default:
            return TAPPING_TERM;
    }
}*/
