/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: nhanvo
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#define MAX_TIMER 10

extern int timer_flag[MAX_TIMER];

void setTimer(int index, int counter);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
