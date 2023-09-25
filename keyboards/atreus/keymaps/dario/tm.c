enum custom_keycodes {
    SS_0 = SAFE_RANGE,
    SS_05,
    SS_1,
    SS_15,
    SS_2,
    SS_25,
    SS_3,
    SS_35,
    SS_4,
    SS_45,
    SS_5,
    SS_55,
    SS_6,
    SS_65,
    SS_7,
    SS_75,
    SS_8,
    SS_85,
    SS_9,
    SS_95,
    SS_GO,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SS_0:
            if (record->event.pressed) {
                SEND_STRING("0\t");
            }
            return false;
        case SS_05:
            if (record->event.pressed) {
                SEND_STRING("0,5\t");
            }
            return false;
        case SS_1:
            if (record->event.pressed) {
                SEND_STRING("1\t");
            }
            return false;
        case SS_15:
            if (record->event.pressed) {
                SEND_STRING("1,5\t");
            }
            return false;
        case SS_2:
            if (record->event.pressed) {
                SEND_STRING("2\t");
            }
            return false;
        case SS_25:
            if (record->event.pressed) {
                SEND_STRING("2,5\t");
            }
            return false;
        case SS_3:
            if (record->event.pressed) {
                SEND_STRING("3\t");
            }
            return false;
        case SS_35:
            if (record->event.pressed) {
                SEND_STRING("3,5\t");
            }
            return false;
        case SS_4:
            if (record->event.pressed) {
                SEND_STRING("4\t");
            }
            return false;
        case SS_45:
            if (record->event.pressed) {
                SEND_STRING("4,5\t");
            }
            return false;
        case SS_5:
            if (record->event.pressed) {
                SEND_STRING("5\t");
            }
            return false;
        case SS_55:
            if (record->event.pressed) {
                SEND_STRING("5,5\t");
            }
            return false;
        case SS_6:
            if (record->event.pressed) {
                SEND_STRING("6\t");
            }
            return false;
        case SS_65:
            if (record->event.pressed) {
                SEND_STRING("6,5\t");
            }
            return false;
        case SS_7:
            if (record->event.pressed) {
                SEND_STRING("7\t");
            }
            return false;
        case SS_75:
            if (record->event.pressed) {
                SEND_STRING("7,5\t");
            }
            return false;
        case SS_8:
            if (record->event.pressed) {
                SEND_STRING("8\t");
            }
            return false;
        case SS_85:
            if (record->event.pressed) {
                SEND_STRING("8,5\t");
            }
            return false;
        case SS_9:
            if (record->event.pressed) {
                SEND_STRING("9\t");
            }
            return false;
        case SS_95:
            if (record->event.pressed) {
                SEND_STRING("9,5\t");
            }
            return false;
        case SS_GO:
            if (record->event.pressed) {
                SEND_STRING("\t\t\t\t\t\t\t\t\t\t\t");
            }
            return false;
    }

    return true;
}
