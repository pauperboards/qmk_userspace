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

const uint16_t PROGMEM pc_tab[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM pc_esc[] = {KC_A, KC_S, COMBO_END};

const uint16_t PROGMEM pc_del[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM pc_bsp[] = {KC_O, KC_P, KC_LSFT, COMBO_END};

const uint16_t PROGMEM pc_lcbr[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM pc_rcbr[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM pc_lprn[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM pc_rprn[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM pc_lbrc[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM pc_rbrc[] = {KC_M, KC_COMMA, COMBO_END};

// Combo Mods
const uint16_t PROGMEM pb_lgui[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM pb_lctl[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM pb_lalt[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM pb_rgui[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM pb_rctl[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM pb_ralt[] = {KC_LT, KC_GT, COMBO_END};
/** Number **/
/*const uint16_t PROGMEM pn_lgui[] = {KC_F7, KC_F8, COMBO_END};*/
/*const uint16_t PROGMEM pn_lctl[] = {KC_F4, KC_F5, COMBO_END};*/
/*const uint16_t PROGMEM pn_lalt[] = {KC_F1, KC_F2, COMBO_END};*/
/*const uint16_t PROGMEM pn_rgui[] = {KC_8, KC_9, COMBO_END};*/
/*const uint16_t PROGMEM pn_rctl[] = {KC_5, KC_6, COMBO_END};*/
/*const uint16_t PROGMEM pn_ralt[] = {KC_2, KC_3, COMBO_END};*/
/** Symbol - left hand is transparent, so only have to do right. **/
/*const uint16_t PROGMEM ps_rgui[] = {KC_ASTR, KC_MINS, COMBO_END};*/
/*const uint16_t PROGMEM ps_rctl[] = {KC_PERC, KC_CIRC, COMBO_END};*/
/*const uint16_t PROGMEM ps_ralt[] = {KC_AT, KC_HASH, COMBO_END};*/
/** Navigation  - only really need left hand. **/
/*const uint16_t PROGMEM pv_lgui[] = {KC_MUTE, KC_VOLU, COMBO_END};*/
/** pv_lctl is on transparent keys, so we don't redefine it here. **/
/*const uint16_t PROGMEM pv_lalt[] = {KC_MPLY, KC_MNXT, COMBO_END};*/

const uint16_t PROGMEM pc_qot[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM pc_ent[] = {KC_DOT, KC_SLSH, COMBO_END};

const uint16_t PROGMEM pc_rst[] = {KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, COMBO_END}; // W/E/R//U/I/O to send a QK_BOOT

combo_t key_combos[] = {[PC_TAB] = COMBO(pc_tab, KC_TAB),
                        [PC_ESC] = COMBO(pc_esc, KC_ESC),
                        [PC_DEL] = COMBO(pc_del, KC_DEL),
                        [PC_BSP] = COMBO(pc_del, KC_BSPC),

                        [PC_LCBR] = COMBO(pc_lcbr, S(KC_LBRC)),
                        [PC_RCBR] = COMBO(pc_rcbr, S(KC_RBRC)),
                        [PC_LPRN] = COMBO(pc_lprn, KC_LPRN),
                        [PC_RPRN] = COMBO(pc_rprn, KC_RPRN),
                        [PC_LBRC] = COMBO(pc_lbrc, KC_LBRC),
                        [PC_RBRC] = COMBO(pc_rbrc, KC_RBRC),

                        /** Combo Mods **/
                        [PB_LGUI] = COMBO(pb_lgui, KC_LGUI),
                        [PB_LCTL] = COMBO(pb_lctl, KC_LCTL),
                        [PB_LALT] = COMBO(pb_lalt, KC_LALT),
                        [PB_RGUI] = COMBO(pb_rgui, KC_RGUI),
                        [PB_RCTL] = COMBO(pb_rctl, KC_RCTL),
                        [PB_RALT] = COMBO(pb_ralt, KC_RALT),
                        /*[PN_LGUI] = COMBO(pn_lgui, KC_LGUI),*/
                        /*[PN_LCTL] = COMBO(pn_lctl, KC_LCTL),*/
                        /*[PN_LALT] = COMBO(pn_lalt, KC_LALT),*/
                        /*[PN_RGUI] = COMBO(pn_rgui, KC_RGUI),*/
                        /*[PN_RCTL] = COMBO(pn_rctl, KC_RCTL),*/
                        /*[PN_RALT] = COMBO(pn_ralt, KC_RALT),*/
                        /*[PS_RGUI] = COMBO(ps_rgui, KC_RGUI),*/
                        /*[PS_RCTL] = COMBO(ps_rctl, KC_RCTL),*/
                        /*[PS_RALT] = COMBO(ps_ralt, KC_RALT),*/
                        /*[PV_LGUI] = COMBO(pv_lgui, KC_LGUI),*/
                        /*[PV_LALT] = COMBO(pv_lalt, KC_LALT),*/

                        [PC_QUOTE] = COMBO(pc_qot, KC_QUOT),
                        [PC_ENTER] = COMBO(pc_ent, KC_ENT),
                        [PC_RESET] = COMBO(pc_rst, QK_BOOT)};
