/*
 * software_timer.c
 *
 *  Created on: Sep 24, 2024
 *      Author: nhanvo
 */

#include "software_timer.h"

int timer_flag[MAX_TIMER];
int timer_counter[MAX_TIMER];
int TIMER_CYCLE = 10;

void setTimer(int index, int counter) {
	timer_flag[index] = 0;
	timer_counter[index] = counter/TIMER_CYCLE;
}
void timerRun() {
	for(int i = 0; i < MAX_TIMER; i++) {
		if(timer_counter[i] > 0) {
			timer_counter[i]--;
		}
		if(timer_counter[i] <= 0) {
			timer_flag[i] = 1;
		}
	}
}

