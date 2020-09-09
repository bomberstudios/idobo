/* Copyright 2020 Ale Muñoz */

#include QMK_KEYBOARD_H
#include QMK_KEYBOARD_CONFIG_H

#include "tap-dance.c"
#include "keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_5x15(
    XXXXXXX,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   XXXXXXX,XXXXXXX,XXXXXXX,KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   XXXXXXX,
    TD_ESC, KC_Q,   KC_W,   _______,KC_R,   KC_T,   XXXXXXX,XXXXXXX,XXXXXXX,KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
    KC_TAB, CTL_A,  ALT_S,  CMD_D,  SHT_F,  KC_G,   KC_7,   KC_8,   KC_9,   KC_H,   SHT_J,  CMD_K,  ALT_L,  CTL_CLN,KC_QUOT,
    TD_IOS, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_4,   KC_5,   KC_6,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_ENT,
    _______,_______,_______,_______,L_NUM,  KC_BSPC,KC_1,   KC_2,   KC_3,   SPC_3,  L_SYM,  KC_ENT, _______,_______,_______
  ),
  [_NUMBER] = LAYOUT_ortho_5x15(
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  _______,_______,_______,KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, _______,
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   _______,_______,_______,KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL,
    _______,CMD_1,  CMD_2,  CMD_3,  CMD_4,  CMD_5,  _______,_______,_______,_______,KC_4,   KC_5,   KC_6,   _______,_______,
    _______,CMD_1,  CMD_2,  CMD_3,  CMD_4,  CMD_5,  _______,_______,_______,_______,KC_1,   KC_2,   KC_3,   _______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_0,   KC_0,   _______,_______,_______
  ),
  [_SYMBOL] = LAYOUT_ortho_5x15(
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  _______,_______,_______,KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, _______,
    _______,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,_______,_______,_______,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
    _______,_______,_______,KC_GRV, KC_QUOT,KC_COLN,_______,_______,_______,KC_BSLS,KC_MINS,KC_EQL, KC_LBRC,KC_RBRC,_______,
    _______,_______,_______,KC_TILD,KC_DQUO,KC_SCLN,_______,_______,_______,KC_PIPE,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PENT,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_PENT,_______,_______,_______
  ),
  [_MOVE] = LAYOUT_ortho_5x15(
    RESET,  DM_REC1,DM_REC2,DM_PLY1,DM_PLY2,DM_RSTP,_______,_______,_______,_______,_______,_______,KC_WAKE,KC_POWER,KC_SLEP,
    _______,_______,KC_BTN1,KC_MS_U,KC_BTN2,_______,_______,_______,_______,_______,START,  KC_UP,  END,    KC__VOLUP,_______,
    _______,_______,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,KC_RGHT,TD_IOS, _______,
    _______,Ctrl,   Alt,    Cmd,    Shift,  _______,_______,_______,_______,_______,SHT_SCR,SHT_ARE,SHT_OPT,KC__VOLDOWN,_______,
    _______,_______,_______,L_COL,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
  ),
  [_MOVE_LEFT] = LAYOUT_ortho_5x15(
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,START,  KC_UP,  END    ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,SHT_SCR,SHT_ARE,SHT_OPT,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
  ),
  [_COLEMAK] = LAYOUT_ortho_5x15(
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,KC_Q,   KC_W,   KC_F,   KC_P,   KC_G,   _______,_______,_______,KC_J,   KC_L,   KC_U,   KC_Y,   KC_SCLN,_______,
    _______,CTL_A,  ALT_R,  CMD_S,  SHT_T,  KC_D,   _______,_______,_______,KC_H,   SHT_N,  CMD_E,  ALT_I,  CTL_O,  _______,
    _______,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   _______,_______,_______,KC_K,   KC_M,   _______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
  ),
};
