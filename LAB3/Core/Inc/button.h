/*
 * button.h
 *
 *  Created on: Oct 28, 2024
 *      Author: nhanvo
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define NUM_BUTTONS 3

//define button function name
#define CONTROL_MODE 	0
#define SET_TIME     	1
#define RETURN       	2

extern int button_flag[];
extern int button_pressed_1s_flag[];

void getKeyInput();
void KeyProcess(int index);
int isButtonPressed(int index);
void clearAllButtons();

#endif /* INC_BUTTON_H_ */
