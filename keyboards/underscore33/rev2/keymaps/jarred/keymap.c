#include QMK_KEYBOARD_H
#include "jarred.h"

// Tap dance on F2 and F11 (Why so much code for such a simple function qmk...)
enum {
  TD_F1F2_ID = 0,
  TD_F11F12_ID,
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_F1F2_ID] = ACTION_TAP_DANCE_DOUBLE(KC_F2, KC_F1),
  [TD_F11F12_ID] = ACTION_TAP_DANCE_DOUBLE(KC_F11, KC_F12)
};

#define TD_F2      TD(TD_F1F2_ID)
#define TD_F11     TD(TD_F11F12_ID)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT_33_big_space(
    KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
    NAV_A  , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_QUOT,
    LSFT_Z , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , RSF_SLH,
             KC_ENT ,                        NUM_SPC,                       KC_ENT
  ),

  [_LW] = LAYOUT_33_big_space(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    KC_F7  , KC_F8  , KC_F9  , KC_F10 , TD_F11 , KC_SCLN, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC,
    KC_LSFT, TD_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_BSLS, KC_GRV , _______, KC_RSFT,
             RESET  ,                        _______,                       _______
  ),

  [_NV] = LAYOUT_33_big_space(
    _______, _______, KC_LGUI,  KC_DEL, KC_BSPC, _______, KC_HOME, KC_UP  , KC_END , KC_BSPC,
    _______, _______, KC_LSFT, KC_LCTL,  KC_ENT, _______, KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL,
    _______, _______, CTL_TAB, ALT_TAB, _______, _______, KC_PGUP, KC_PGDN, KC_INS , _______,
             _______,                        _______,                       _______
  ),
};
