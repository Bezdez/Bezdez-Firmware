#include "ir_custom.h"

void ir_scan_all_signals(void) {
    for (int freq = 30000; freq <= 60000; freq += 100) {
        scan_ir_signal(freq);
    }
}

void ir_bruteforce(void) {
    for (int code = 0; code < 100000; code++) {
        send_ir_signal(code);
    }
}
