// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │ ; │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ A │ R │ S │ T │ G │       │ M │ N │ E │ I │ O │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ D │ V │       │ H │ K │ , │ . │ / │ ' │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Alt├───┐           ┌───┤GUI│
      *               └───┤Ctl├───┐   ┌───┤Spc├───┘
      *                   └───┤MO1│   │MO2├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,     KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                   KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_BSPC,
        KC_ESC,     KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                   KC_M,    KC_N,    KC_E,    KC_I,    KC_O,     KC_ENTER,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                   KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,  KC_QUOT,
                                        KC_LALT, KC_LCTRL, MO(1),          MO(2), KC_SPC, KC_LGUI
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│MO3│   │ U │ ` │Cal│       │ = │ 7 │ 8 │ 9 │ 0 │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│CAD│ L │ D │ R │BRU│       │ - │ 4 │ 5 │ 6 │ [ │ ] │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│MUT│VLD│VLU│PLY│BRD│       │ 0 │ 1 │ 2 │ 3 │ / │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Alt├───┐           ┌───┤TRN│
      *               └───┤Ctl├───┐   ┌───┤Spc├───┘
      *                   └───┤TRN│   │TG2├───┘
      *                       └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
        KC_TAB,     MO(3),                  KC_NO,      KC_UP,      KC_GRV,     KC_CALC,            KC_EQL,     KC_7,    KC_8,  KC_9,   KC_0,       KC_BSPC,
        KC_ESC,     LCTL(LALT(KC_DEL)),     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_BRIU,            KC_MINS,    KC_4,    KC_5,  KC_6,   KC_LBRC,    KC_RBRC,
        KC_LSFT,    KC_MUTE,                KC_VOLD,    KC_VOLU,    KC_MPLY,    KC_BRID,            KC_0,       KC_1,    KC_2,  KC_3,   KC_SLSH,    KC_NO,
                                                        KC_LALT, KC_LCTRL, KC_TRNS,              TG(2), KC_SPC, KC_TRNS
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │   │MSU│   │   │       │   │MS1│MS3│MS2│   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│   │MSL│MSD│MSR│   │       │WHL│WHD│WHU│WHR│   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│   │   │   │   │   │       │   │   │   │   │   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Alt├───┐           ┌───┤   │
      *               └───┤Ctl├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │TO0├───┘
      *                       └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_NO,      KC_NO,  KC_NO,      KC_MS_U,    KC_NO,      KC_NO,          KC_NO,      KC_BTN1,    KC_BTN3,    KC_BTN2,    KC_NO,      KC_NO,
        KC_ESC,     KC_NO,  KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_NO,          KC_WH_L,    KC_WH_D,    KC_WH_U,    KC_WH_R,    KC_NO,      KC_NO,
        KC_LSFT,    KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                            KC_LALT, KC_LCTRL, KC_NO,               TO(0), KC_NO, KC_NO
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │TRN│   │   │   │   │       │   │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │   │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │   │   │   │   │   │RST│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [3] = LAYOUT_split_3x6_3(
        KC_NO,  KC_TRNS,  KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  QK_BOOT,
                                            KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
    )
};
