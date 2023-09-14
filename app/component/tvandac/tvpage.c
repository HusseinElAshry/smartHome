/*
 * tvpage.c
 *
 *  Created on: ١١‏/٠٩‏/٢٠٢٣
 *      Author: ASHRY
 */
#include "../../../LIB/math/datatypes.h"
#include "../../../HAL/lcd/lcd.h"
#include "../../../HAL/keypad/keypad.h"
#include "../../room/room.h"
#include "../../tv/tv.h"
#include "../roompage/roompage.h"
#include "../doorpage/doorpage.h"
#include "./tvpage.h"
void displayTVPage(){
	autoListener();
	ACautoListen();
	u8 key = '+';
	HCLCD_vidClear();
	HCLCD_vidGoTo(0,0);
	HCLCD_vidSendString("8.TV        9.AC");
	HCLCD_vidGoTo(0,1);
	HCLCD_vidSendString("0.door    *.back");

	while( key != '8' && key != '9' && key !='0' && key !='*'){
		key = HKEYPAD_u8getPressedValue();
	}
	switch(key){
	case '8' :
		displayTVSetting();
		break;
	case '9' :
		displayACSetting();
		break;
	case '0' :
		displayDoorSetting();
		break;
	case '*' :
		displayRoomPageTwo();
		break;
	default :
		break;
	}

}
void displayACSetting(){
	autoListener();
	ACautoListen();
	u8 key = '+';
	HCLCD_vidClear();
	HCLCD_vidGoTo(0,0);
	HCLCD_vidSendString("1.on       2.off");
	HCLCD_vidGoTo(0,1);
	HCLCD_vidSendString("3.auto    *.back");
	while(key!='*'){
		while( key != '1' && key != '2' && key !='3' && key !='*'){
			key = HKEYPAD_u8getPressedValue();
		}
		switch(key){
			case '1' :
				turnOnAC();
				break;
			case '2' :
				turnOffAC();
				break;
			case '3' :
				autoAC();
				break;
			case '*' :
				displayTVPage();
				break;
			default :
				break;
		}
		key = HKEYPAD_u8getPressedValue();
	}
}
void displayTVSetting(){
	autoListener();
	ACautoListen();
	u8 key = '+';
	HCLCD_vidClear();
	HCLCD_vidGoTo(0,0);
	HCLCD_vidSendString("1.on       2.off");
	HCLCD_vidGoTo(0,1);
	HCLCD_vidSendString("*.back");
	while(key!='*'){
		while( key != '1' && key != '2' && key !='*'){
			key = HKEYPAD_u8getPressedValue();
		}
		switch(key){
			case '1' :
				turnOnTV();
				break;
			case '2' :
				turnOffTV();
				break;
			case '*' :
				displayTVPage();
				break;
			default :
				break;
		}
		key = HKEYPAD_u8getPressedValue();

	}
}
