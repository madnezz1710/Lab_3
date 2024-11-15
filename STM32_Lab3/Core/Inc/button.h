/*
 * button.h
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"
#define TIME_OUT_FOR_KEY_PRESS		200
#define NUM_OF_BUTTONS 3

extern int button_flag[NUM_OF_BUTTONS];
void clearAllButtons();
void getKeyInput();
void subKeyProcess(int index);
int isButtonPressed(int index);
#endif /* INC_BUTTON_H_ */
