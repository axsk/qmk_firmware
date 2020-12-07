// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    KC_NP,             KC_NP,             LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
  ),
  [NAVR] = LAYOUT_miryoku(
    RESET,   KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NP,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    KC_NP,    KC_ALGR, KC_NP,    KC_NP,    KC_NP,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_ENT,  KC_BSPC, KC_DEL,  KC_NP,    KC_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NP,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NP,
    KC_NP,    KC_ALGR, KC_NP,    KC_NP,    KC_NP,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NP,
    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,    KC_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RESET,   KC_NP,    KC_NP,    KC_NP,    KC_NP,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NP,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NP,
    KC_NP,    KC_ALGR, KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,
    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_NP,    KC_MSTP, KC_MPLY, KC_MUTE, KC_NP,    KC_NP
  ),
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_NP,   KC_NP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_NP
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
    KC_NP,   KC_NP,   KC_APP,  KC_SPC,  KC_TAB,  KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  ),
  [NSL] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
    KC_NP,   KC_NP,   KC_DOT,  KC_0,    KC_MINS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
    KC_NP,   KC_NP,   KC_GT,   KC_RPRN, KC_UNDS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  ),
  [GAMING] = LAYOUT(
KC_T,KC_Y,KC_Q,KC_W,KC_E,KC_R,              KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,DF(BASE), \
KC_G,KC_H,KC_A,KC_S,KC_D,KC_F,   KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
KC_B,KC_N,KC_Z,KC_X,KC_C,KC_V,   KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
                     KC_LALT,   KC_LSFT,   KC_LCTL,   KC_ESC,   KC_TAB,   KC_LGUI \
)

};
