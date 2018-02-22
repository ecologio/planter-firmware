/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mgos_planter_firmware.h
 * Author: ecolog.io
 *
 * Created on 22 февраля 2018 г., 12:35
 */

#ifndef MGOS_PLANTER_FIRMWARE_H
#define MGOS_PLANTER_FIRMWARE_H

#ifdef __cplusplus
extern "C" {
#endif
  
typedef void (*on_wifi_ready_t) (void *param);

void mgos_wifi_changed(enum mgos_wifi_status event, void *arg);

void mgos_wifi_ready_cb(on_wifi_ready_t cb, void *arg);


#ifdef __cplusplus
}
#endif

#endif /* MGOS_PLANTER_FIRMWARE_H */

