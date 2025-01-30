#include "nfc_custom.h"

void nfc_bruteforce(void) {
    for (int i = 0; i < 256; i++) {
        send_nfc_signal(i);
    }
}

void nfc_relay_attack(void) {
    while (true) {
        record_nfc();
        send_nfc();
    }
}
#include "nfc_custom.h"

void nfc_custom_function(void) {
    // Пример кода для работы с UID
    printf("Custom NFC function triggered!\n");
}
