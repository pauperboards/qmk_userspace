/*
 * 
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
enum layers { QWERT = 0,
              NUM,
              SYM,
              NAVI };


#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// Various key code convenience mappings
#define XXX _______

/*
 * Layer-taps.
 */
#define LT_NUM  LT(NUM,  KC_SPC)
#define LT_SYM  LT(SYM,  KC_ENT)
#define LT_NAV  LT(NAVI, KC_BSPC)

/*
 * My standard keymap is based on a 34-key split ortho board. This includes 5 columns and 2 thumb
 * keys per hand. The following macros define the base 34 key map, with any additional keys for a
 * given keyboard left to be defined in that specific keymap.c file.
 */

// Homerow mod macros, one for each hand.
#define HR_L(K1,K2,K3,K4) LCTL_T(K1),LALT_T(K2),LSFT_T(K3),LGUI_T(K4)
#define HR_R(K1,K2,K3,K4) LGUI_T(K1),LSFT_T(K2),LALT_T(K3),LCTL_T(K4)

/**
 * QWERTY
 *
 *      ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 *      │  Q  │  W  │  E  │  R  │  T  │  │  Y  │  U  │  I  │  O  │  P  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │  A  │  S  │  D  │  F  │  G  │  │  H  │  J  │  K  │  L  │  ;  │
 *      ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 *      │  Z  │  X  │  C  │  V  │  B  │  │  N  │  M  │  ,  │  .  │  /  │
 *      └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                        │ SH │ BSP │  │ SPC │ RT │
 *                        └─────┴─────┘  └─────┴─────┘
 */
#define _QWERTY \
KC_Q, KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I,     KC_O,   KC_P,     \
KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K,     KC_L,   KC_SCLN,  \
KC_Z, KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, \
             KC_LSFT, LT_NAV,   LT_NUM, LT_SYM

/**
 * Numbers (ten-key style) - The number layer uses the right thumb keys for 0 and '.', so this layer includes those
 * two keys.
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │  │  +  │  7  │  8  │  9  │     │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ CTL │ ALT │ SFT │ GUI │     │  │  -  │  4  │  5  │  6  │  *  │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │  │  =  │  1  │  2  │  3  │  /  │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │ XXX │  │  0  │  .  │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _NUMBER \
KC_SLSH, KC_7, KC_8, KC_9, KC_PEQL,   _______, _______, _______, _______, _______, \
KC_PLUS, KC_4, KC_5, KC_6, KC_MINS,   _______, KC_LGUI, KC_LSFT, KC_LALT, KC_LCTL, \
KC_PAST, KC_1, KC_2, KC_3, KC_UNDS,   _______, _______, _______, _______, _______, \
                      KC_DOT, KC_0,   _______, _______

/**
 * Symbols - The symbol layer includes a shifted number pad on the right hand, giving access to all the
 * symbols that would be typed by shifted number row on a standard keyboard.
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │  ~  │  `  │  {  │  }  │     │  │     │  &  │  *  │     │  |  │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │  (  │  )  │  @  │  │  -  │  $  │  %  │  ^  │  '  │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │  [  │  ]  │     │  │  _  │  #  │  @  │  !  │  \  │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │     │  │     │     │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _SYMBOL \
KC_TILD, KC_GRV,  KC_LCBR, KC_RCBR, KC_LCBR,   KC_RCBR, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,  \
KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_LPRN,   KC_RPRN, KC_DLR,  KC_PERC, KC_CIRC, KC_BSLS, \
_______, _______, KC_LBRC, KC_RBRC, KC_LBRC,   KC_RBRC, KC_EXLM, KC_AT,   KC_HASH, _______, \
                               KC_NO, KC_NO,   KC_NO, _______

/**
 * Navigation - These are all Nav keys, like arrows, PgUp/PgDn, etc. Nav keys are on the right hand.
 * At the moment, the left hand home row keys are mods for using with the arrows, et. al.
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │     │     │     │     │     │  │     │ End │ Hme │     │     │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ CTL │ ALT │ SFT │ GUI │     │  │    │    │    │    │     │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │     │     │     │     │     │  │     │ PDn │ PUp │     │     │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │     │  │     │     │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _NAVIGATION \
KC_TAB,  KC_ESC,  _______, _______, _______,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, \
KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, _______,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, \
_______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, \
                               KC_NO, KC_NO,   KC_NO, KC_NO

/**
 * Function
 * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
 * │ F10 │ F7  │ F8  │ F9  │     │  │     │     │     │     │ DEL │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ F11 │ F6  │ F5  │ F4  │     │  │     │ GUI │ SFT │ ALT │ CTL │
 * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
 * │ F12 │ F3  │ F2  │ F1  │     │  │     │     │     │     │ RST │
 * └─────┴─────┴─────┼─────┼─────┤  ├─────┼─────┼─────┴─────┴─────┘
 *                   │     │     │  │     │     │
 *                   └─────┴─────┘  └─────┴─────┘
 */
#define _FUNCTION \
KC_F10, KC_F9, KC_F8, KC_F7, KC_DEL,    _______, _______, _______, _______, _______, \
KC_F11, KC_F6, KC_F5, KC_F4, _______,   _______, KC_LGUI, KC_LSFT, KC_LALT, KC_LCTL, \
KC_F12, KC_F3, KC_F2, KC_F1, _______,   _______, _______, _______, _______, QK_BOOT, \
                    _______, _______,   _______, _______


// Set up a basic modtap layer with 34 keys.
#define HRM(k) HR_MODTAP(k)
#define HR_MODTAP( \
     l01, l02, l03, l04, l05,   r01, r02, r03, r04, r05, \
     l06, l07, l08, l09, l10,   r06, r07, r08, r09, r10, \
     l11, l12, l13, l14, l15,   r11, r12, r13, r14, r15, \
                    l16, l17,   r16, r17                 \
) \
     l01, l02, l03, l04,  l05,   r01, r02, r03, r04, r05, \
HR_L(l06, l07, l08, l09), l10,   r06, HR_R(r07, r08, r09, r10), \
     l11, l12, l13, l14,  l15,   r11, r12, r13, r14, r15, \
                    l16,  l17,   r16, r17

// Layout aliases to use in the json file.
#define LAYOUT_34key_w(...) LAYOUT_split_3x5_2(__VA_ARGS__)
#define LAYOUT_corne_w(...) LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_bgrid_w(...) LAYOUT_ortho_4x12_hhkb(__VA_ARGS__)
#define LAYOUT_2x2u_w(...)  LAYOUT_ortho_2x2u(__VA_ARGS__)

// This macro converts the base 34 key layout to 46 keys with 2 blank center columns.
#define C_46(k) CONV_46(k)
#define CONV_46( \
     l01, l02, l03, l04, l05,   r01, r02, r03, r04, r05, \
     l06, l07, l08, l09, l10,   r06, r07, r08, r09, r10, \
     l11, l12, l13, l14, l15,   r11, r12, r13, r14, r15, \
                    l16, l17,   r16, r17                 \
) \
     l01, l02, l03, l04, l05, XXX, XXX, r01, r02, r03, r04, r05, \
     l06, l07, l08, l09, l10, XXX, XXX, r06, r07, r08, r09, r10, \
     l11, l12, l13, l14, l15, XXX, XXX, r11, r12, r13, r14, r15, \
       XXX, KC_ESC, l16, l17, XXX, XXX, r16, r17, XXX, XXX

// Convert the base 34 key layout to a 44 key layout, useful with a 2x2u board
#define C_44(k) CONV_44(k)
#define CONV_44( \
     l01, l02, l03, l04, l05,   r01, r02, r03, r04, r05, \
     l06, l07, l08, l09, l10,   r06, r07, r08, r09, r10, \
     l11, l12, l13, l14, l15,   r11, r12, r13, r14, r15, \
                    l16, l17,   r16, r17                 \
) \
     l01, l02, l03, l04, l05, XXX, XXX, r01, r02, r03, r04, r05, \
     l06, l07, l08, l09, l10, XXX, XXX, r06, r07, r08, r09, r10, \
     l11, l12, l13, l14, l15, XXX, XXX, r11, r12, r13, r14, r15, \
       XXX, KC_ESC, l16, l17,           r16, r17, XXX, XXX


// ######################## -- 3X5+3 -- ######################## //
// 1. Define the LAYOUT macro for the keyboard, if it doesn't already exist. This is defined in json.
// 2. Wrap it in a wrapper with (...) and __VA_ARGS__.
// 3. Define a new layout with all the keys used that redefines the wrapper from #2.
// 4. That new layout will have to be wrapped (in the target keymap file, I suppose).

#define LAYOUT_microdox_layer(...) LAYOUT_split_3x5_3(__VA_ARGS__)

#define LAYOUT_3x53_base_layer( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
              K33, K34, K35, K36, K37, K38            \
) \
LAYOUT_microdox_layer( \
            K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
            K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
            K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
       K33, LT(_NUMBER,K34), K35, K36, LT(_SYMBOL,K37), K38 \
 )
