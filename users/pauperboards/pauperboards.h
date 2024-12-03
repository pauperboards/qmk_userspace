/*
 * Copyright 2020 Jason Chestnut <jason.chestnut@gmail.com>
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
#include QMK_KEYBOARD_H

#include "wrappers.h"

enum userspace_keycodes {
    BASE = SAFE_RANGE,
    NAV,
    SYMBOL,
    NUMBER,
    ADJUST
};

/*
 * Mod-taps.
 */
#define KC_CTLA   MT(MOD_LCTL, KC_A)
#define KC_ALTS   MT(MOD_LALT, KC_S)
#define KC_SFTD   MT(MOD_LSFT, KC_D)
#define KC_GUIF   MT(MOD_LGUI, KC_F)

#define KC_GUIJ   MT(MOD_LGUI, KC_J)
#define KC_SFTK   MT(MOD_LSFT, KC_K)
#define KC_ALTL   MT(MOD_LALT, KC_L)
#define KC_CTLCLN MT(MOD_LCTL, KC_SCLN)

#define KC_SFTLP  MT(MOD_LSFT, KC_LPRN)


/*
 * Key shortcuts.
 */
#define DT_NXT LCTL(KC_RGHT)
#define DT_PRV LCTL(KC_LEFT)

/*
 * Common key combos used in multiple keymaps.
 */

#ifdef COMBO_ENABLE
#include "combos.h"
#endif

