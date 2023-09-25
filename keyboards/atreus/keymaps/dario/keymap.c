// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
/* #include "g/keymap_combo.h" */
#include "keymap_german.h"
#include "sendstring_german.h"

// IDEAS
// - LaTeX layer

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _RS 1
#define _LW 2
#define _MS 3
#define _TM 4

#define MO_RS LT(_RS, KC_SPC)
#define MO_LW LT(_LW, KC_SPC)
#define MO_LWA LT(_LW, KC_TAB)
#define MO_RSA LT(_RS, KC_BSPC)
// home row mods
// default layer
#define MOD_A MT(MOD_LGUI, KC_A)
#define MOD_S MT(MOD_LALT, KC_S)
#define MOD_D MT(MOD_LCTL, KC_D)
#define MOD_F MT(MOD_LSFT, KC_F)

#define MOD_J MT(MOD_RSFT, KC_J)
#define MOD_K MT(MOD_RCTL, KC_K)
#define MOD_L MT(MOD_LALT, KC_L)
#define MOD_MINS MT(MOD_LGUI, DE_MINS)

// raise layer
#define MOD_ESC MT(MOD_LGUI, KC_ESC)
#define MOD_4 MT(MOD_LALT, KC_4)
#define MOD_5 MT(MOD_LCTL, KC_5)
#define MOD_6 MT(MOD_LSFT, KC_6)

#define MOD_DOWN MT(MOD_RSFT, KC_DOWN)
#define MOD_UP MT(MOD_RCTL, KC_UP)
#define MOD_RGHT MT(MOD_LALT, KC_RGHT)
#define MOD_PLUS MT(MOD_LGUI, DE_PLUS)

// lower layer
#define MOD_BSPC MT(MOD_LGUI, KC_BSPC)
#define VIM_W C(KC_RGHT)
#define VIM_B C(KC_LEFT)
#define VIM_GG C(KC_HOME)
#define VIM_G C(KC_END)

// override
/* const key_override_t vim_g_key_override = */
/*     ko_make_basic(MOD_MASK_SHIFT, VIM_GG, VIM_G);  // Shift . is ? */

/* const key_override_t** key_overrides = (const key_override_t*[]){ */
/*     &vim_g_key_override, */
/*     NULL */
/* }; */

// tap dance
/* enum { */
/*     TD_V, */
/*     /\* TD_I, *\/ */
/* }; */

/* void td_v(qk_tap_dance_state_t *state, void *user_data) { */
/*     if (state->count == 1) { */
/*         tap_code16(KC_V); */
/*     } else { */
/*         tap_code16(KC_V); */
/*         clear_mods(); */
/*         tap_code16(KC_E); */
/*         reset_tap_dance(state); */
/*     } */
/* } */

/* qk_tap_dance_action_t tap_dance_actions[] = { */
/*     // Tap once for Escape, twice for Caps Lock */
/*     [TD_V] = ACTION_TAP_DANCE_FN(td_v), */
/*     /\* [TD_I] = ACTION_TAP_DANCE_FN(td_i), *\/ */
/* }; */

/* #define TD_V TD(TD_V) */
/* /\* #define TD_I TD(TD_I) *\/ */

// combos
#include "./combos.c"

/*Left Win Key larger Tapping Term*/
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A):
            return TAPPING_TERM + 50; // Recommended
        default:
            return TAPPING_TERM;
    }
}

/* #include "./tm.c" */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( /* Qwerty */
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    MOD_A,   MOD_S,   MOD_D,   MOD_F,   KC_G,                      KC_H,    MOD_J,   MOD_K,   MOD_L,   MOD_MINS,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    DE_COMM, DE_DOT,  S(DE_SS) ,
    S(KC_EQL), MO(_MS),  KC_LGUI,  MO_LW,   MO_RSA, KC_LCTL, KC_LALT, MO_LW,  MO_RS, KC_LSFT, KC_RGUI, KC_EQL
  ),

  [_RS] = LAYOUT( /* [> RAISE <] */
    DE_CIRC,  KC_7,    KC_8,   KC_9,    KC_0,                      KC_F1,   KC_F2,    KC_F3,   KC_F4,    KC_F5 ,
    MOD_ESC,  MOD_4,   MOD_5,  MOD_6,   DE_UDIA,                   KC_LEFT, MOD_DOWN, MOD_UP,  MOD_RGHT, MOD_PLUS,
    DE_ODIA,  KC_1  ,  KC_2,   KC_3,    DE_ADIA,                   DE_LBRC, DE_RBRC,  DE_LCBR, DE_RCBR,  DE_HASH ,
    DE_PIPE,  KC_DELETE, KC_LGUI,KC_TRNS, KC_BSPC, KC_CAPS_LOCK, KC_LALT, KC_TAB,  KC_TRNS, KC_LSFT,  DE_MINS, DF(_TM) ),

  [_LW] = LAYOUT( /* [> LOWER <] */
    DE_CIRC,   VIM_W,   DE_EURO,   KC_MS_WH_DOWN,   KC_MS_WH_UP,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
    DE_AT,  KC_MS_BTN3, KC_MS_BTN2, KC_MS_BTN1, VIM_GG,                     VIM_G,   KC_SPC, KC_TAB, KC_ENT, DE_TILD ,
    QK_BOOT,  KC_VOLU, KC_PGDN,  KC_PGUP,   VIM_B,                   KC_NO, DE_MICR, DE_LABK,   DE_RABK, DE_BSLS  ,
    KC_MENU, KC_VOLD, KC_MUTE, KC_TRNS, KC_BSPC, KC_LCTL, KC_LALT, KC_TAB,  KC_TRNS, KC_LSFT, KC_SLCT, KC_PAUS ),

  [_MS] = LAYOUT( /* [> MOUSE <] */
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_MS_WH_DOWN,   KC_MS_WH_UP,   KC_NO,   KC_NO  ,
    MOD_LGUI,  MOD_LALT, MOD_LCTL, MOD_LSFT, KC_NO,                     KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_NO ,
    KC_NO,  KC_NO, KC_NO,  KC_NO,   KC_NO,                    KC_MS_BTN4, KC_MS_BTN1,   KC_MS_BTN2, KC_MS_BTN3  ,  KC_NO,
    KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO )

  /* , */
  /* [_TM] = LAYOUT( */
  /*     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO, KC_LEFT, KC_NO,   KC_NO,   KC_NO  , */
  /*     SS_0, SS_1, SS_2, SS_3, SS_4,                                  SS_5, SS_6, SS_7, SS_8, SS_9, */
  /*     SS_05, SS_15, SS_25, SS_35, SS_45,                             SS_55, SS_65, SS_75, SS_85, SS_95, */
  /*     KC_NO, KC_NO, KC_NO, SS_0, SS_05, KC_NO,                       SS_GO, KC_NO,  SS_05, KC_NO, KC_NO ,DF(_QW)) */
};
