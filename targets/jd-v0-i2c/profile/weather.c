#include "jdprofile.h"

DEVICE_CLASS(0x379c2450, "JDF030 weather v0");

void app_init_services() {
    temp_init();
    humidity_init();
}
