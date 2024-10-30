/*
 * traffic_light.h
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include "global.h"
#define INIT            101
#define AUTORED_GREEN   102
#define AUTORED_YELLOW  103
#define AUTOGREEN_RED   104
#define AUTOYELLOW_RED  105

#define MODE			200
#define MODE1			201
#define MODE2			202
#define MODE3			203
#define MODE4			204
extern int stage;
extern int state;

void fsm_trafficlight();
#endif /* INC_TRAFFIC_LIGHT_H_ */
