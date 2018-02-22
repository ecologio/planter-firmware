#include "mgos.h"
#include "mgos_wifi.h"
#include "mgos_planter_firmware.h"

bool mgos_planter_firmware_init(void) {
  return true;
}

on_wifi_ready_t on_wifi_ready;

void mgos_wifi_changed(enum mgos_wifi_status event, void *arg) {
  if (event == MGOS_WIFI_IP_ACQUIRED) {
    on_wifi_ready(arg);
  }
}

void mgos_wifi_ready_cb(on_wifi_ready_t cb, void *arg) {
  on_wifi_ready = cb;
  mgos_wifi_add_on_change_cb(mgos_wifi_changed, arg);
}