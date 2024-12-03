/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_MATRIX_I2C

// #define QUICK_TAP_TERM 0
// #define TAPPING_TERM 100

#ifdef RGB_MATRIX_ENABLE
/*#    define ENABLE_RGB_MATRIX_HUE_BREATHING*/
/*#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN*/
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
/*#    define ENABLE_RGB_MATRIX_BREATHING*/
/*#    define ENABLE_RGB_MATRIX_HUE_WAVE*/
/*#    define ENABLE_RGB_MATRIX_PIXEL_FLOW*/
/*#    define ENABLE_RGB_MATRIX_PIXEL_RAIN*/
#    define RGB_MATRIX_DEFAULT_HUE 191
#    define RGB_MATRIX_DEFAULT_SAT 200
#    define RGB_MATRIX_DEFAULT_VAL 160
#    define RGBLIGHT_DEFAULT_HUE 191
#    define RGBLIGHT_DEFAULT_SAT 200
#    define RGBLIGHT_DEFAULT_VAL 160
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif
