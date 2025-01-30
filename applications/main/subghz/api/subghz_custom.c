#include "subghz_custom.h"

void subghz_scan_all_frequencies(void) {
    for (int freq = 300; freq <= 928; freq += 0.1) {
        scan_frequency(freq);
    }
}

void subghz_bruteforce(void) {
    for (int code = 0; code < 1000000; code++) {
        send_subghz_signal(code);
    }
}
