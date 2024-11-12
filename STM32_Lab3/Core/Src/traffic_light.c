/*
 * traffic_light.c
 *
 *  Created on: Oct 30, 2024
 *      Author: itzic
 */


#include "traffic_light.h"


void displaylight (int red1, int green1, int yellow1, int red2, int green2, int yellow2){
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, red1);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, green1);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, yellow1);
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, red2);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, green2);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, yellow2);

}

