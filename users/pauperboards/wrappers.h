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

#include "layers.h"

// clang-format off
// Layout aliases to use in the json file.
#define LAYOUT_34key_w(...) LAYOUT_split_3x5_2(__VA_ARGS__)
#define LAYOUT_crkbd_w(...) LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_bgrid_w(...) LAYOUT_ortho_4x12_hhkb(__VA_ARGS__)
#define LAYOUT_grd2u_w(...) LAYOUT_ortho_2x2u(__VA_ARGS__)

// This macro converts the base 34 key layout to 46 keys with 2 blank center columns.
#define C_46(k) CONV_46(k)
#define CONV_46( \
    l01, l02, l03, l04, l05,   r01, r02, r03, r04, r05, \
    l06, l07, l08, l09, l10,   r06, r07, r08, r09, r10, \
    l11, l12, l13, l14, l15,   r11, r12, r13, r14, r15, \
                   l16, l17,   r16, r17 \
) \
l01, l02, l03, l04, l05, XXX,  XXX, r01, r02, r03, r04, r05, \
l06, l07, l08, l09, l10, XXX,  XXX, r06, r07, r08, r09, r10, \
l11, l12, l13, l14, l15, XXX,  XXX, r11, r12, r13, r14, r15, \
  XXX, KC_ESC, l16, l17, XXX,  XXX, r16, r17, XXX, XXX

// Convert the base 34 key layout to a 44 key layout, useful with a 2x2u board
#define C_44(k) CONV_44(k)
#define CONV_44( \
    l01, l02, l03, l04, l05,   r01, r02, r03, r04, r05, \
    l06, l07, l08, l09, l10,   r06, r07, r08, r09, r10, \
    l11, l12, l13, l14, l15,   r11, r12, r13, r14, r15, \
                   l16, l17,   r16, r17 \
) \
l01, l02, l03, l04, l05, XXX,  XXX, r01, r02, r03, r04, r05, \
l06, l07, l08, l09, l10, XXX,  XXX, r06, r07, r08, r09, r10, \
l11, l12, l13, l14, l15, XXX,  XXX, r11, r12, r13, r14, r15, \
       XXX, KC_ESC, l16, l17,  r16, r17, XXX, XXX

// ######################## -- 3X5+3 -- ######################## //
// 1. Define the LAYOUT macro for the keyboard, if it doesn't already exist. This is defined in json.
// 2. Wrap it in a wrapper with (...) and __VA_ARGS__.
// 3. Define a new layout with all the keys used that redefines the wrapper from #2.
// 4. That new layout will have to be wrapped (in the target keymap file, I suppose).

#define LAYOUT_microdox_layer(...) LAYOUT_split_3x5_3(__VA_ARGS__)

#define LAYOUT_3x53_base_layer(K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K33, K34, K35, K36, K37, K38) LAYOUT_microdox_layer(K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K33, LT(_NUMBER, K34), K35, K36, LT(_SYMBOL, K37), K38)

// Convert 3x5_2 to 42-key
#define C_42(k) CONV_42(k)
#define CONV_42( \
         l01, l02, l03, l04, l05,   r01, r02, r03, r04, r05, \
         l06, l07, l08, l09, l10,   r06, r07, r08, r09, r10, \
         l11, l12, l13, l14, l15,   r11, r12, r13, r14, r15, \
                        l16, l17,   r16, r17                 \
) \
UG_NEXT, l01, l02, l03, l04, l05,   r01, r02, r03, r04, r05, KC_BSPC, \
UG_TOGG, l06, l07, l08, l09, l10,   r06, r07, r08, r09, r10, KC_SCLN, \
UG_PREV, l11, l12, l13, l14, l15,   r11, r12, r13, r14, r15, KC_ENT,  \
                   XXX, l16, l17,   r16, r17, XXX
