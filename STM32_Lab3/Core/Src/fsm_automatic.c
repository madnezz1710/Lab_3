/*
 * fsm_automatic.c
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */

#include "fsm_automatic.h"

int state = INIT;
int GREENTIME = 300;
int YELLOWTIME = 200;
int REDTIME = 500;
int SEGData = 0;
int LEDData = 0;
int SEGtimer=0;
int remaintime1=0;
int remaintime2=0;
int timemode=0;
void updateRemainingTime() {
	if(timer2_flag == 1){
		if (remaintime1 > 0) {
			remaintime1--;
		}
		if (remaintime2 > 0) {
			remaintime2--;
		}
 setTimer2(100);
	}
	if(timer3_flag == 1){
		SEGData = remaintime1;
		LEDData = remaintime2;
		segRun1();
		switch(timemode){
			case 0:
				segRun1();
				timemode = 1;
				setTimer3(50);
				break;
			case 1:
				segRun2();
				timemode = 0;
				setTimer3(50);
				break;
		}
	}
}
void fsm_automatic() {
	if(isButtonPressed(0)==1){
		state= MANUAL_RED;
		setTimer1(1000);
	}
	switch (state) {
		case INIT:
			displaylight(0, 0, 0, 0, 0, 0);
			if(timer1_flag == 1){
				setTimer1(GREENTIME);
				state = AUTORED_GREEN;
				remaintime1=REDTIME/100;
				remaintime2=GREENTIME/100;
				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			break;
		case AUTORED_GREEN:
			displaylight(1, 0, 0, 0, 1, 0);

			if(timer1_flag == 1){
				setTimer1(YELLOWTIME);
				state = AUTORED_YELLOW;
				remaintime2=YELLOWTIME/100;
				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			updateRemainingTime();
			break;

		case AUTORED_YELLOW:
			displaylight(1, 0, 0, 0, 0, 1);
			if(timer1_flag == 1){
				setTimer1(GREENTIME);
				state = AUTOGREEN_RED;
				remaintime1=GREENTIME/100;
				remaintime2=REDTIME/100;
				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			updateRemainingTime();
			break;
		case AUTOGREEN_RED:
			displaylight(0, 1, 0, 1, 0, 0);
			if(timer1_flag == 1){
				setTimer1(YELLOWTIME);
				state = AUTOYELLOW_RED;
				remaintime1=YELLOWTIME/100;

				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			updateRemainingTime();
			break;
		case AUTOYELLOW_RED:
			if(isButtonPressed(0)==1){
				state= MANUAL_RED;
				setTimer1(500);
			}
			displaylight(0, 0, 1, 1, 0, 0);
			if(timer1_flag == 1){
				setTimer1(GREENTIME);
				state = AUTORED_GREEN;
				remaintime1=REDTIME/100;
				remaintime2=GREENTIME/100;
				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			updateRemainingTime();
					break;
				}
			}


