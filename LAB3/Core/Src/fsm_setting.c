/*
 * fsm_setting.c
 *
 *  Created on: Oct 30, 2024
 *      Author: nhanvo
 */

#include "fsm_setting.h"

void fsm_setting_time() {
switch(status3){
		case MODIFY_RED:
			//set mode to display
			mode = 2;
			if(timer_flag[0] == 1) {
				setTimer(0, 500);
				toggleRed();

			}

			//check if user want to apply new duration1 and return auto mode
			if(isButtonPressed(RETURN)) {
				clearAllLed();
				//set new duration1 for red led
				red_duration = time_input * 1000;
				time_input = 1;
				status3 = MODIFY_YELLOW;
			}
			//check if user want to increase time
			if(isButtonPressed(SET_TIME)) {
				time_input = (time_input + 1) % 100; //max value is 99
				if(time_input == 0) time_input = 1; //0 is invalid value
			}

			//check if user want to change mode
			if(isButtonPressed(CONTROL_MODE)){
				clearAllLed();
				time_input = 1;
				status3 = MODIFY_YELLOW;
			}
			break;

		case MODIFY_YELLOW:
			//set mode to display
			mode = 3;
			if(timer_flag[0] == 1) {
				setTimer(0, 500);
				toggleYellow();
			}

			//check if user want to apply new duration1 and return auto mode
			if(isButtonPressed(RETURN)){
				clearAllLed();
				//set new duration1 for yellow led
				yellow_duration = time_input * 1000;
				time_input = 1;
				status3 = MODIFY_GREEN;
			}

			//check if user want to increase time
			if(isButtonPressed(SET_TIME)) {
				time_input = (time_input + 1) % 100; //99 is the max value
				if(time_input == 0) time_input = 1; //0 is invalid value
			}

			//check if user want to change mode
			if(isButtonPressed(CONTROL_MODE)){
				clearAllLed();
				time_input = 1;
				status3 = MODIFY_GREEN;
			}
			break;

		case MODIFY_GREEN:
			//set mode to display
			mode = 4;
			if(timer_flag[0] == 1) {
				setTimer(0, 500);
				toggleGreen();
			}
			//check if user want to apply new duration1 and return auto mode
			if(isButtonPressed(RETURN)) {
				clearAllLed();
				//set new duration1 for green led
				green_duration = time_input * 1000;
				time_input = 1;
				//turn on return flag for the fsm auto can change it's state
				returnFlag1 = BACK_TO_AUTOMATIC;
				returnFlag2 = BACK_TO_AUTOMATIC;
				status3 = WAIT;
			}

			//check if user want to increase time
			if(isButtonPressed(SET_TIME)) {
				time_input = (time_input + 1) % 100; //99 is the max value
				if(time_input == 0) time_input = 1; //1 is invalid value
			}

			//check if user want to change mode
			if(isButtonPressed(CONTROL_MODE)){
				time_input = 1;
				clearAllLed();
				returnFlag1 = BACK_TO_AUTOMATIC;
				returnFlag2 = BACK_TO_AUTOMATIC;
				status3 = WAIT;
			}
			break;

		case WAIT:
			//DO NOTHING
			break;

		default:
			break;
	}
}
