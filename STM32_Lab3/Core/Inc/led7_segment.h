/*
 * led7_segment.h
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "global.h"
void display_SEG(int num);
void display_LED(int num);
void segRun1();
void segRun2();
void update7LED(int index, int data);
void update7SEG(int index, int data);
#endif /* INC_LED7_SEGMENT_H_ */
