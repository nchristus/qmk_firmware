/*
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

#include "nchristus.h"

#define LOWER LT(_LOWER, KC_SPC)
#define RAISE LT(2, KC_ENT)
#define SFTSLSH RSFT_T(KC_SLSH)

#define LAYOUT_arrow_wrapper(...) LAYOUT_arrow_command(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWRTY] = LAYOUT_arrow_wrapper(
    KC_TAB,  __________________QWERTYL1_________________, __________________QWERTYR1_________________, KC_BSPC,
    CTL_ESC, __________________QWERTYL2_________________, __________________QWERTYR2_________________, KC_ENT,
    KC_LSFT, __________________QWERTYL3_________________, KC_N,    KC_M,    KC_COMM, KC_DOT,  SFTSLSH, MO(_FNCTN),
    _______, KC_LCTL, KC_LALT, KC_LGUI,            RAISE, LOWER,            KC_RGUI, KC_RALT, KC_RCTL, _______
  ),
  [_LOWER] = LAYOUT_arrow_wrapper(
    _______, _________________LOWER_L1__________________, _________________LOWER_R1__________________, _______,
    _______, _________________LOWER_L2__________________, _________________LOWER_R2__________________, _______,
    _______, ___________________BLANK___________________, ___________________BLANK___________________, _______,
    _______, _______, _______, _______,          XXXXXXX, _______,          _______, _______, _______, _______
  ),
  [_RAISE] = LAYOUT_arrow_wrapper(
    _______, _________________RAISE_L1__________________, _________________RAISE_R1__________________, _______,
    _______, _________________RAISE_L2__________________, _________________RAISE_R2__________________, _______,
    _______, ___________________BLANK___________________, ___________________BLANK___________________, _______,
    _______, _______, _______, _______,          _______, XXXXXXX,          _______, _______, _______, _______
  ),
  [_FNCTN] = LAYOUT_arrow_wrapper(
    RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,          _______, _______,          _______, _______, _______, _______
  ),
};