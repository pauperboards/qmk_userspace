/*
 * Copyright 2023 Jason Chestnut <pauperboards@gmail.com> @pauperboards
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

// The layers that are defined below.
enum userspace_layers { _BASE, _NUM, _SYM, _NAV };

/*
 * Layers.
 */
#define L_NUM MO(_NUM)
#define L_SYM MO(_SYM)
#define L_NAV MO(_NAV)

#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// Various key code convenience mappings
#define YYY _______

/*
 * My standard keymap is based on a 34-key split ortho board. This includes 5 columns and 2 thumb
 * keys per hand. The following macros define the base 34 key map, with any additional keys for a
 * given keyboard left to be defined in that specific keymap.c file.
 */

// Homerow mod macros, one for each hand.
// #define HR_L(K1, K2, K3, K4) LCTL_T(K1), LALT_T(K2), LSFT_T(K3), LGUI_T(K4)
// #define HR_R(K1, K2, K3, K4) LGUI_T(K1), LSFT_T(K2), LALT_T(K3), LCTL_T(K4)

// clang-format off
/**
 * QWERTY - The base keymap is standard QWERTY. Thumb keys handle space, shift, and layer
 * keys. Combos are used a lot for things like brackets and Escape.
 *
 *      ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 *      │  Q  │  W  │  E  │  R  │  T  │  │  Y  │  U  │  I  │  O  │  P  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │  A  │  S  │  D  │  F  │  G  │  │  H  │  J  │  K  │  L  │  ;  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │  Z  │  X  │  C  │  V  │  B  │  │  N  │  M  │  ,  │  .  │  /  │
 *      └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                        │ NUM │ SFT │  │ SPC │ SYM │
 *                        └─────┴─────┘  └─────┴─────┘
 */
#define _QWERTY \
KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U,   KC_I,     KC_O,   KC_P,     \
KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J,   KC_K,     KC_L,   KC_SCLN,  \
KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,   KC_COMMA, KC_DOT, KC_SLASH, \
                    L_NUM, KC_LSFT, KC_SPC, L_SYM

/**
 * Numbers (ten-key style) - The number layer uses the right thumb keys for 0 and '.', so this layer includes those
 * two keys.
 *      ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 *      │ F10 │ F7  │ F8  │ F9  │     │  │  +  │  7  │  8  │  9  │  _  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │ F11 │ F4  │ F5  │ F6  │     │  │  =  │  4  │  5  │  6  │  -  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │ F12 │ F1  │ F2  │ F3  │     │  │  *  │  1  │  2  │  3  │  /  │
 *      └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                        │  X  │     │  │  0  │  .  │
 *                        └─────┴─────┘  └─────┴─────┘
 */
#define _NUMBER \
KC_F10, KC_F7, KC_F8, KC_F9, _______, KC_PPLS, KC_7, KC_8, KC_9, KC_UNDS, \
KC_F11, KC_F4, KC_F5, KC_F6, _______, KC_PEQL, KC_4, KC_5, KC_6, KC_MINS, \
KC_F12, KC_F1, KC_F2, KC_F3, _______, KC_PAST, KC_1, KC_2, KC_3, KC_SLSH, \
                    _______, _______, KC_0, LT(_NAV, KC_PDOT)

/**
 * Symbols - The symbol layer includes a shifted number pad on the right hand, giving access to all the
 * symbols that would be typed by shifted number row on a standard keyboard.
 *      ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 *      │  ~  │  `  │     │     │     │  │     │  &  │  *  │  -  │  |  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │     │     │     │     │     │  │     │  $  │  %  │  ^  │  '  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │     │     │     │     │     │  │     │  !  │  @  │  #  │  \  │
 *      └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                        │     │     │  │     │  X  │
 *                        └─────┴─────┘  └─────┴─────┘
 */
#define _SYMBOL \
KC_TILD, KC_GRV,  _______, _______, _______, _______, KC_AMPR, KC_ASTR, KC_MINS, KC_PIPE, \
KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, _______, _______, KC_DLR,  KC_PERC, KC_CIRC, KC_QUOT, \
_______, _______, _______, _______, _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_BSLS, \
                             L_NAV, _______, _______, _______

/**
 * Navigation - These are all Nav keys, like arrows, PgUp/PgDn, etc. Nav keys are on the right hand.
 * At the moment, the left hand home row keys are mods for using with the arrows, et. al.
 *      ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 *      │ RGU │    │  󰖁  │    │     │  │ Hme │ PDn │ PUp │ End │     │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │ RGT │ RGP │ RGN │     │     │  │    │    │    │    │     │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │ RGD │  󰑟  │  󰐎  │  󰈑  │     │  │  󰮲  │     │  󰧨  │  󰮰  │     │
 *      └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *         Media/RGB      │  X  │     │  │     │  X  │ Directions/Mission Control
 *                        └─────┴─────┘  └─────┴─────┘
 */
#define _NAVIGATION \
RM_VALU, KC_VOLD, KC_MUTE, KC_VOLU, _______, KC_HOME, KC_PGDN,    KC_PGUP, KC_END,   _______, \
RM_TOGG, RM_PREV, RM_NEXT, _______, _______, KC_LEFT, KC_DOWN,    KC_UP,   KC_RIGHT, _______, \
RM_VALD, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, C(KC_LEFT), KC_MCTL, C(KC_RIGHT),  _______, \
                           _______, _______, _______, _______

/**
 * Navigation/UG - These are all Nav keys, like arrows, PgUp/PgDn, etc. This layer is exactly like the
 * previous one, but has RGB Underglow controls in place of the RGB Matrix conrols for different keyboards
 * that have one capability vs. the other.
 *      ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 *      │ RGU │    │  󰖁  │    │     │  │ Hme │ PDn │ PUp │ End │     │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │ UGT │ uGP │ RGN │     │     │  │    │    │    │    │     │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │ RGD │  󰑟  │  󰐎  │  󰈑  │     │  │  󰮲  │     │  󰧨  │  󰮰  │     │
 *      └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *         Media/UG       │  X  │     │  │     │  X  │ Directions/Mission Control
 *                        └─────┴─────┘  └─────┴─────┘
 */
#define _NAVUNDERGLOW \
UG_HUEU, KC_VOLD, KC_MUTE, KC_VOLU, _______, KC_HOME, KC_PGDN,    KC_PGUP, KC_END,   _______, \
UG_TOGG, UG_SATU, UG_SATD, UG_VALU, UG_VALD, KC_LEFT, KC_DOWN,    KC_UP,   KC_RIGHT, _______, \
UG_HUED, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, C(KC_LEFT), KC_MCTL, C(KC_RIGHT),  _______, \
                           _______, _______, _______, _______

// clang-format on
