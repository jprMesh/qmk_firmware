#include "atreus62.h"

// Layers
#define DVORAK 0
#define QWERTY 1
#define RAISE 2
#define LOWER 3
#define BDO 4
#define RESETL 5

#define NAVY_SEAL_PASTA "What the fuck did you just fucking say about me, you little bitch? I’ll have you know I graduated top of my class in the Navy Seals, and I’ve been involved in numerous secret raids on Al-Quaeda, and I have over 300 confirmed kills. I am trained in gorilla warfare and I’m the top sniper in the entire US armed forces. You are nothing to me but just another target. I will wipe you the fuck out with precision the likes of which has never been seen before on this Earth, mark my fucking words. You think you can get away with saying that shit to me over the Internet? Think again, fucker. As we speak I am contacting my secret network of spies across the USA and your IP is being traced right now so you better prepare for the storm, maggot. The storm that wipes out the pathetic little thing you call your life. You’re fucking dead, kid. I can be anywhere, anytime, and I can kill you in over seven hundred ways, and that’s just with my bare hands. Not only am I extensively trained in unarmed combat, but I have access to the entire arsenal of the United States Marine Corps and I will use it to its full extent to wipe your miserable ass off the face of the continent, you little shit. If only you could have known what unholy retribution your little “clever” comment was about to bring down upon you, maybe you would have held your fucking tongue. But you couldn’t, you didn’t, and now you’re paying the price, you goddamn idiot. I will shit fury all over you and you will drown in it. You’re fucking dead, kiddo."
#define TABLE_FLIP "(╯°□°）╯︵ ┻━┻"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[DVORAK] = KC_KEYMAP(
    NO, 1,    2,    3,    4,    5,                6,    7,    8,    9,    0,    NO, \
    NO, QUOT, COMM, DOT,  P,    Y,                F,    G,    C,    R,    L,    NO, \
    NO, A,    O,    E,    U,    I,                D,    H,    T,    N,    S,    NO, \
    NO, SCLN, Q,    J,    K,    X,                B,    M,    W,    V,    Z,    NO, \
    NO, TAB,  LALT, LCTL, FN1,  LSFT, BSPC, ENT,  SPC,  FN0,  LGUI, DOWN, FN2,  NO  ),

[QWERTY] = KC_KEYMAP(
    NO, 1,    2,    3,    4,    5,                6,    7,    8,    9,    0,    NO, \
    NO, Q,    W,    E,    R,    T,                Y,    U,    I,    O,    P,    NO, \
    NO, A,    S,    D,    F,    G,                H,    J,    K,    L,    SCLN, NO, \
    NO, Z,    X,    C,    V,    B,                N,    M,    COMM, DOT,  SLSH, NO, \
    NO, TAB,  LALT, LCTL, FN1,  LSFT, BSPC, ENT,  SPC,  FN0,  LGUI, LEFT, FN2,  NO  ),

[RAISE] = KC_KEYMAP(
    NO, MRWD, MPRV, MPLY, MNXT, MFFD,             TRNS, MUTE, VOLD, VOLU, DEL,  NO, \
    NO, TILD, GRV,  LCBR, RCBR, DQUO,             QUOT, EQL,  PLUS, MINS, QUES, NO, \
    NO, ESC,  TAB,  LPRN, RPRN, BSLS,             SLSH, LEFT, DOWN, UP,   RGHT, NO, \
    NO, FN3,  TRNS, LBRC, RBRC, TRNS,             INS,  PIPE, UNDS, TRNS, TRNS, NO, \
    NO, TRNS, TRNS, TRNS, TRNS, TRNS, FN4,  TRNS, TRNS, TRNS, TRNS, DOWN, UP,   NO  ),

[LOWER] = KC_KEYMAP(
    NO, TRNS, TRNS, TRNS, TRNS, TRNS,             FN5,  FN6,  TRNS, TRNS, TRNS, NO, \
    NO, EXLM, AT,   HASH, DLR,  PERC,             CIRC, AMPR, ASTR, LPRN, RPRN, NO, \
    NO, 1,    2,    3,    4,    5,                6,    7,    8,    9,    0,    NO, \
    NO, TRNS, TRNS, TRNS, TRNS, TRNS,             TRNS, DOT,  TRNS, TRNS, TRNS, NO, \
    NO, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, NO  ),

[BDO] = KC_KEYMAP(
    NO, ESC,  2,    3,    4,    5,                6,    NO,   NO,   NO,   NO,   NO, \
    NO, 1,    Q,    W,    E,    R,                7,    Y,    I,    O,    P,    NO, \
    NO, LSFT, A,    S,    D,    F,                8,    G,    H,    J,    K,    NO, \
    NO, T,    O,    I,    C,    M,                9,    B,    N,    M,    L,    NO, \
    NO, LCTL, COMM, SPC,  SPC,  SPC,  TAB,  ENT,  0,    NO,   U,    NO,   FN2,  NO  ),

[RESETL] = KEYMAP(
    KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_FN3,KC_NO  )

};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(RAISE), // Raise layer
    [1] = ACTION_LAYER_MOMENTARY(LOWER), // Lower layer
    [2] = ACTION_LAYER_TOGGLE(BDO), // BDO layer
    [3] = ACTION_LAYER_TOGGLE(RESETL), // RESET layer
    [4] = LCTL(KC_BSPC), // CTRL+Backspace
    [5] = M(0), // what the fuck did you just say
    [6] = M(1) // table flip
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
            case 0:
                SEND_STRING(NAVY_SEAL_PASTA);
                break;
            case 1:
                SEND_STRING(TABLE_FLIP);
                break;
        }
    }
    return MACRO_NONE;
}

static uint8_t qw_dv_swap_state = 0;

bool process_record_user (uint16_t keycode, keyrecord_t *record) {
    if (keycode == KC_LGUI) {
        if (record->event.pressed)
            qw_dv_swap_state |= 0b00000001;
        else
            qw_dv_swap_state &= ~(0b00000001);
    }
    if (keycode == KC_LCTL) {
        if (record->event.pressed)
            qw_dv_swap_state |= 0b00000010;
        else
            qw_dv_swap_state &= ~(0b00000010);
    }

    if (qw_dv_swap_state == 0b00000011) {
        layer_invert(QWERTY);
    }
    return true;
}
