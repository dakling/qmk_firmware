/*
 * Good on you for modifying your layout, this is the most nonQMK layout you will come across
 * There are three modes, Steno (the default), QWERTY (Toggleable) and a Momentary symbol layer
 *
 * Don't modify the steno layer directly, instead add chords using the keycodes and macros
 * from sten.h to the layout you want to modify.
 *
 * Observe the comment above processQWERTY!
 *
 * http://docs.gboards.ca
 */

#include QMK_KEYBOARD_H
#include "sten.h"
#include "keymap_steno.h"
/* #include "keymap_german.h" */
#include "sendstring_german.h"

// Proper Layers
#define FUNCT   (LSD | LK | LP | LH)
#define MEDIA   (LSD | LK | LW | LR)
#define MOVE    (ST1 | ST2)

// QMK Layers
#define STENO_LAYER   0

/* Keyboard Layout
 * ,---------------------------------.    ,------------------------------.
 * | FN  | LSU | LFT | LP | LH | ST1 |    | ST3 | RF | RP | RL | RT | RD |
 * |-----+-----+-----+----+----|-----|    |-----|----+----+----+----+----|
 * | RNO | LSD | LK  | LW | LR | ST2 |    | ST4 | RR | BB | RG | RS | RZ |
 * `---------------------------------'    `------------------------------'
 *                   ,---------------,    .---------------.
 *                   | LNO | LA | LO |    | RE | RU | PWR |
 *                   `---------------'    `---------------'
 */

// Note: You can only use basic keycodes here!
// P() is just a wrapper to make your life easier.
// PC() applies the mapping to all of the StenoLayers.
//   To overload, declare it with P() first
//   Be sure to enable in rules.mk and see colemak-dh for usage 
//
// FN is unavailable. That is reserved for system use.
// Chords containing PWR are always available, even in steno mode.
//
// http://docs.gboards.ca
uint32_t processQwerty(bool lookup) {
    // TM1
    P( ST3, SEND_STRING("0"); SEND(KC_ENT));
    P( ST4, SEND_STRING("0,5"); SEND(KC_ENT));
    P( RF, SEND_STRING("1"); SEND(KC_ENT));
    P( RR, SEND_STRING("1,5"); SEND(KC_ENT));
    P( RP, SEND_STRING("2"); SEND(KC_ENT));
    P( RB, SEND_STRING("2,5"); SEND(KC_ENT));
    P( RL, SEND_STRING("3"); SEND(KC_ENT));
    P( RG, SEND_STRING("3,5"); SEND(KC_ENT));
    P( RT, SEND_STRING("4"); SEND(KC_ENT));
    P( RS, SEND_STRING("4,5"); SEND(KC_ENT));
    P( RD, SEND_STRING("5"); SEND(KC_ENT));
    P( RZ, SEND_STRING("5,5"); SEND(KC_ENT));
    P( RE, SEND_STRING("6"); SEND(KC_ENT));
    P( RU, SEND_STRING("6,5"); SEND(KC_ENT));

    P( PWR, SEND(KC_ESC);SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT); SEND(KC_RGHT););

    // Specials
    /* P( RT  | RS  | RD  | RZ | LNO,        SEND_STRING(VERSION); SEND_STRING(__DATE__)); */
    /* P( LNO | RNO | LA  | LO | RE | RU,    SEND(KC_MPLY)); */
    /* P( LFT | LK  | LP  | LW,              REPEAT()); */
    /* P( ST1 | ST2 | LW  | ST4,             SEND(KC_BSPC)); */

    // Mouse Keys
    /* P( LO  | LSD | LK,    CLICK_MOUSE(KC_MS_BTN2)); */
    /* P( LO  | LR  | LW,    CLICK_MOUSE(KC_MS_BTN1)); */

    // Thumb Chords
    /* P( LA  | LO  | RE  | RU,    SEND(KC_CAPS)); */
    /* P( LA  | RU,                SEND(KC_ESC)); */
    /* P( LO  | RE,                SEND(KC_LCTL)); */
    /* P( LNO | RNO | LA | RU,     SEND(KC_LCTL); SEND(KC_LSFT)); */
    /* P( LNO | LA  | RE,          SEND(KC_LCTL); SEND(KC_LSFT); SEND(KC_LALT)); */

    // Mods
    /* P( RT | RD   | RS | RZ,    SEND(KC_LGUI)); */
    /* P( RT | RD,                SEND(KC_LCTL)); */
    /* P( RS | RZ,                SEND(KC_LALT)); */
    /* P( LA | LNO,               SEND(KC_LCTL)); */
    /* P( LA | LO,                SEND(KC_LALT)); */

    return 0;
}

// "Layers"
// Steno layer should be first in your map.
// When PWR | FN | ST3 | ST4 is pressed, the layer is increased to the next map. You must return to STENO_LAYER at the end.
// If you need more space for chords, remove the two gaming layers.
// Note: If using NO_ACTION_TAPPING, LT will not work!

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Main layer, everything goes through here
    [STENO_LAYER] = LAYOUT_georgi(
        STN_FN,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,       STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        STN_N7, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,       STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                                   STN_N1,  STN_A,   STN_O,         STN_E,   STN_U,   STN_PWR
    ),
};

// Don't fuck with this, thanks.
size_t keymapsCount  = sizeof(keymaps)/sizeof(keymaps[0]);
