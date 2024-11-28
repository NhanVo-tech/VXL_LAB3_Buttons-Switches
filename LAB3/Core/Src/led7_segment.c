/*
 * display_7_seg.c
 *
 *  Created on: Oct 28, 2024
 *      Author: nhanvo
 */

#include "led7_segment.h"

void display7SEG(int num)
{
	switch (num)
	{
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		  case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		  case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		  case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		  case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		  case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			break;
		  case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		  default:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
	}
}

void display7SEG_1(int num)
{
	switch (num)
	{
		case 0:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
			break;
		  case 3:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
			break;
		  case 4:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
			break;
		  case 5:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
			break;
		  case 6:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
			break;
		  case 7:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_SET);
			break;
		  case 8:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
			break;
		  default:
			HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
			break;
	}
}

void clear7SEG() {
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_SET);
}

int * set1;
int * set2;

int led_index = 0;

void update7Segment(){
	if(timer_flag[4] == 1){
		setTimer(4, 100);
		switch (led_index) {
			case 0:
				display7SEG(*set1 % 10);
				display7SEG_1(*set1 / 10);
				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
				break;
			case 1:
				display7SEG(*set2 % 10);
				display7SEG_1(*set2 / 10);
				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
				break;
			default:
				break;
		}
		led_index++;
		if(led_index >= 2) {
			led_index = 0;
		}
	}
}
