#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_with_macro(
    KC_GESC, KC_INS,  KC_GESC, KC_1,    KC_2,    KC_3,     KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______,  KC_BSPC, \
    KC_PSCR, KC_UP,   KC_TAB,  KC_Q,    KC_W,    KC_E,     KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_LEFT, KC_RGHT, KC_CAPS, KC_A,    KC_S,    KC_D,     KC_F,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_MUTE, KC_DOWN, KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,   KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, \
    KC_VOLD, KC_VOLU, KC_LCTL, KC_LGUI, KC_LALT, MO(_FN1), KC_SPC, KC_SPC,  _______, KC_RALT, KC_RGUI, _______, KC_APP, KC_RCTL
  ),

  [_FN1] = LAYOUT_60_with_macro(
    KC_F1,   KC_F2,   KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  KC_DEL, \
    KC_F3,   KC_F4,   KC_TAB,   _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_F5,   KC_F6,   KC_CAPS,  KC_LEFT, KC_DOWN, KC_RGHT, KC_FIND, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,\
    KC_F7,   KC_F8,   KC_LSFT,  _______, KC_CUT,  KC_COPY, KC_PSTE, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_F9,   KC_F10,  KC_LCTL,  KC_LGUI, KC_LALT, _______, _______, _______, _______, KC_RALT, KC_RGUI, _______, KC_APP,  KC_RCTL
  )
};
