/*
 * global.h
 *
 *  Created on: Sep 23, 2024
 *      Author: nhanvo
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "light_traffic.h"
#include "led7_segment.h"
#include "fsm_automatic.h"
#include "fsm_setting.h"

#define INIT 		1
#define AUTO_RED 	2
#define AUTO_YELLOW 3
#define AUTO_GREEN  4

#define MODIFY_RED		12
#define MODIFY_YELLOW  	13
#define MODIFY_GREEN   	14


#define WAIT			15
#define BACK_TO_AUTOMATIC 16

extern int timeCountdown1;
extern int timeCountdown2;

extern int status1;
extern int lastState1;

extern int status2;
extern int lastState2;

extern int status3;

extern int returnFlag1;
extern int returnFlag2;

extern int mode;
extern int time_input;

extern int red_duration;
extern int yellow_duration;
extern int green_duration;


extern int * set1;
extern int * set2;

void systemInit();

#endif /* INC_GLOBAL_H_ */
