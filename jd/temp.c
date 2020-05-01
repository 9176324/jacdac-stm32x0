#include "jdsimple.h"

struct srv_state {
    SENSOR_COMMON;
};

void temp_process(srv_t *state) {
    uint32_t temp = hw_temp();
    sensor_process_simple(state, &temp, sizeof(temp));
}

void temp_handle_packet(srv_t *state, jd_packet_t *pkt) {
    uint32_t temp = hw_temp();
    sensor_handle_packet_simple(state, pkt, &temp, sizeof(temp));
}

SRV_DEF(temp, JD_SERVICE_CLASS_THERMOMETER);

void temp_init() {
    SRV_ALLOC(temp);
}
