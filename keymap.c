/* Copyright 2020 Ale Muñoz */

#include QMK_KEYBOARD_H
#include QMK_KEYBOARD_CONFIG_H

#include "tap-dance.c"

#define _QWERTY    0
#define _COLEMAK   1
#define _NUMBER    2
#define _SYMBOL    3
#define _MOVE      4
#define _MOVE_LEFT 5

// Layers
#define L_COL TG(_COLEMAK)
#define L_NUM LT(_NUMBER,KC_E)
#define L_SYM LT(_SYMBOL,KC_ENT)
#define L_MOM MO(_MOVE)

// macOS Shortcuts
#define COPY  LWIN(KC_C)
#define PASTE LWIN(KC_V)
#define SHT_SCR LWIN(LSFT(KC_3))
#define SHT_ARE LWIN(LSFT(KC_4))
#define SHT_OPT LWIN(LSFT(KC_5))
#define START LWIN(KC_LEFT)
#define END LWIN(KC_RGHT)

// Nice names
#define Ctrl KC_LCTL
#define Alt KC_LALT
#define Cmd KC_LGUI
#define Shift KC_LSFT

// Mods in home row, using Mod Tap
#define CTL_A MT(MOD_LCTL,KC_A) // CTL_T(KC_A)
#define ALT_S MT(MOD_LALT,KC_S) // ALT_T(KC_S)
#define CMD_D MT(MOD_LGUI,KC_D) // CMD_T(KC_D)
#define SHT_F MT(MOD_LSFT,KC_F)
#define SHT_J MT(MOD_LSFT,KC_J)
#define CMD_K MT(MOD_LGUI,KC_K)
#define ALT_L MT(MOD_LALT,KC_L)
#define CTL_CLN MT(MOD_LCTL,KC_SCLN)

// Home row mods for Colemak
#define ALT_R MT(MOD_LALT,KC_R)
#define CMD_S MT(MOD_LGUI,KC_S)
#define SHT_T MT(MOD_LSFT,KC_T)
#define SHT_N MT(MOD_LSFT,KC_N)
#define CMD_E MT(MOD_LGUI,KC_E)
#define ALT_I MT(MOD_LALT,KC_I)
#define CTL_O MT(MOD_LCTL,KC_O)


#define SPC_1 LT(1,KC_SPC)
#define BSP_1 LT(1,KC_BSPC)
#define SPC_2 LT(2,KC_SPC)
#define BSP_2 LT(2,KC_BSPC)
#define SPC_3 LT(_MOVE,KC_SPC)
#define BSP_3 LT(3,KC_BSPC)
#define SPC_4 LT(4,KC_SPC)
#define BSP_4 LT(4,KC_BSPC)

#define CMD_1 LWIN(KC_1)
#define CMD_2 LWIN(KC_2)
#define CMD_3 LWIN(KC_3)
#define CMD_4 LWIN(KC_4)
#define CMD_5 LWIN(KC_5)

// to be used with Karabiner to launch apps, and other stuff
#define HYPRTAB HYPR_T(KC_TAB)
#define HYPRESC HYPR_T(KC_ESC)

// FN_MO13 - trilayer, layer 1 (3 when held with FN_MO23)
// FN_MO23 - trilayer, layer 2 (3 when held with FN_MO13)

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
