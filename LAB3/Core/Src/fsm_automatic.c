/*
 * fsm_automatic.c
 *
 *  Created on: Oct 29, 2024
 *      Author: nhanvo
 */

#include "fsm_automatic.h"

void fsm_automatic_run1() {
	switch(status1){
			case INIT:
				//TODO
				setRedLed1();
				status1 = AUTO_RED;
				lastState1 = status1;
				setTimer(0, red_duration);
				setTimer(2, 1000);
				timeCountdown1 = red_duration/1000;
				set1 = &timeCountdown1;
				mode = 1;
				break;

			case AUTO_RED:
				//TODO
				setRedLed1();
				mode = 1;
				if(timer_flag[2] == 1) {
					setTimer(2, 1000);
					timeCountdown1--;
				}
				if(timer_flag[0] == 1) {
					status1 = AUTO_GREEN;
					setTimer(0, green_duration);
					setTimer(2, 1000);
					timeCountdown1 = green_duration/1000;
				}
				if(isButtonPressed(0)){
					clearAllLed();
					lastState1 = status1;
					lastState2 = status2;
					status1 = WAIT;
					status2 = WAIT;
					status3 = MODIFY_RED;
					setTimer(0, 500);
					setTimer(1, 0);
					setTimer(2, 0);
					setTimer(3, 0);
					set1 = &time_input;
					set2 = &mode;
				}
				break;

			case AUTO_GREEN:
				//TODO
				setGreenLed1();
				mode = 1;
				if(timer_flag[2] == 1) {
					setTimer(2, 1000);
					timeCountdown1--;
				}
				if(timer_flag[0] == 1) {
					status1 = AUTO_YELLOW;
					setTimer(0, yellow_duration);
					setTimer(2, 1000);
					timeCountdown1 = yellow_duration/1000;
				}
				if(isButtonPressed(0)){
					clearAllLed();
					lastState1 = status1;
					lastState2 = status2;
					status1 = WAIT;
					status2 = WAIT;
					status3 = MODIFY_RED;
					setTimer(0, 500);
					setTimer(1, 0);
					setTimer(2, 0);
					setTimer(3, 0);;
					set1 = &time_input;
					set2 = &mode;
				}
				break;

			case AUTO_YELLOW:
				//TODO
				setYellowLed1();
				mode = 1;
				if(timer_flag[2] == 1) {
					setTimer(2, 1000);
					timeCountdown1--;
				}
				if(timer_flag[0] == 1){
					setTimer(0, red_duration);
					status1 = AUTO_RED;
					setTimer(2, 1000);
					timeCountdown1 = red_duration/1000;
				}
				if(isButtonPressed(0)){
					clearAllLed();
					lastState1 = status1;
					lastState2 = status2;
					status1 = WAIT;
					status2 = WAIT;
					status3 = MODIFY_RED;
					setTimer(0, 500);
					setTimer(1, 0);
					setTimer(2, 0);
					setTimer(3, 0);;
					set1 = &time_input;
					set2 = &mode;
				}
				break;

			case WAIT:
				//TODO
				if(lastState1 == AUTO_RED && returnFlag1 == BACK_TO_AUTOMATIC){
					clearAllLed();
					returnFlag1 = 0;
					status1 = lastState1;
					setTimer(0, red_duration);
					setTimer(2, 1000);
					timeCountdown1 = red_duration/1000;
					set1 = &timeCountdown1;
				}
				if(lastState1 == AUTO_GREEN && returnFlag1 == BACK_TO_AUTOMATIC){
					clearAllLed();
					returnFlag1 = 0;
					status1 = lastState1;
					setTimer(0, green_duration);
					setTimer(2, 1000);
					timeCountdown1 = green_duration/1000;
					set1 = &timeCountdown1;
				}
				if(lastState1 == AUTO_YELLOW && returnFlag1 == BACK_TO_AUTOMATIC) {
					clearAllLed();
					returnFlag1 = 0;
					status1 = AUTO_GREEN;
					setTimer(0, green_duration);
					setTimer(2, 1000);
					timeCountdown1 = green_duration/1000;
					set1 = &timeCountdown1;
				}
				break;

			default:
				break;
	}
}
void fsm_automatic_run2() {
	switch(status2){
			case INIT:
				//TODO
				setGreenLed2();
				status2 = AUTO_GREEN;
				lastState2 = status2;
				setTimer(1, green_duration);
				setTimer(3, 1000);
				timeCountdown2 = green_duration/1000;
				set2 = &timeCountdown2;
				mode = 1;
				break;

			case AUTO_RED:
				//TODO
				setRedLed2();
				mode = 1;
				if(timer_flag[3] == 1) {
					setTimer(3, 1000);
					timeCountdown2--;
				}
				if(timer_flag[1] == 1) {
					status2 = AUTO_GREEN;
					setTimer(1, green_duration);
					setTimer(3, 1000);
					timeCountdown2 = green_duration/1000;
				}
				if(isButtonPressed(0)){
					clearAllLed();
					lastState1 = status1;
					lastState2 = status2;
					status1 = WAIT;
					status2 = WAIT;
					status3 = MODIFY_RED;
					setTimer(0, 500);
					setTimer(1, 0);
					setTimer(2, 0);
					setTimer(3, 0);;
					set1 = &time_input;
					set2 = &mode;
				}
				break;

			case AUTO_GREEN:
				//TODO
				setGreenLed2();
				mode = 1;
				if(timer_flag[3] == 1) {
					setTimer(3, 1000);
					timeCountdown2--;
				}
				if(timer_flag[1] == 1) {
					status2 = AUTO_YELLOW;
					setTimer(1, yellow_duration);
					timeCountdown2 = yellow_duration/1000;
				}
				if(isButtonPressed(0)){
					clearAllLed();
					lastState1 = status1;
					lastState2 = status2;
					status1 = WAIT;
					status2 = WAIT;
					status3 = MODIFY_RED;
					setTimer(0, 500);
					setTimer(1, 0);
					setTimer(2, 0);
					setTimer(3, 0);;
					set1 = &time_input;
					set2 = &mode;
				}
				break;

			case AUTO_YELLOW:
				//TODO
				setYellowLed2();
				mode = 1;
				if(timer_flag[3] == 1) {
					setTimer(3, 1000);
					timeCountdown2--;
				}
				if(timer_flag[1] == 1){
					setTimer(1, red_duration);
					status2 = AUTO_RED;
					setTimer(3, 1000);
					timeCountdown2 = red_duration/1000;
				}
				if(isButtonPressed(0)){
					clearAllLed();
					lastState1 = status1;
					lastState2 = status2;
					status1 = WAIT;
					status2 = WAIT;
					status3 = MODIFY_RED;
					setTimer(0, 500);
					setTimer(1, 0);
					setTimer(2, 0);
					setTimer(3, 0);;
					set1 = &time_input;
					set2 = &mode;
				}
				break;

			case WAIT:
				//TODO
				if(lastState2 == AUTO_RED && returnFlag2 == BACK_TO_AUTOMATIC){
					clearAllLed();
					returnFlag2 = 0;
					status2 = lastState2;
					setTimer(1, red_duration);
					setTimer(3, 1000);
					timeCountdown2 = red_duration/1000;
					set2 = &timeCountdown2;
				}
				if(lastState2 == AUTO_GREEN && returnFlag2 == BACK_TO_AUTOMATIC){
					clearAllLed();
					returnFlag2 = 0;
					status2 = lastState2;
					setTimer(1, green_duration);
					setTimer(3, 1000);
					timeCountdown2 = green_duration/1000;
					set2 = &timeCountdown2;
				}
				if(lastState2 == AUTO_YELLOW && returnFlag2 == BACK_TO_AUTOMATIC) {
					clearAllLed();
					returnFlag2 = 0;
					status2 = AUTO_GREEN;
					setTimer(1, green_duration);
					setTimer(3, 1000);
					timeCountdown2 = green_duration/1000;
					set2 = &timeCountdown2;
				}
				break;

			default:
				break;
	}
}
