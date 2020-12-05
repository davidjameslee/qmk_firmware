#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
		KC_P7, KC_P8, KC_P9, KC_PPLS, 
		KC_P4, KC_P5, KC_P6, 
		KC_P1, KC_P2, KC_P3, KC_PENT,
		KC_P0, KC_P0, KC_PDOT, KC_AUDIO_MUTE),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

void encoder_update_user(uint8_t index, bool clockwise) {
	// Only one encoder, so ignoring index
	if (clockwise) {
		tap_code(KC_AUDIO_VOL_UP);
	} else {
		tap_code(KC_AUDIO_VOL_DOWN);
	}
}