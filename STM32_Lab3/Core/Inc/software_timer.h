/*
 * software_timer.h
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;


void timer1Run();
void setTimer1(int duration);
void timer2Run();
void setTimer2(int duration);
void timer3Run();
void setTimer3(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
