/*
 * steppermotor.h
 *
 *  Created on: Aug 21, 2023
 *      Author: ASHRY
 */

#ifndef HAL_MOTOR_STEPPER_MOTOR_H_
#define HAL_MOTOR_STEPPER_MOTOR_H_


#define PINK_PORT 	PORT_B
#define YELLOW_PORT PORT_D
#define BLUE_PORT PORT_D
#define PINK      7
#define YELLOW    0
#define BLUE    1






void MOTOR_Init(void);


void MOTOR_Stop(void);

void MOTOR_CW(void);

void MOTOR_CCW(void);




#endif /* HAL_MOTOR_STEPPER_MOTOR_H_ */
