/*
 * auth.c
 *
 *  Created on: ١١‏/٠٩‏/٢٠٢٣
 *      Author: ASHRY
 */
#include "../../../LIB/math/datatypes.h"
#include "../../../HAL/keypad/keypad.h"
#include "../../../HAL/lcd/lcd.h"
#include "../../../MCAL/eeprom/eeprom.h"
#include "../../auth/auth.h"
#include "../tvandac/tvpage.h"
#include "./auth.h"
#include<util/delay.h>
void displaySignUp(u8*username,u8*pass){
	displayMessage("#to proceed",2);
	while(HKEYPAD_u8getPressedValue()!='#');
	HCLCD_vidClear();
	HCLCD_vidGoTo(1,0);
	HCLCD_vidSendString("data was reset");
	HCLCD_vidGoTo(1,1);
	HCLCD_vidSendString("# to signup");
	while(HKEYPAD_u8getPressedValue()!='#');
	HCLCD_vidClear();
	signUpExecute(username,pass);
}
void displayLogin(u8*username,u8*pass){
	HCLCD_vidClear();
	displayMessage("# to login",3);
	while(HKEYPAD_u8getPressedValue()!='#');
	HCLCD_vidClear();
	loginExecute(username,pass);
	HCLCD_vidGoTo(0,1);
	HCLCD_vidSendString(username);
	_delay_ms(200);
	HCLCD_vidClear();
}

