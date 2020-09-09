LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    // Replace the sequences below with your own sequences.
    SEQ_ONE_KEY(KC_T) {
      // When I press KC_LEAD and then T, this sends CTRL + SHIFT + T
      SEND_STRING(SS_LCTRL(SS_LSFT("t")));
    }

    // ñ / Ñ
    SEQ_ONE_KEY(KC_N) {
      register_code(KC_LOPT);
      tap_code(KC_N);
      unregister_code(KC_LOPT);
      tap_code(KC_N);
    }
    SEQ_TWO_KEYS(KC_N, KC_N) {
      register_code(KC_LOPT);
      tap_code(KC_N);
      unregister_code(KC_LOPT);
      register_code(KC_LSFT);
      tap_code(KC_N);
      unregister_code(KC_LSFT);
    }

    // á / Á
    SEQ_ONE_KEY(KC_A) {
      register_code(KC_LOPT);
      tap_code(KC_E);
      unregister_code(KC_LOPT);
      tap_code(KC_A);
    }
    SEQ_TWO_KEYS(KC_A, KC_A) {
      register_code(KC_LOPT);
      tap_code(KC_E);
      unregister_code(KC_LOPT);
      register_code(KC_LSFT);
      tap_code(KC_A);
      unregister_code(KC_LSFT);
    }

  }
}
