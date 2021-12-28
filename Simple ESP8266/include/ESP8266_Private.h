/*
 * ESP8266_Private.h
 *
 *  Created on: Dec 28, 2021
 *      Author: Abdelrhman Badr
 */

#ifndef ESP8266_PRIVATE_H_
#define ESP8266_PRIVATE_H_

#define ESP8266_SET_STATION_MODE		"AT+CWMODE=1\r\n"
#define ESP8266_STATION_MODE_DELAY		(3000)
#define ESP8266_NORMAL_TX_MODE			"AT+CIPMODE=0\r\n"
#define ESP8266_NORMAL_TX_MODE_DELAY	(3000)
#define ESP8266_CONNECT_WIFI_DELAY		(8000)
#define ESP8266_HTTP_REQ_DELAY			(4000)
#define ESP8266_RECONNECTION_DELAY		(2000)
#endif /* ESP8266_PRIVATE_H_ */
