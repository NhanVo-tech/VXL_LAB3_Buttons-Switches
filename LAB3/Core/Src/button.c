/*
 * button.c
 *
 *  Created on: Oct 28, 2024
 *      Author: nhanvo
 */

#include "button.h"


int KeyReg0[NUM_BUTTONS] = {NORMAL_STATE};
int KeyReg1[NUM_BUTTONS] = {NORMAL_STATE};
int KeyReg2[NUM_BUTTONS] = {NORMAL_STATE};
int KeyReg3[NUM_BUTTONS] = {NORMAL_STATE};

int TimeOutForKeyPress[NUM_BUTTONS] = {200};
int button_flag[NUM_BUTTONS] = {0};
//int button_long_pressed[NUM_BUTTONS] = {0};

// GPIO ports and pins for each button
GPIO_TypeDef* BUTTON_GPIO_Port[NUM_BUTTONS] = {BUTTON1_GPIO_Port, BUTTON2_GPIO_Port, BUTTON3_GPIO_Port};
uint16_t BUTTON_Pin[NUM_BUTTONS] = {BUTTON1_Pin, BUTTON2_Pin, BUTTON3_Pin};

void clearAllButtons() {
	for (int i = 0; i < NUM_BUTTONS; i++) {
		KeyReg1[i] = NORMAL_STATE;
		KeyReg2[i] = NORMAL_STATE;
		KeyReg0[i] = NORMAL_STATE;
		HAL_GPIO_WritePin(BUTTON_GPIO_Port[i], BUTTON_Pin[i], NORMAL_STATE);
	}
}

int isButtonPressed(int button_index) {
	if (button_flag[button_index] == 1) {
		button_flag[button_index] = 0;
		return 1;
	}
	return 0;
}

//int isButtonLongPressed(int button_index) {
//	if (button_long_pressed[button_index] == 1) {
//		button_long_pressed[button_index] = 0;
//		return 1;
//	}
//	return 0;
//}

void subKeyProcess(int button_index) {
	button_flag[button_index] = 1;
}

void getKeyInput() {
	for (int i = 0; i < NUM_BUTTONS; i++) {
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[i] = HAL_GPIO_ReadPin(BUTTON_GPIO_Port[i], BUTTON_Pin[i]);

		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])) {
			if (KeyReg2[i] != KeyReg3[i]) {
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg2[i] == PRESSED_STATE) {
					TimeOutForKeyPress[i] = 200;
					subKeyProcess(i);
				}
			} else {
				TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0) {
					KeyReg3[i] = NORMAL_STATE;
				}
			}
		}
	}
}
