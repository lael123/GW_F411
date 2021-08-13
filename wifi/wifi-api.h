/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-07-17     Rick       the first version
 */
#ifndef WIFI_WIFI_API_H_
#define WIFI_WIFI_API_H_

void WariningUpload(uint32_t from_id,uint32_t device_id,uint8_t type,uint8_t value);
void Slave_Heart(uint32_t device_id,uint8_t rssi);
void Remote_Delete(uint32_t device_id);
void MotoUpload(uint32_t device_id,uint8_t state);
void RemoteUpload(uint32_t device_id,uint8_t state);
void Device_Add2Flash(uint32_t device_id,uint32_t from_id);
void Device_Add2Wifi(uint32_t device_id,uint32_t from_id);
void Device_Add2Flash_Wifi(uint32_t device_id,uint32_t from_id);
void DeviceCheck(uint32_t device_id,uint32_t from_id);
void Local_Delete(uint32_t device_id);
void Main_Add_WiFi(uint32_t device_id);
void Slave_Add_WiFi(uint32_t device_id,uint32_t from_id);
void Door_Add_WiFi(uint32_t device_id,uint32_t from_id);
void Device_Delete_WiFi(uint32_t device_id);
void Remote_Delay_WiFi(uint32_t device_id,uint8_t state);
void Door_Delay_WiFi(uint32_t device_id,uint8_t state);
void Warning_WiFi(uint32_t device_id,uint8_t state);
void Moto_CloseRemote(uint32_t device_id);
void Moto_OpenRemote(uint32_t device_id);
void Delay_CloseRemote(uint32_t device_id);
void Delay_OpenRemote(uint32_t device_id);
void Heart_Report(uint32_t device_id,int rssi);
void Ack_Report(uint32_t device_id);
void Heart_Request(char *device_id);
void Heart_Change(uint32_t device_id,uint8_t heart);
void Sync_Request(void);
void Remote_Sync(void);
void Remote_Device_Add(uint32_t device_id);

#endif /* WIFI_WIFI_API_H_ */
