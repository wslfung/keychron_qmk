/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#define _LAYER_0 0
#define _LAYER_1 1
#define _LAYER_2 2
#define _LAYER_3 3
#define _LAYER_4 4

// clang-format off
enum layers{
  // MAC_BASE,
  // WIN_BASE,
  // MAC_FN1,
  // WIN_FN1,
  // FN2,
  LAYER_0,
  LAYER_1,
  LAYER_2,
  LAYER_3,
  LAYER_4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_LAYER_0] = LAYOUT_69_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, LCTL(KC_T), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_NO, MO(3), KC_HOME, KC_BSPC, LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), C_S_T(KC_F), KC_G, KC_H, C_S_T(KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT, KC_ENT, KC_END, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_DEL, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_LCTL, KC_LGUI, KC_LALT, MO(1), MO(2), KC_SPC, KC_ENT, MO(4), KC_LEFT, KC_DOWN, KC_RGHT),
  [_LAYER_1] = LAYOUT_69_ansi(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_RGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EQL, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [_LAYER_2] = LAYOUT_69_ansi(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [_LAYER_3] = LAYOUT_69_ansi(KC_GRV, KC_BRID, KC_BRIU, LGUI(KC_TAB), LGUI(KC_E), RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_MUTE, RGB_TOG, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [_LAYER_4] = LAYOUT_69_ansi(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BT_HST1, BT_HST2, BT_HST3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
    // [MAC_BASE] = LAYOUT_69_ansi(
    //     KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,        KC_7,     KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,           KC_MUTE,
    //     KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,        KC_U,     KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,           KC_DEL,
    //     KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,                 KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,            KC_HOME,
    //     KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,        KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
    //     KC_LCTL, KC_LOPTN, KC_LCMMD,          KC_SPC,           MO(MAC_FN1), MO(FN2),          KC_SPC,            KC_RCMMD,            KC_LEFT, KC_DOWN,  KC_RGHT),

    // [WIN_BASE] = LAYOUT_69_ansi(
    //     KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,        KC_7,     KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,           KC_MUTE,
    //     KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,        KC_U,     KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,           KC_DEL,
    //     KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,                 KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,            KC_HOME,
    //     KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,        KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
    //     KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(WIN_FN1), MO(FN2),          KC_SPC,            KC_RALT,             KC_LEFT, KC_DOWN,  KC_RGHT),

    // [MAC_FN1] = LAYOUT_69_ansi(
    //     KC_GRV,  KC_BRID,  KC_BRIU,  KC_MCTL, KC_LPAD, RGB_VAD, RGB_VAI,     KC_MPRV,  KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,           RGB_TOG,
    //     _______, BT_HST1,  BT_HST2,  BT_HST3, _______, _______, _______,     _______,  _______, _______, _______,  _______,  _______,  _______,           _______,
    //     RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,              _______,  _______, _______, _______,  _______,  _______,  _______,           _______,
    //     _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,     _______,  NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
    //     _______, _______,  _______,           _______,          _______,     _______,           _______,           _______,            _______, _______,  _______),

    // [WIN_FN1] = LAYOUT_69_ansi(
    //     KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FILE, RGB_VAD, RGB_VAI,     KC_MPRV,  KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,           RGB_TOG,
    //     _______, BT_HST1,  BT_HST2,  BT_HST3, _______, _______, _______,     _______,  _______, _______, _______,  _______,  _______,  _______,           _______,
    //     RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,              _______,  _______, _______, _______,  _______,  _______,  _______,           _______,
    //     _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,     _______,  NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
    //     _______, _______,  _______,           _______,          _______,     _______,           _______,           _______,            _______, _______,  _______),

    // [FN2] = LAYOUT_69_ansi(
    //     KC_TILD, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,       KC_F7,    KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,           _______,
    //     _______, _______,  _______,  _______, _______, _______, _______,     _______,  _______, _______, _______,  _______,  _______,  _______,           _______,
    //     _______, _______,  _______,  _______, _______, _______,              _______,  _______, _______, _______,  _______,  _______,  _______,           _______,
    //     _______,           _______,  _______, _______, _______, BAT_LVL,     BAT_LVL,  _______, _______, _______,  _______,  _______,  _______, _______,
    //     _______, _______,  _______,           _______,          _______,     _______,           _______,           _______,            _______, _______,  _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_LAYER_0] = {ENCODER_CCW_CW(LCTL(KC_PGUP), LCTL(KC_PGDN))},
    [_LAYER_1] = {ENCODER_CCW_CW(LCTL(KC_Z), LCTL(KC_Y))},
    [_LAYER_2]  = {ENCODER_CCW_CW(LCTL(KC_MINS), LCTL(KC_PPLS))},
    [_LAYER_3]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_LAYER_4]      = {ENCODER_CCW_CW(_______, _______)},
};
#endif // ENCODER_MAP_ENABLE

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
  return false;
}

void keyboard_post_init_user(void) {
    // https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
    // set initial effect on keyboard start; ignore what's in EEPROM!
    rgb_matrix_mode(
      // RGB_MATRIX_TYPING_HEATMAP
      RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    );
    rgb_matrix_sethsv(
      38,98,100
    );

}

bool rgb_matrix_indicators_user(void) {

    switch (get_highest_layer(layer_state|default_layer_state)) {
      case 1:
        rgb_matrix_set_color(60, RGB_CYAN);
        rgb_matrix_set_color(22, RGB_WHITE);
        rgb_matrix_set_color(36, RGB_WHITE);
        rgb_matrix_set_color(37, RGB_WHITE);
        rgb_matrix_set_color(38, RGB_WHITE);
        rgb_matrix_set_color(21, RGB_GREEN);
        rgb_matrix_set_color(23, RGB_RED);
        rgb_matrix_set_color(24, RGB_GOLD);
        rgb_matrix_set_color(39, RGB_GOLD);
        rgb_matrix_set_color(40, RGB_CYAN=);
        break;
      case 2:
        rgb_matrix_set_color(61, RGB_CYAN);
        rgb_matrix_set_color(21, RGB_WHITE);
        rgb_matrix_set_color(22, RGB_WHITE);
        rgb_matrix_set_color(23, RGB_WHITE);
        rgb_matrix_set_color(36, RGB_WHITE);
        rgb_matrix_set_color(37, RGB_WHITE);
        rgb_matrix_set_color(38, RGB_WHITE);
        rgb_matrix_set_color(51, RGB_WHITE);
        rgb_matrix_set_color(52, RGB_WHITE);
        rgb_matrix_set_color(53, RGB_WHITE);
        rgb_matrix_set_color(62, RGB_WHITE);
        rgb_matrix_set_color(63, RGB_WHITE);
        rgb_matrix_set_color(39, RGB_GOLD);
        rgb_matrix_set_color(11, RGB_GOLD);
        
        break;
      default:
        break;
    }
    return true;
}