#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
  _MOUSE,
  _ARROWS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | GESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | TG(1)| LALT |LGUI  | /Space  /       \Enter \  |Backsp|KC_ASTG| TG(2) |
 *                   |      |      |      |/       /         \      \ |      |       |       |
 *                   `----------------------------'           '------''----------------------'
 */

 [_QWERTY] = LAYOUT(
  QK_GESC,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_KP_EQUAL,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTRL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                    TG(_LOWER), KC_LALT, KC_LGUI, KC_SPC, KC_ENT, KC_BSPC, KC_ASTG, TG(_RAISE)
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_GRV, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
  _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  ),

    /* Mouse
   */
  [_MOUSE] = LAYOUT( \
  XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
  XXXXXXX, KC_BTN1, KC_BTN3, KC_BTN2, KC_WH_U, XXXXXXX,                   KC_BTN1, KC_BTN3, KC_BTN2, KC_WH_U, XXXXXXX, _______, \
  _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,                   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_R, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_R, _______,\
                             _______, _______, _______, _______, _______,  _______, _______, _______ \
  ),

  /* Arrows
   */
  [_ARROWS] = LAYOUT( \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX, XXXXXXX, _______, \
  _______, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN4, XXXXXXX,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, _______,\
                             _______, _______, _______, _______, KC_SPC,  _______, _______, _______ \
  )

};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

/*bool oled_task_user(void) {
  oled_write(read_logo(), false);
  return;
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}*/

static void print_status_narrow(void) {
    oled_write_ln_P(PSTR("<3"), false);

    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE\n"), false);

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("qwerty"), false);
            break;

        default:
            oled_write_P(PSTR("undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);

    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("main"), false);
            break;

        case _RAISE:
            oled_write_P(PSTR("raise"), false);
            break;

        case _LOWER:
            oled_write_P(PSTR("low"), false);
            break;

        case _MOUSE:
            oled_write_P(PSTR("mouse"), false);
            break;

        case _ARROWS:
            oled_write_P(PSTR("arrow"), false);
            break;

        default:
            oled_write_ln_P(PSTR("undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);

}


bool oled_task_user(void) {
  oled_write(read_logo(), false);
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        oled_write(read_logo(), false);
    }
    return false;
}
#endif

#ifdef PIMORONI_TRACKBALL_ENABLE
void pointing_device_task() {
    report_mouse_t mouse_report = pointing_device_get_report();
    /*if (is_keyboard_master()) {
		bool fast_scroll = (get_highest_layer(layer_state) == _SYM);
		process_mouse(&mouse_report, fast_scroll);
    }*/
	
	if (host_keyboard_led_state().caps_lock) {
		trackball_set_rgbw(200,100,0,0);
	}
	else {
		switch (get_highest_layer(layer_state)) {
			case _QWERTY:
				 trackball_set_rgbw(150,0,0,0);
				break;
			case _LOWER:
				trackball_set_rgbw(130,0,170,0);
				break;
			case _RAISE:
				trackball_set_rgbw(0,0,150,0);
				break;
			case _MOUSE:
				 trackball_set_rgbw(0,170,130,0);
				break;
			case _ARROWS:
				 trackball_set_rgbw(0,150,0,0);
				break;
			case _ADJUST:
				 trackball_set_rgbw(0,0,0,150);
				break;
			default:
				trackball_set_rgbw(0,0,0,150);
		}
    }

    if (layer_state_is(_ARROWS)) {
        trackball_set_scrolling(true);
    } else {
        trackball_set_scrolling(false);
    }

    pointing_device_set_report(mouse_report);
    pointing_device_send();
}
#endif


/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // regular keycodes

        // custom keycodes
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
    }
    return true;
}*/
