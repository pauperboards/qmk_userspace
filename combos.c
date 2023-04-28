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
#include "combos.h"

const uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM pc_tab  [] = { KC_Q, KC_W, COMBO_END };
const uint16_t PROGMEM pc_esc  [] = { KC_A, KC_S, COMBO_END };

const uint16_t PROGMEM pc_del  [] = { KC_O, KC_P, COMBO_END };

const uint16_t PROGMEM pc_lcbr [] = { KC_E, KC_R, COMBO_END };
const uint16_t PROGMEM pc_rcbr [] = { KC_U, KC_I, COMBO_END };
const uint16_t PROGMEM pc_lprn [] = { KC_D, KC_F, COMBO_END };
const uint16_t PROGMEM pc_rprn [] = { KC_J, KC_K, COMBO_END };
const uint16_t PROGMEM pc_lbrc [] = { KC_C, KC_V, COMBO_END };
const uint16_t PROGMEM pc_rbrc [] = { KC_N, KC_M, COMBO_END };

const uint16_t PROGMEM pc_qot  [] = { KC_L, KC_SCLN, COMBO_END };

const uint16_t PROGMEM pc_rst  [] = { KC_E, KC_R, KC_U, KC_I, COMBO_END }; // K/C/U/I to send a QK_BOOT

combo_t key_combos[] = {
    COMBO(pc_tab,  KC_TAB),
    COMBO(pc_esc,  KC_ESC),
    COMBO(pc_del,  KC_DEL),

    COMBO(pc_lcbr, S(KC_LBRC)),
    COMBO(pc_rcbr, S(KC_RBRC)),
    COMBO(pc_lprn, KC_LPRN),
    COMBO(pc_rprn, KC_RPRN),
    COMBO(pc_lbrc, KC_LBRC),
    COMBO(pc_rbrc, KC_RBRC),

    COMBO(pc_qot, KC_QUOT),
    COMBO(pc_rst, QK_BOOT),
};
