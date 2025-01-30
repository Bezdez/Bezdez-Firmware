#include "update_custom.h"

void update_from_internet(void) {
    download_update("https://flipperupdates.com/latest.bin");
}

void update_from_sdcard(void) {
    apply_update("/sdcard/update.bin");
}

void update_from_phone(void) {
    receive_update_via_bluetooth();
}
