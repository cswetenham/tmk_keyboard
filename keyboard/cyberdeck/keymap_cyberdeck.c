#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    { //  C1       C2       C3       C4        C5       C6       C7       C8
        { KC_5,    KC_T,    KC_G,    KC_B,     KC_RGHT, KC_F4,   KC_F7,   KC_F1   }, // R1
        { KC_4,    KC_R,    KC_F,    KC_V,     KC_NO,   KC_F5,   KC_F8,   KC_F2   }, // R2
        { KC_3,    KC_E,    KC_D,    KC_C,     KC_LEFT, KC_F3,   KC_F6,   KC_ESC  }, // R3
        { KC_2,    KC_W,    KC_S,    KC_X,     KC_NUBS, KC_DEL,  KC_END,  KC_NO   }, // R4
        { KC_1,    KC_Q,    KC_A,    KC_Z,     KC_GRV,  KC_BSPC, KC_HOME, KC_NO   }, // R5
        { KC_EQL,  KC_TAB,  KC_CAPS, KC_LSFT,  KC_NO,   KC_RCTL, KC_LALT, KC_NO   }, // R6
        { KC_MINS, KC_NUHS, KC_QUOT, KC_RSFT,  KC_NO,   KC_LGUI,  KC_ENT,  KC_NO   }, // R7
        { KC_0,    KC_P,    KC_SCLN, KC_SLSH,  KC_RBRC, KC_PGUP, KC_RCTL, KC_NO   }, // R8
        { KC_9,    KC_O,    KC_L,    KC_DOT,   KC_LBRC, KC_PGDN, KC_SPC,  KC_NO   }, // R9
        { KC_8,    KC_I,    KC_K,    KC_COMM,  KC_DOWN, KC_PSCR, KC_SLCK, KC_F12  }, // R10
        { KC_7,    KC_U,    KC_J,    KC_M,     KC_NO,   KC_F10,  KC_F11,  KC_F9   }, // R11
        { KC_6,    KC_Y,    KC_H,    KC_N,     KC_UP,   KC_BTN1, KC_BTN2, KC_PAUS }  // R12
    }
};
const action_t PROGMEM fn_actions[] = {};
