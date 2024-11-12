/*
 * traffic_light.c
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */


#include "traffic_light.h"

int state = INIT;  // Định nghĩa và khởi tạo giá trị cho state
int stage = MODE;
int GREENTIME = 300;
int YELLOWTIME = 200;
int REDTIME = 500;
int SEGData = 0;
int LEDData = 0;
int SEGtimer=0;
int remaintime1=0;
int remaintime2=0;
void displaylight (int red1, int green1, int yellow1, int red2, int green2, int yellow2){
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, red1);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, green1);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, yellow1);
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, red2);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, green2);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, yellow2);

}
void fsm_trafficlight() {
	switch (state) {
		case INIT:
			displaylight(0, 0, 0, 0, 0, 0);
			if(timer1_flag == 1){
				setTimer1(300);
				state = AUTORED_GREEN;
				remaintime1=REDTIME/100;
				remaintime2=GREENTIME/100;
				SEGData = remaintime1;
				LEDData = remaintime2;
				setTimer2(100);
			}
			break;
		case AUTORED_GREEN:
			displaylight(1, 0, 0, 0, 1, 0);
			if(timer1_flag == 1){
				setTimer1(GREENTIME);
				state = AUTORED_YELLOW;
				remaintime2=YELLOWTIME/100;
				LEDData = remaintime2;
			}
			if(timer2_flag == 1){
				if (remaintime1 > 0) {
				       remaintime1--;
					}
				if (remaintime2 > 0) {
						remaintime2--;
					}
				SEGData = remaintime1;
				LEDData = remaintime2;
				segRun1();
				segRun2();
				setTimer2(100);
			}
			break;

		case AUTORED_YELLOW:
			displaylight(1, 0, 0, 0, 0, 1);
			if(timer1_flag == 1){
				setTimer1(YELLOWTIME);
				state = AUTOGREEN_RED;
				remaintime1=GREENTIME/100;
				remaintime2=REDTIME/100;
				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			if(timer2_flag == 1){
				if (remaintime1 > 0) {
					remaintime1--;
					}
				if (remaintime2 > 0) {
					remaintime2--;
					}
				SEGData = remaintime1;
				LEDData = remaintime2;
				segRun1();
				segRun2();
				setTimer2(100);
			}
			break;

		case AUTOGREEN_RED:
			displaylight(0, 1, 0, 1, 0, 0);
			if(timer1_flag == 1){
				setTimer1(GREENTIME);
				state = AUTOYELLOW_RED;
				remaintime1=YELLOWTIME/100;

				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			if(timer2_flag == 1){
				if (remaintime1 > 0) {
					remaintime1--;
					}
				if (remaintime2 > 0) {
					remaintime2--;
					}
				SEGData = remaintime1;
				LEDData = remaintime2;
				segRun1();
				segRun2();
				setTimer2(100);
			}
			break;

		case AUTOYELLOW_RED:
			displaylight(0, 0, 1, 1, 0, 0);
			if(timer1_flag == 1){
				setTimer1(YELLOWTIME);
				state = AUTORED_GREEN;
				remaintime1=REDTIME/100;
				remaintime2=GREENTIME/100;
				SEGData = remaintime1;
				LEDData = remaintime2;
			}
			if(timer2_flag == 1){
				if (remaintime1 > 0) {
					remaintime1--;
					}
				if (remaintime2 > 0) {
					remaintime2--;
					}
				SEGData = remaintime1;
				LEDData = remaintime2;
				segRun1();
				segRun2();
				setTimer2(100);
			}
			break;
	}
}

void fsm_fullmode(){
	switch(MODE){
	case MODE1:
		fsm_trafficlight();
		break;
	case MODE2:

		break;
	case MODE3:

		break;
	case MODE4:

		break;
	}
}
