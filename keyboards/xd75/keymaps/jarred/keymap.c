#include QMK_KEYBOARD_H

#define _QW 0
#define _LW 1
#define _NV 2
#define _NM 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_QW] = {
  { KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_MUTE, KC_VOLD, KC_VOLU, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_GRV  },
  { KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_MINS, _______, KC_LBRC, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC },
  { MO(_NV), KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_EQL , _______, KC_RBRC, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT },
  { KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_DEL , KC_UP  , KC_BSLS, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT },
  { KC_LCTL, KC_LGUI, MO(_NM), KC_LALT, MO(_LW), KC_SPC , KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT , MO(_LW), KC_RALT, KC_RGUI, KC_APP , KC_RCTL },
 },
 [_LW] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______, _______, _______, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______ },
  { _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______, _______, _______, KC_F11 , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS },
  { _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______, _______, _______, KC_F12 , KC_GRV , _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 },
 [_NV] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, KC_DEL , KC_BSPC, _______, _______, _______, _______, KC_HOME, KC_UP  , KC_END , KC_INS , _______ },
  { _______, _______, _______, KC_LSFT, KC_LCTL, KC_ENT , _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL , _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, KC_PGDN, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 },
 [_NM] = {
  { _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, _______, RESET   },
  { _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, RGB_SAD, RGB_SAI, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, RGB_VAD, RGB_VAI, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 }
};
