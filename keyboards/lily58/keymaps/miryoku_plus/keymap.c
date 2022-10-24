#include QMK_KEYBOARD_H
#include <stdio.h>

//char wpm_str[10];
//uint_t wpm_graph_timer = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // COLEMAK-DH
	[0] = LAYOUT(
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,              KC_J,   KC_L,           KC_U,           KC_Y,           KC_QUOT,        KC_NO,
      KC_NO,       LCTL_T(KC_A),   LALT_T(KC_R),   LGUI_T(KC_S),   LSFT_T(KC_T),   KC_G,              KC_M,   RSFT_T(KC_N),   RGUI_T(KC_E),   RALT_T(KC_I),   RCTL_T(KC_O),   KC_NO,
      KC_NO,       KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,  KC_NO,KC_NO,KC_K,   KC_H,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,
                                   KC_NO,          LT(6,KC_ESC),   LT(4,KC_SPC),   LT(5,KC_TAB),      LT(2,KC_ENT),LT(1,KC_BSPC),LT(3,KC_DEL),KC_NO
      ),
  
  // NAV (backspace)
	[1] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_PGUP,        KC_MPRV,        KC_MPLY,       KC_MNXT,        KC_VOLU,           KC_NO,   KC_PGDN,       KC_PGUP,        KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_VOLD,           KC_LEFT, KC_UP,         KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_INS,         KC_NO,          KC_NO, KC_NO,KC_NO,KC_NO,   KC_HOME,       KC_END,         KC_VOLU,        KC_NO,          KC_NO,
                                   KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   LT(1,KC_BSPC), KC_NO,          KC_NO
      ),

  // BRACKETS (enter)
  [2] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_GT,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_LPRN,        KC_RPRN,        KC_CAPS,           KC_NO,   KC_RSFT,       KC_RGUI,        KC_RALT,        KC_RCTL,        KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_LCBR,        KC_RCBR,        KC_LT, KC_NO,KC_NO,KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                   KC_NO,          KC_BTN3,        KC_BTN1,        KC_BTN2,           LT(2,KC_ENT),KC_NO,     KC_NO,          KC_NO
      ),
	
  // MOUSE (delete)
  [3] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_WH_U,        KC_WH_L,        KC_MS_U,        KC_WH_R,        KC_VOLU,           KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_WH_D,        KC_MS_L,        KC_MS_D,        KC_MS_R,        KC_VOLD,           KC_NO,   KC_RSFT,       KC_RGUI,        KC_RALT,        KC_RCTL,        KC_NO,
      KC_NO,       KC_NO,          KC_MRWD,        KC_MPLY,        KC_MFFD,        KC_MUTE,KC_NO,KC_NO,KC_NO,  KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                   KC_NO,          KC_BTN3,        KC_BTN1,        KC_BTN2,           KC_NO,   KC_NO,         LT(3,KC_DEL),   KC_NO
      ),
	
  // NUM (escape)
  [4] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_7,          KC_8,           KC_9,           KC_GRV,         KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,             KC_NO,   KC_4,          KC_5,           KC_6,           KC_EQL,         KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, KC_NO,KC_NO,KC_NO,   KC_1,          KC_2,           KC_3,           KC_BSLS,        KC_NO,
                                   KC_NO,          KC_NO,          LT(4,KC_SPC),   KC_NO,             KC_MINS, KC_SCLN,       KC_0,           KC_NO
      ),
	
  // PUNCTUATION (space)
  [5] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_AMPR,       KC_ASTR,        KC_NUBS,        KC_TILD,        KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,             KC_NO,   KC_DLR,        KC_PERC,        KC_CIRC,        KC_PLUS,        KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, KC_NO,KC_NO,KC_NO,   KC_EXLM,       KC_AT,          KC_NUHS,        KC_PIPE,        KC_NO,
                                   KC_NO,          KC_NO,          KC_NO,          LT(5,KC_SPC),      KC_UNDS, KC_COLN,       KC_NO,          KC_NO
      ),
	
  // FUNCTION (tab)
  [6] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,          KC_NO,         KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_PSCR, KC_F7,          KC_F8,         KC_F9,          KC_F12,         KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,             KC_SCRL, KC_F4,          KC_F5,         KC_F6,          KC_F11,         KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, KC_NO,KC_NO,KC_PAUS, KC_F1,          KC_F2,         KC_F3,          KC_F10,         KC_NO,
                                   KC_NO,          LT(6,KC_ESC),   KC_NO,          KC_NO,             KC_NO,   KC_NO,          KC_NO,         KC_NO
      )
};


//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE
  //oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    //if (!is_keyboard_master())
    //  return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
   // return rotation;
  //}

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

//  bool oled_task_user(void) {
    //if (is_keyboard_master()) {
      // If you want to change the display of OLED, you need to change here
  //  oled_write_ln(read_layer_state(), false);
  //  oled_write_ln(read_keylog(), false);
  //  oled_write_ln(read_keylogs(), false);
      //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
      //oled_write_ln(read_host_led_state(), false);
      //oled_write_ln(read_timelog(), false);
    //} else {
      //oled_write(read_logo(), false);
    //}
//    return false;
  //}

  //sprintf(wpm_str, "WPM: %03d", get_current_wpm());
  //oled_write_P(PSTR("\n"), false);
  //oled_write(wpm_str, false);

  //static uint8_t zero_bar_count = 0;
	//static uint8_t bar_count = 0;

	//static void render_wpm_graph(void) {
	//	uint8_t bar_height = 0;
	//	uint8_t bar_segment = 0;

	//	if (wpm_graph_timer == 0) {
	//		wpm_graph_timer = timer_read();
	//		return;
	//		}
	//	if(timer_elapsed(wpm_graph_timer) > 500) {
	//		wpm_graph_timer = timer_read();

	//		if(OLED_DISPLAY_HEIGHT == 64)
	//			bar_height = get_current_wpm() / 2;
	//		if(OLED_DISPLAY_HEIGHT == 32)
	//			bar_height = get_current_wpm() / 4;
	//		if(bar_height > OLED_DISPLAY_HEIGHT)
	//			bar_height = OLED_DISPLAY_HEIGHT;

	//		if(bar_height == 0) {
	//				// keep track of how many zero bars we have drawn.  If
	//				// there is a whole screen worth, turn the display off and 
	//				// wait until there is something to do
	//				if (zero_bar_count > OLED_DISPLAY_WIDTH) {
	//					oled_off();
	//					return;
	//				}
	//				zero_bar_count++;
	//		} else
	//			zero_bar_count=0;

	//	oled_pan(false);
	//	bar_count++;
	//	for (uint8_t i = (OLED_DISPLAY_HEIGHT / 8); i > 0; i--) {
	//		if (bar_height > 7) {
	//			if (i % 2 == 1 && bar_count % 3 == 0)
	//				bar_segment = 254;
	//				else
	//				bar_segment = 255;
	//				bar_height -= 8;
	//			} else {
	//		switch (bar_height) {
	//				case 0:
	//			bar_segment = 0;
	//			break;

	//				case 1:
	//			bar_segment = 128;
	//			break;

	//				case 2:
	//			bar_segment = 192;
	//			break;

	//				case 3:
	//			bar_segment = 224;
	//			break;

	//				case 4:
	//			bar_segment = 240;
	//			break;

	//				case 5:
	//			bar_segment = 248;
	//			break;

	//				case 6:
	//			bar_segment = 252;
	//			break;

	//				case 7:
	//			bar_segment = 254;
	//			break;
	//		}
	//		bar_height = 0;

	//		if (i % 2 == 1 && bar_count % 3 == 0)
	//				bar_segment++;
	//			}
	//			oled_write_raw_byte(bar_segment, (i-1) * OLED_DISPLAY_WIDTH);
	//}
  //  }
//}
//
//bool oled_task_user(void) {
//    if (is_keyboard_master()) {
//			render_wpm_graph();
//    } else {
//        render_wpm_graph();
//    }
//return false;
//}
//
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    #ifdef OLED_ENABLE
      set_keylog(keycode, record);
    #endif
    // set_timelog();
  }
  switch (keycode) {
    case LT(0, KC_QUOTE):
      if (record->tap.count && record->event.pressed) {
          tap_code16(KC_QUOTE);
      } else if (record->event.pressed) {
          register_code(KC_LSFT);
          tap_code16(KC_QUOTE);
          unregister_code(KC_LSFT);
      }
      return false;
      }

  return true;
}
