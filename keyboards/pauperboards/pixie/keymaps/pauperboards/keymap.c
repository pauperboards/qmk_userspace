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

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NUMBER,
    _NAV
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

/*
 * Layer-taps.
 */
#define LT_NUM  LT(_NUMBER, KC_BSPC)
#define LT_NAV  LT(_NAV,    KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* BASE
     * ,----------------------------------+    +----------------------------------.
     * |   Q  |   W  |   E  |   R  |   T  |    |   Y  |   U  |   I  |   O  |   P  |
     * |------+------+------+------+------|    |------+------+------+------+------|
     * |  cA  |  aS  |  sD  |  gF  |   G  |    |   H  |  gJ  |  sK  |  aL  |  c;  |
     * |------+------+------+------+------|    |------+------+------+------+------|
     * |   Z  |   X  |   C  |   V  |   B  |    |   N  |   M  |   ,  |   .  |   /  |
     * `------+------+------+------+------|    |------+------+------+------+------'
     *               | TAB  | ESC  | BSPC |    | SPC  | ENT  |      |
     *               `--------------------+    +--------------------'
     */
    [_BASE] = LAYOUT(
    KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,     KC_O,    KC_P,
    KC_CTLA, KC_ALTS, KC_SFTD,  KC_GUIF, KC_G,   KC_H,   KC_GUIJ, KC_SFTK,  KC_ALTL, KC_CTLCLN,
    KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,   KC_N,   KC_M,    KC_COMMA, KC_DOT,  KC_SLASH,
                      KC_TAB,   LT_NAV,  LT_NUM, KC_SPC, KC_ENT,  _______
    ),

    /* Numbers (ten-key style)
     * ,----------------------------------+    +----------------------------------.
     * |      |      |      |      |      |    |   +  |   7  |   8  |   9  |      |
     * |------+------+------+------+------|    |------+------+------+------+------|
     * | Ctrl | Alt  | Shft | GUI  |      |    |   -  |   4  |   5  |   6  |   *  |
     * |------+------+------+------+------|    |------+------+------+------+------|
     * |      |      |      |      |      |    |   =  |   1  |   2  |   3  |   /  |
     * `------+------+------+------+------|    |------+------+------+------+------'
     *               |      |      |XXXXXX|    |   0  |   .  |      |
     *               `--------------------+    +--------------------'
     */
    [_NUMBER] = LAYOUT(
    _______,  _______,  _______, _______,  _______, KC_PPLS,  KC_7,     KC_8,     KC_9,     _______,
    KC_LCTL,  KC_LALT,  KC_LSFT, KC_LGUI,  _______, KC_PMNS,  KC_4,     KC_5,     KC_6,     KC_ASTR,
    _______,  _______,  _______, _______,  _______, KC_PEQL,  KC_1,     KC_2,     KC_3,     KC_SLSH,
                        _______, _______,  KC_NO,   KC_0,     KC_DOT,   _______
    ),

    /* Navigation
     * ,----------------------------------+    +----------------------------------.
     * |      |      |      |      |      |    |      | End  | Home |      |      |
     * |------+------+------+------+-------    |------+------+------+------+------|
     * | LCTL | LALT | LSFT | LGUI |      |    | Left | Down |  Up  |Right |      |
     * |------+------+------+------+------|    |------+------+------+------+------|
     * |      |      |      |      |      |    |      | PgDn | PgDn |      |      |
     * `------+------+------+------+------|    |------+------+------+------+------'
     *               |      |XXXXXX|      |    |      |      |      |
     *               `--------------------+    +--------------------'
     */
    [_NAV] = LAYOUT(
    _______,  _______,  _______,  _______,  _______, _______,  KC_END,   KC_HOME,  _______,  _______,
    KC_LCTL,  KC_LALT,  KC_LSFT,  KC_LGUI,  _______, KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,
    _______,  _______,  _______,  _______,  _______, _______,  KC_PGDN,  KC_PGUP,  _______,  _______,
                        _______,  _______,  _______, _______,  _______,  _______
    ),
};
