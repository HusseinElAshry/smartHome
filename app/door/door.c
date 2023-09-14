/*
 * door.c
 *
 *  Created on: ١١‏/٠٩‏/٢٠٢٣
 *      Author: ASHRY
 */
#include "../../LIB/math/datatypes.h"
#include "../../HAL/steppermotor/steppermotor.h"
#include "./door.h"
void enableDoor(){
	MOTOR_Init();
}
void openDoor(){
	MOTOR_CW();
}
void closeDoor(){
	MOTOR_CCW();
}
