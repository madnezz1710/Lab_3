/*
 * global.h
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "led7_segment.h"
#include "software_timer.h"
#include "button.h"
#include "traffic_light.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"

#define BUTTON_IS_RELEASED	SET
#define BUTTON_IS_PRESSED	RESET
extern int SEGData;
extern int LEDData;
extern int state;
extern int GREENTIME;
extern int YELLOWTIME;
extern int REDTIME;
extern int remaintime1;
extern int remaintime2;
#define INIT            101
#define AUTORED_GREEN   102
#define AUTORED_YELLOW  103
#define AUTOGREEN_RED   104
#define AUTOYELLOW_RED  105
#define MANUAL_RED 12
#define MANUAL_GREEN 13
#define MANUAL_YELLOW 14


#endif /* INC_GLOBAL_H_ */
