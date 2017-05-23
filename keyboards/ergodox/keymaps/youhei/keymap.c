#include "youhei.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[L_BASE] = KEYMAP(
		// left hand
		KC_NO, KC_NO, KC_8, KC_9, KC_0, KC_6, KC_NO,
		KC_7, KC_SCLN, KC_G, KC_D, KC_COMM, KC_DOT, KC_BSPC,
		KC_BSLS, KC_S, KC_C, KC_T, KC_A, KC_QUOT,
		KC_NO, KC_J, KC_B, KC_P, KC_O, KC_Q, KC_TAB,
		FN_T(KC_MHEN), KC_NO, KC_NO, KC_LBRC, KC_RBRC,
		// thumb
		GUI_T(KC_ESC), TG(L_PAD),
		CTL_T(KC_CAPS),
		KC_E, OSM(MOD_LSFT), ALT_T(KC_HOME),
		// right hand
		KC_NO, KC_5, KC_1, KC_2, KC_3, KC_NO, KC_CAPS,
		KC_DEL, KC_K, KC_W, KC_H, KC_M, KC_X, KC_4,
		KC_Y, KC_I, KC_N, KC_L, KC_R, KC_GRV,
		KC_ENT, KC_Z, KC_U, KC_F, KC_V, KC_SLSH, KC_NO,
		KC_MINS, KC_EQL, KC_NO, KC_NO, FN_T(KC_HENK),
		// thumb
		TG(L_PAD), GUI_T(KC_KANA),
		CTL_T(KC_INS),
		ALT_T(KC_END), OSM(MOD_LSFT), KC_SPC
	),
	[L_FN] = KEYMAP(
		// left hand
		KC_NO, KC_NO, KC_F8, KC_F9, KC_F10, KC_F6, KC_NO,
		KC_F7, KC_F11, KC_F12, KC_PAUS, KC_PSCR, KC_NO, KC_TRNS,
		KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,
		// thumb
		KC_TRNS, KC_NO,
		KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,
		// right hand
		KC_NO, KC_F5, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO,
		KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_F4,
		KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_APP, KC_NO,
		KC_TRNS, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_SLCK, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
		// thumb
		KC_NO, KC_TRNS,
		KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS
	),
	[L_PAD] = KEYMAP(
		// left hand
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_BTN5, KC_BTN4, KC_NO, KC_TRNS,
		KC_NO, KC_NO, KC_RCLK, KC_MCLK, KC_LCLK, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		// thumb
		KC_TRNS, KC_TRNS,
		KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,
		// right hand
		KC_NO, KC_NLCK, KC_P7, KC_P8, KC_P9, KC_NO, KC_NO,
		KC_NO, KC_PMNS, KC_P4, KC_P5, KC_P6, KC_NO, KC_NO,
		KC_PAST, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_NO,
		KC_NO, KC_PSLS, KC_P0, KC_P0, KC_PDOT, KC_PENT, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		// thumb
		KC_TRNS, KC_TRNS,
		KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS
	),
};
