/*
 * light_traffic.c
 *
 *  Created on: Oct 29, 2024
 *      Author: nhanvo
 */

#include "light_traffic.h"

void setRedLed1(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
	HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);
}

void setYellowLed1(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
	HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
}

void setGreenLed1(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
	HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);
}

void setRedLed2(){
	HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
	HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
	HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
}

void setYellowLed2(){
	HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
	HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
	HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
}

void setGreenLed2(){
	HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
	HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
	HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
}

void toggleRed(){
	HAL_GPIO_TogglePin(R1_GPIO_Port, R1_Pin);
	HAL_GPIO_TogglePin(R2_GPIO_Port, R2_Pin);
}
void toggleYellow(){
	HAL_GPIO_TogglePin(Y1_GPIO_Port, Y1_Pin);
	HAL_GPIO_TogglePin(Y2_GPIO_Port, Y2_Pin);
}
void toggleGreen(){
	HAL_GPIO_TogglePin(G1_GPIO_Port, G1_Pin);
	HAL_GPIO_TogglePin(G2_GPIO_Port, G2_Pin);
}


void clearAllLed(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
	HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);

	HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
	HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
	HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
}
