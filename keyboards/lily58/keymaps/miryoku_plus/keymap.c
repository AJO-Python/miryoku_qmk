#include QMK_KEYBOARD_H
#include <stdio.h>

enum my_keycodes {
  PWD_0 = SAFE_RANGE,
  PWD_1
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // COLEMAK-DH
	[0] = LAYOUT(
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,              KC_J,   KC_L,           KC_U,           KC_Y,           KC_QUOT,        KC_NO,
      KC_NO,       LCTL_T(KC_A),   LALT_T(KC_R),   LGUI_T(KC_S),   LSFT_T(KC_T),   KC_G,              KC_M,   RSFT_T(KC_N),   RGUI_T(KC_E),   RALT_T(KC_I),   RCTL_T(KC_O),   KC_NO,
      KC_NO,       KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,  PWD_0,PWD_1,KC_K,   KC_H,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,
                                   KC_NO,          LT(6,KC_ESC),   LT(4,KC_SPC),   LT(5,KC_TAB),      LT(2,KC_ENT),LT(1,KC_BSPC),LT(3,KC_DEL),KC_NO
      ),
  
  // NAV (backspace)
	[1] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_PGUP,        KC_MPRV,        KC_MPLY,        KC_MNXT,        KC_VOLU,           KC_NO,   KC_PGDN,       KC_PGUP,        KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_VOLD,           KC_LEFT, KC_DOWN,       KC_UP,          KC_RIGHT,       KC_RCTL,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_INS,         KC_NO,          KC_NO, KC_NO,KC_NO,KC_NO,   KC_HOME,       KC_END,         KC_VOLU,        KC_NO,          KC_NO,
                                   KC_NO,          KC_ESC,         KC_SPC,         KC_TAB,            KC_ENT,  LT(1,KC_BSPC), KC_DEL,         KC_NO
      ),

  // BRACKETS (enter)
  [2] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_GT,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_LPRN,        KC_RPRN,        KC_CAPS,           KC_NO,   KC_RSFT,       KC_RGUI,        KC_RALT,        KC_RCTL,        KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_LCBR,        KC_RCBR,        KC_LT, KC_NO,KC_NO,KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                   KC_NO,          KC_ESC,         KC_SPC,         KC_TAB,            LT(2,KC_ENT),KC_BSPC,   KC_DEL,         KC_NO
      ),
	
  // MOUSE (delete)
  [3] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_WH_U,        KC_WH_L,        KC_MS_U,        KC_WH_R,        KC_VOLU,           KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_WH_D,        KC_MS_L,        KC_MS_D,        KC_MS_R,        KC_VOLD,           KC_NO,   KC_RSFT,       KC_RGUI,        KC_RALT,        KC_RCTL,        KC_NO,
      KC_NO,       KC_NO,          KC_MRWD,        KC_MPLY,        KC_MFFD,        KC_MUTE,KC_NO,KC_NO,KC_NO,  KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                   KC_NO,          KC_ESC,         KC_SPC,         KC_TAB,            KC_ENT,  KC_BSPC,       LT(3,KC_DEL),   KC_NO
      ),
	


  // NUM (space)
  [4] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_7,          KC_8,           KC_9,           KC_GRV,         KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,             KC_0,    KC_4,          KC_5,           KC_6,           KC_EQL,         KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, KC_NO,KC_NO,KC_0,    KC_1,          KC_2,           KC_3,           KC_BSLS,        KC_NO,
                                   KC_NO,          KC_ESC,         LT(4,KC_SPC),   KC_TAB,            KC_MINS, KC_BSPC,      KC_DEL,           KC_NO
      ),
	
  // PUNCTUATION (enter) 
  [5] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_AMPR,       KC_ASTR,        KC_NUBS,        KC_GRV,        KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,             KC_NO,   KC_DLR,        KC_PERC,        KC_CIRC,        KC_PLUS,        KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, KC_NO,KC_NO,KC_NO,   KC_EXLM,       KC_AT,          KC_NUHS,        KC_PIPE,        KC_NO,
                                   KC_NO,          KC_NO,          KC_NO,          LT(5,KC_ENT),      KC_MINS, KC_COLN,       KC_NO,          KC_NO
      ),
	
  // FUNCTION (esc)
  [6] = LAYOUT(    
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,   KC_NO,          KC_NO,         KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_PSCR, KC_F7,          KC_F8,         KC_F9,          KC_F12,         KC_NO,
      KC_NO,       KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,             KC_SCRL, KC_F4,          KC_F5,         KC_F6,          KC_F11,         KC_NO,
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, KC_NO,KC_NO,KC_PAUS, KC_F1,          KC_F2,         KC_F3,          KC_F10,         KC_NO,
                                   KC_NO,          LT(6,KC_ESC),   KC_NO,          KC_NO,             KC_NO,   KC_NO,          TG(7),         KC_NO
      ),

  // GAMING 
	[7] = LAYOUT(
      KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,             KC_NO,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
      KC_NO,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,              KC_Y,   KC_U,           KC_I,           KC_O,           KC_P,        KC_NO,
      KC_NO,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,              KC_H,   KC_J,           KC_K,           KC_L,           KC_SCLN,    KC_NO,
      KC_NO,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,  KC_NO,KC_NO,KC_K,   KC_H,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,
                                   KC_NO,          KC_ESC,         KC_SPC,         KC_TAB,            KC_ENT, KC_BSPC,        TG(7),           KC_NO
      )
  
};


bool should_process_keypress(void) {
  return true;
}


//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE
  oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    //return rotation;
  }

  // When you add source files to SRC in rules.mk, you can use functions.
  const char *read_layer_state(void);
  const char *read_logo(void);
  void set_keylog(uint16_t keycode, keyrecord_t *record);
  const char *read_keylog(void);
  const char *read_keylogs(void);

  //const char *read_mode_icon(bool swap);
  //const char *read_host_led_state(void);
  //void set_timelog(void);
  //const char *read_timelog(void);

  bool oled_task_user(void) {
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
    return false;
  }
#endif // OLED_ENABLE


//static bool shift_held = false;
uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint16_t my_comma_timer;
  static uint16_t my_dot_timer;
  static uint16_t my_slash_timer;

  if (record->event.pressed) {
    #ifdef OLED_ENABLE
      set_keylog(keycode, record);
    #endif
    // set_timelog();
  }

  mod_state = get_mods();
  switch (keycode) {
    
    // - on tap -> _ on hold
    case KC_MINS: {
      if (record->event.pressed) {
        my_slash_timer = timer_read();
      } else {
        if (timer_elapsed(my_slash_timer) < TAPPING_TERM) {
          SEND_STRING("-");
        } else {
          SEND_STRING("_");
          }
        return true;
      }
      return false;
    }

    // / on tap -> \ on hold
    case KC_SLSH: {
      if (record->event.pressed) {
        my_slash_timer = timer_read();
      } else {
        if (timer_elapsed(my_slash_timer) < TAPPING_TERM) {
          SEND_STRING("/");
        } else {
          if (mod_state & MOD_MASK_SHIFT) {
            SEND_STRING("!");
          } else {
            register_code(KC_NUBS);
            unregister_code(KC_NUBS);
          }
        }
        return true;
      }
      return false;
    }

    // , on tap -> ; on hold
    case KC_COMM: {
      if (record->event.pressed) {
        my_comma_timer = timer_read();
      } else {
        if (timer_elapsed(my_comma_timer) < TAPPING_TERM) {
          SEND_STRING(",");
        } else {
          SEND_STRING(";");
        }
        return true;
      }
      return false;
    }

    // . on tap -> : on hold
    case KC_DOT: {
      if (record->event.pressed) {
        my_dot_timer = timer_read();
      } else {
        if (timer_elapsed(my_dot_timer) < TAPPING_TERM) {
          SEND_STRING(".");
        } else {
          SEND_STRING(":");
        }
        return true;
      }
      return false;
    }

    // shift ' == "
    case KC_QUOT: {
      if (record->event.pressed) {
        if (mod_state & MOD_MASK_SHIFT) {
          register_code(KC_2);
        } else {
          register_code(KC_QUOT);
        }
      } else {
          unregister_code(KC_2);
          unregister_code(KC_QUOT);
      }
      return false;
    }
    
    // shift backtick == ```
    case KC_GRV: {
      if (record->event.pressed) {
        if (mod_state & MOD_MASK_SHIFT) {
          del_mods(MOD_MASK_SHIFT);
          SEND_STRING("```");
          set_mods(mod_state);
        } else {
          register_code(KC_GRV);
        }
      } else {
          unregister_code(KC_GRV);
      }
      return false;
    }

    // PWD_0
    case PWD_0: {
      if (record->event.pressed) {
        if (mod_state & MOD_MASK_CTRL) {
          del_mods(MOD_MASK_CTRL);
          SEND_STRING("{{PWD_0}}"); 
          set_mods(mod_state);
          register_code(KC_ENTER); 
          unregister_code(KC_ENTER);
        } else {
          register_code(KC_PSCR);
          unregister_code(KC_PSCR);
        }
      } 
      return false;
    }

    // PWD_1
    case PWD_1: {
      if (record->event.pressed) {
        if (mod_state & MOD_MASK_CTRL) {
          del_mods(MOD_MASK_CTRL);
          SEND_STRING("{{PWD_1}}"); 
          set_mods(mod_state);
          register_code(KC_ENTER); 
          unregister_code(KC_ENTER);
        } else {
          add_mods(MOD_MASK_SHIFT);
          register_code(KC_QUOT);
          unregister_code(KC_QUOT);
          set_mods(mod_state);
        }
      }
      return false;
    }

    // end switch case
    return true;
  };
  return true;
}
