/*
 * led7_segment.c
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */
#include "led7_segment.h"

int LEDData;
int SEGData;
void display_SEG(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 1);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 1);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 1);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 1);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 1);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 1);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 1);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 1);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 1);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 0);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, 0);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, 0);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, 0);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, 0);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, 1);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, 0);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, 0);
			break;
		default:
			break;
	}
}
void display_LED(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 1);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 1);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 1);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 1);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 1);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 1);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 1);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 1);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 1);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 0);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, 0);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, 0);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, 1);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, 0);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, 0);
			break;
		default:
			break;
	}
}
void update7SEG(int index, int data) {
	switch (index) {
	case 0:
		// Display the first 7 SEG led to display MODE
		HAL_GPIO_WritePin(EN_SEG_0_GPIO_Port, EN_SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(EN_SEG_1_GPIO_Port, EN_SEG_1_Pin, SET);
		display_SEG(data / 10);
		break;
	case 1:
		// Display the second 7 SEG led to display MODE
		HAL_GPIO_WritePin(EN_SEG_0_GPIO_Port, EN_SEG_0_Pin, SET);
		HAL_GPIO_WritePin(EN_SEG_1_GPIO_Port, EN_SEG_1_Pin, RESET);
		display_SEG(data % 10);
		break;
	default:
		break;
	}
}

void update7LED(int index, int data) {
	switch (index) {
	case 0:
		// Display the first 7 SEG led to display VALUE
		HAL_GPIO_WritePin(EN_LED_0_GPIO_Port, EN_LED_0_Pin, RESET);
		HAL_GPIO_WritePin(EN_LED_1_GPIO_Port, EN_LED_1_Pin, SET);
		display_LED(data / 10);
		break;
	case 1:
		// Display the second 7 SEG led to display VALUE
		HAL_GPIO_WritePin(EN_LED_0_GPIO_Port, EN_LED_0_Pin, SET);
		HAL_GPIO_WritePin(EN_LED_1_GPIO_Port, EN_LED_1_Pin, RESET);
		display_LED(data % 10);
		break;
	default:
		break;
	}
}
void segRun1() {
	update7SEG(0, SEGData);
	update7LED(0, LEDData);

}

void segRun2() {
	update7SEG(1, SEGData);
	update7LED(1, LEDData);
}
