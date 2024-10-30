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

// Định nghĩa hàm fsm_trafficlight
void fsm_trafficlight() {
	switch (state) {
		case INIT:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 0);
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 0);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 0);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 0);
			if(timer1_flag == 1){
				setTimer1(100);
				state = AUTORED_GREEN;
			}

			break;

		case AUTORED_GREEN:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 0);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 0);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 1);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 0);
			if(timer1_flag == 1){
				setTimer1(GREENTIME);
				state = AUTORED_YELLOW;
			}
			break;

		case AUTORED_YELLOW:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 1);
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 0);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 0);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 1);
			if(timer1_flag == 1){
				setTimer1(YELLOWTIME);
				state = AUTOGREEN_RED;
			}
			break;

		case AUTOGREEN_RED:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 0);
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 1);
			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 0);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 0);
			if(timer1_flag == 1){
				setTimer1(GREENTIME);
				state = AUTOYELLOW_RED;
			}
			break;

		case AUTOYELLOW_RED:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, 0);
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, 1);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, 1);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, 0);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, 0);
			if(timer1_flag == 1){
				setTimer1(YELLOWTIME);
				state = AUTORED_GREEN;
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