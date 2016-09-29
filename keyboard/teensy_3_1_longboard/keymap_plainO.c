#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * Qwerty
	 * ,-------------------------------------------------------------------------------------------------.
	 * | Tab  |   Q  |   W  |   E  |   R  |   T  |      | Del  |   Y  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Esc  |   A  |   S  |   D  |   F  |   G  |      | PtScr|   H  |   J  |   K  |   L  |   ;  |  "   |
	 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Brite| Ctrl | Alt  | GUI  |Lower | Shift|Enter |      | Space|Raise | Left | Down |  Up  |Right |
	 * `-------------------------------------------------------------------------------------------------'
	 */
    [0] =
    KEYMAP( TAB,    Q,    W,    E,    R,    T,   No,  DEL,    Y,    U,    I,    O,    P, BSPC, \
            ESC,    A,    S,    D,    F,    G,   No, PSCR,    H,    J,    K,    L, SCLN, QUOT,  \
           LSFT,    Z,    X,    C,    V,    B,   No,   No,    N,    M, COMM,  DOT,SLASH,ENTER, \
             NO, LCTL, LALT, LGUI,  FN0,SHIFT,ENTER,   No,  SPC,   NO, LEFT, DOWN,   UP, RGHT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     * |     |Gui|Alt  |         Space         |Alt  |Gui|   |     |
     * `-----------------------------------------------------------'
     */ 
    [1] = 
    KEYMAP( PWR,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,  INS,   \
           CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS,   UP, TRNS, BSPC,   \
           TRNS, VOLD, VOLU, MUTE, TRNS, TRNS, PAST, PSLS, HOME, PGUP, LEFT, RGHT, PENT, TRNS,   \        \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PPLS, PMNS,  END, PGDN, DOWN, TRNS, TRNS, TRNS),   
};

const action_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

