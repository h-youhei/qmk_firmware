#include "youhei.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[L_BASE] = KEYMAP(
		// left hand
		KC_NO, KC_7, KC_8, KC_9, KC_0, KC_6, KC_ESC,
		KC_LBRC, KC_X, KC_C, KC_L, KC_P, KC_V, KC_BSPC,
		KC_QUOT, KC_O, KC_S, KC_R, KC_N, KC_H,
		KC_GRV, KC_Q, KC_J, KC_COMM, KC_F, KC_B, KC_EQL,
		KC_RCLK, KC_LCLK, KC_LGUI, KC_LALT, KC_LCTL,
		// thumb
		KC_MHEN, KC_NO,
		KC_NO,
		LSFT_T(KC_SPC), FN_T(KC_ENT), S(KC_Y),
		// right hand
		KC_INS, KC_5, KC_1, KC_2, KC_3, KC_4, KC_NO,
		KC_DEL, KC_K, KC_G, KC_U, KC_Y, KC_Z, KC_RBRC,
		KC_D, KC_T, KC_E, KC_I, KC_A, KC_SCLN,
		KC_TAB, KC_W, KC_M, KC_DOT, KC_MINS, KC_SLSH, KC_BSLS,
		KC_RCTL, KC_RALT, KC_RGUI, KC_PAUS, KC_NO,
		// thumb
		KC_NO, KC_CAPS,
		KC_NO,
		KC_RSFT, FN_T(KC_HENK), RSFT_T(KC_SPC)
	),
	[L_FN] = KEYMAP(
		// left hand
		KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F6, KC_NO,
		KC_F11, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,
		// thumb
		KC_NO, KC_NO,
		KC_NO,
		KC_TRNS, KC_TRNS, KC_NO,
		// right hand
		KC_NO, KC_F5, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,
		KC_NO, KC_NO, KC_LEFT, KC_RGHT, KC_NO, KC_NO, KC_F12,
		KC_HOME, KC_DOWN, KC_UP, KC_END, KC_APP, KC_SLCK,
		KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,
		// thumb
		KC_NO, KC_NO,
		KC_NO,
		KC_NO, KC_TRNS, KC_TRNS
	),
};
