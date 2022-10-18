#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,              KC_J,   KC_L,           KC_U,           KC_Y,           KC_QUOT,        KC_NO,
      KC_NO,       LCTL_T(KC_A),   LALT_T(KC_R),   LGUI_T(KC_S),   LSFT_T(KC_T),   KC_G,              KC_M,   RSFT_T(KC_N),   RGUI_T(KC_E),   RALT_T(KC_I),   RCTL_T(KC_O),   KC_NO,
      KC_NO,       KC_Z,           KC_X,           KC_C,           KC_D,           KC_V, KC_NO,KC_NO, KC_K,   KC_H,           KC_COMM,KC_DOT,         KC_SLSH,   KC_NO,
                                            KC_NO, LT(6,KC_TAB),   LT(4,KC_ESC),   LT(5,KC_SPC),      LT(2,KC_ENT),   LT(1,KC_BSPC),  LT(3,KC_DEL), KC_NO
      ),

	[1] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,KC_NO,
      KC_NO,       KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_NO,             KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,KC_NO,
      KC_NO,       KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RGHT,        KC_NO,             KC_NO,  KC_RSFT,        KC_RGUI,        KC_RALT,        KC_RCTL,KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_INS,         KC_NO,          KC_NO, KC_NO,KC_NO,KC_NO,  KC_MPLY,        KC_VOLD,        KC_VOLU,        KC_NO,KC_NO,
                                   KC_NO,          KC_NO,          KC_NO,          KC_NO,   KC_NO,    LT(1,KC_BSPC),           KC_NO, KC_NO
      ),

  [2] = LAYOUT(    
      KC_NO,       KC_NO,   KC_NO,   KC_ NO,     KC_NO,     KC_NO,           KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_LBRC,   KC_RBRC,   KC_GT,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_LPRN,   KC_RPRN,   KC_CAPS,           KC_NO,   KC_RSFT,   KC_RGUI,   KC_RALT,   KC_RCTL,   KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_LCBR,   KC_RCBR,   KC_LT, KC_NO,KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                            KC_NO,       KC_BTN3,   KC_BTN1,   KC_BTN2,                      LT(2,KC_ENT),   KC_NO,           KC_NO, KC_NO
      ),
	
  [3] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,            KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_WH_U,   KC_WH_L,   KC_MS_U,   KC_WH_R,   KC_VOLU,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      KC_NO,       KC_WH_D,   KC_MS_L,   KC_MS_D,   KC_MS_R,   KC_VOLD,           KC_NO,   KC_RSFT,   KC_RGUI,   KC_RALT,   KC_RCTL,   KC_NO,
      KC_NO,       KC_NO,     KC_MRWD,   KC_MPLY,   KC_MFFD,   KC_MUTE, KC_NO,KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                            KC_NO,       KC_BTN3, KC_BTN1,   KC_BTN2,                    KC_NO,     KC_NO,     LT(3,KC_DEL), KC_NO
      ),
	
  [4] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,            KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_7,   KC_8,   KC_9,   KC_GRV,   KC_NO,
      KC_NO,       KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LSFT,   KC_NO,           KC_NO,   KC_4,   KC_5,   KC_6,   KC_EQL,   KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,KC_NO,           KC_NO,   KC_1,   KC_2,   KC_3,   KC_BSLS,   KC_NO,
      KC_NO,       KC_NO,   LT(4,KC_SPC),  KC_NO,                                   KC_MINS,   KC_SCLN,           KC_0, KC_NO
      ),
	
  [5] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,            KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_AMPR,   KC_ASTR,   KC_NUBS,   KC_TILD,   KC_NO,
      KC_NO,       KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LSFT,   KC_NO,           KC_NO,   KC_DLR,   KC_PERC,   KC_CIRC,   KC_PLUS,   KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,KC_NO,           KC_NO,   KC_EXLM,   KC_AT,   KC_NUHS,   KC_PIPE,   KC_NO,
      KC_NO,       KC_NO,   KC_NO,   LT(5,KC_SPC),   KC_UNDS,   KC_SCLN,           KC_NO, KC_NO
      ),
	
  [6] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,            KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_PSCR,   KC_F7,   KC_F8,   KC_F9,   KC_F12,   KC_NO,
      KC_NO,       KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LSFT,   KC_NO,           KC_SCRL,   KC_F4,   KC_F5,   KC_F6,   KC_F11,   KC_NO,
      KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,KC_NO,           KC_PAUS,   KC_F1,   KC_F2,   KC_F3,   KC_F10,   KC_NO,
      KC_NO,       LT(6,KC_ESC),   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO, KC_NO
      )
};


//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
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

bool oled_task_user(void) {
  //if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  //} else {
    //oled_write(read_logo(), false);
  //}
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
