/*
 * fsm_manual.c
 *
 *  Created on: Nov 12, 2024
 *      Author: itzic
 */
#include "fsm_manual.h"
int mode = 0;
int temp_red=0;
int temp_yellow=0;
int temp_green=0;
void display_time(int num){
	int time=num;
	if(timer4_flag==1){
		switch (mode){
		case 0:
			update7SEG(0, time);
			update7LED(0, time);
			mode =1 ;
			setTimer4(50);
			break;
		case 1:
			update7SEG(1, time);
			update7LED(1, time);
			mode =0;
			setTimer4(50);
			break;
		}
	}
}
void fsm_manual(){


	switch (state){
	case MANUAL_RED:
		 if (temp_red == 0) {
		     temp_red = REDTIME / 100;
		 }
		displaylight(1, 0, 0, 1, 0, 0);
		if(timer1_flag==1){
			state=AUTORED_GREEN;
			setTimer1(GREENTIME);
			remaintime1=REDTIME/100;
			remaintime2=GREENTIME/100;
			SEGData = remaintime1;
			LEDData = remaintime2;
		}
		if(isButtonPressed(0)==1){
			state = MANUAL_GREEN;
			setTimer1(1000);
		}
		if(isButtonPressed(1)==1){
			temp_red++;
		}
		display_time(temp_red);
		if(isButtonPressed(2)==1){
            if (temp_red == temp_green + temp_yellow) {
                REDTIME = temp_red * 100;
                YELLOWTIME = temp_yellow * 100;
                GREENTIME = temp_green * 100;
            }
		}
		break;
	case MANUAL_GREEN:
        if (temp_green == 0) {
            temp_green = GREENTIME / 100;
        }
		displaylight(0, 1, 0, 0, 1, 0);
		if(timer1_flag==1){
			state=AUTORED_GREEN;
			setTimer1(GREENTIME);
			remaintime1=REDTIME/100;
			remaintime2=GREENTIME/100;
			SEGData = remaintime1;
			LEDData = remaintime2;
		}
		if(isButtonPressed(0)==1){
			state = MANUAL_YELLOW;
			setTimer1(1000);
		}
		if(isButtonPressed(1)==1){
			temp_green++;
		}
		display_time(temp_green);
		if(isButtonPressed(2)==1){
            if (temp_red == temp_green + temp_yellow) {
                REDTIME = temp_red * 100;
                YELLOWTIME = temp_yellow * 100;
                GREENTIME = temp_green * 100;
            }
		}
		break;
	case MANUAL_YELLOW:
        if (temp_yellow == 0) {
            temp_yellow = YELLOWTIME / 100;
        }

		displaylight(0, 0, 1, 0, 0, 1);
		if(timer1_flag==1){
			state=AUTORED_GREEN;
			setTimer1(GREENTIME);
			remaintime1=REDTIME/100;
			remaintime2=GREENTIME/100;
			SEGData = remaintime1;
			LEDData = remaintime2;
		}
		if(isButtonPressed(0)==1){
			state = AUTORED_GREEN;
			setTimer1(GREENTIME);
			remaintime1=REDTIME/100;
			remaintime2=GREENTIME/100;
			SEGData = remaintime1;
			LEDData = remaintime2;
		}
		if(isButtonPressed(1)==1){
			temp_yellow++;
		}
		display_time(temp_yellow);
		if(isButtonPressed(2)==1){
            if (temp_red == temp_green + temp_yellow) {
                REDTIME = temp_red * 100;
                YELLOWTIME = temp_yellow * 100;
                GREENTIME = temp_green * 100;
            }
		}
		break;
	default:
		break;
	}


}


