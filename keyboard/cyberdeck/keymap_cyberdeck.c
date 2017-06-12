#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    { //  C1       C2       C3       C4        C5       C6       C7       C8
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_4,   KC_7,   KC_1   }, // R1
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_5,   KC_8,   KC_2   }, // R2
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_3,   KC_6,   KC_0  }, // R3
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R4
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R5
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R6
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R7
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R8
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R9
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R10
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }, // R11
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO   }  // R12
    }
};
const action_t PROGMEM fn_actions[] = {};
