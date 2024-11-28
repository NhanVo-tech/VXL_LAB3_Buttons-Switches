/*
 * global.c
 *
 *  Created on: Sep 23, 2024
 *      Author: nhanvo
 */
#include "global.h"

int status1 = INIT;
int lastState1 = INIT;

int status2 = INIT;
int lastState2 = INIT;

int status3 = WAIT;

int red_duration    = 5000; //5 seconds
int yellow_duration = 2000; //2 seconds
int green_duration  = 3000; //3 seconds

int time_input = 1;
int mode = 1;

int timeCountdown1 = 0;
int timeCountdown2 = 0;

int returnFlag1 = 0;
int returnFlag2 = 0;

void systemInit(){
	clearAllButtons();
	clear7SEG();
	clearAllLed();
	setTimer(4, 100);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);

	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
	HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);
	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);

	HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
	HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
	HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
}
