#include QMK_KEYBOARD_H

#include "keymap_combo.h"

enum layers{
  _BASE,
  _NUM_SYM,
  _NAV
};
enum combo_events {
  COMBO_TAB,
  COMBO_ESC,
  COMBO_MINS,
  COMBO_EQL,

  COMBO_QUOT,
  COMBO_SLSH,
  COMBO_BSLS,
  COMBO_SCLN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_space(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
    LT(_NAV,KC_A),  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_BSPC,
    MT(MOD_LSFT, KC_Z),   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, MT(MOD_RSFT,KC_DOT),
    KC_LCTL, KC_LGUI, KC_LALT, LT(_NUM_SYM,KC_SPACE), LT(_NUM_SYM,KC_ENT), KC_RALT, KC_RGUI, KC_RCTL
  ),

  [_NUM_SYM] = LAYOUT_split_space(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8  , KC_9   , KC_0   ,
    _______,     KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11, _______, _______, KC_LBRC, KC_RBRC,
    _______,        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F12,  KC_GRV, _______, _______,
    _______, _______, _______, _______, _______, _______, RESET, _______
  ),

  [_NAV] = LAYOUT_split_space(
    _______, _______, KC_LGUI,  KC_DEL, KC_BSPC, _______, KC_HOME, KC_UP  , KC_END ,  KC_DEL,
    _______,   _______, KC_LSFT, KC_LCTL,  KC_ENT, _______, KC_LEFT, KC_DOWN, KC_RGHT,  KC_BSPC,
    _______,        _______, _______, _______, _______, KC_PGUP, KC_PGDN, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
  ),
};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_esc[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_S, KC_D, COMBO_END};

const uint16_t PROGMEM combo_mins[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_eql[] = {KC_D, KC_F, COMBO_END};

const uint16_t PROGMEM combo_quot[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_scln[] = {KC_J, KC_K, COMBO_END};

const uint16_t PROGMEM combo_slsh[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_bsls[] = {KC_U, KC_I, COMBO_END};

combo_t key_combos2[] = {
  [COMBO_ESC] = COMBO(combo_esc,KC_ESC),
  [COMBO_TAB] = COMBO(combo_tab,KC_TAB),
  [COMBO_EQL] = COMBO(combo_eql,KC_EQL),
  [COMBO_MINS] = COMBO(combo_mins,KC_MINS),

  [COMBO_QUOT] = COMBO(combo_quot,KC_QUOT),
  [COMBO_SLSH] = COMBO(combo_slsh,KC_SLSH),
  [COMBO_BSLS] = COMBO(combo_bsls,KC_BSLS),
  [COMBO_SCLN] = COMBO(combo_scln,KC_SCLN)
};
#endif

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_NUM_SYM,KC_SPACE):
        case LT(_NUM_SYM,KC_ENT):
            return 125;
        default:
            return TAPPING_TERM;
    }
}
