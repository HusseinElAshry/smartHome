/*
 * motor.c
 *
 *  Created on: Aug 21, 2023
 *      Author: ASHRY
 */



#include "../../LIB/math/datatypes.h"
#include "../../LIB/math/bitmask.h"
#include "../../MCAL/dio/dio.h"
#include "./steppermotor.h"
#include "util/delay.h"

void MOTOR_Init(void)
{
	DIO_VIDSetPinDirection(PINK_PORT,PINK,HIGH);
	DIO_VIDSetPinDirection(YELLOW_PORT,YELLOW,HIGH);
	DIO_VIDSetPinDirection(BLUE_PORT,BLUE,HIGH);
}


void MOTOR_Stop(void)
{
	DIO_VIDSetPinValue(PINK_PORT,PINK,LOW);
	DIO_VIDSetPinValue(YELLOW_PORT,YELLOW,LOW);
	DIO_VIDSetPinValue(BLUE_PORT,BLUE,LOW);
}
void MOTOR_CW(void)
{

	DIO_VIDSetPinValue(BLUE_PORT,BLUE,LOW);
	DIO_VIDSetPinValue(PINK_PORT,PINK,LOW);
	DIO_VIDSetPinValue(YELLOW_PORT,YELLOW,HIGH);

}

void MOTOR_CCW(void)
{
	DIO_VIDSetPinValue(BLUE_PORT,BLUE,HIGH);
	DIO_VIDSetPinValue(PINK_PORT,PINK,LOW);
	DIO_VIDSetPinValue(YELLOW_PORT,YELLOW,LOW);
}

