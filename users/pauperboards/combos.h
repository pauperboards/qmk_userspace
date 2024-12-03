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
#include "quantum.h"

/*
 * Common key combos used in multiple keymaps.
 */
enum combo_events {
    PC_TAB,
    PC_ESC,
    PC_DEL,
    PC_BSP,
    PC_LCBR,
    PC_RCBR,
    PC_LPRN,
    PC_RPRN,
    PC_LBRC,
    PC_RBRC,

    /**
     * Combo mods:
     *  - Two-key mod combos to use instead of home row mods.
     *  - Must be repeated for layers other than base.
     *  - Each layer has a different prefix:
     *      - Base: PB
     *      - Number: PN
     *      - Symbol: PS
     *      - Nav: PV
     **/
    /** BASE **/
    PB_LGUI,
    PB_LCTL,
    PB_LALT,
    PB_RGUI,
    PB_RCTL,
    PB_RALT,
    /** NUMBER **/
    PN_LGUI,
    PN_LCTL,
    PN_LALT,
    PN_RGUI,
    PN_RCTL,
    PN_RALT,
    /** SYMBOL **/
    PS_LGUI,
    PS_LCTL,
    PS_LALT,
    PS_RGUI,
    PS_RCTL,
    PS_RALT,
    /** NAV **/
    PV_LGUI,
    PV_LCTL,
    PV_LALT,
    PV_RGUI,
    PV_RCTL,
    PV_RALT,

    PC_QUOTE,
    PC_ENTER,
    PC_RESET, /** QMK BOOT/RESET combo. */

    COMBO_LENGTH
};
