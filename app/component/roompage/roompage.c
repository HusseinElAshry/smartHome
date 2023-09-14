/*
 * roompage.c
 *
 *  Created on: ١٠‏/٠٩‏/٢٠٢٣
 *      Author: ASHRY
 */
#include "../../../LIB/math/datatypes.h"
#include "../../../HAL/keypad/keypad.h"
#include "../../../HAL/lcd/lcd.h"
#include "../../room/room.h"
#include "../../tv/tv.h"
#include "../tvandac/tvpage.h"
#include "./roompage.h"

void displayRoomPageOne(){
	autoListener();
	ACautoListen();
	ROOM_vidInit();
	u8 key = '+';
	HCLCD_vidClear();
	HCLCD_vidGoTo(0,0);
	HCLCD_vidSendString("4.room1  5.room2");
	HCLCD_vidGoTo(0,1);
	HCLCD_vidSendString("*.back    #.more");
	while(key!='*' && key !='#'){
		while( key != '4' && key != '5' && key !='*' && key !='#'){
			key = HKEYPAD_u8getPressedValue();
		}
		switch(key){
			case '4' :
				displayRoomSetting(ROOM1_PIN,1);
				break;
			case '5' :
				displayRoomSetting(ROOM2_PIN,1);
				break;
			case '#' :
				displayRoomPageTwo();
				break;
			case '*':
				break;
				break;
			default :
				break;
		}
		key = HKEYPAD_u8getPressedValue();

	}
}
void displayRoomPageTwo(){
	autoListener();
	ACautoListen();
	u8 key = '+';
	HCLCD_vidClear();
	HCLCD_vidGoTo(0,0);
	HCLCD_vidSendString("6.room3  7.room4");
	HCLCD_vidGoTo(0,1);
	HCLCD_vidSendString("*.back    #.more");
	while(key!='*'&& key!='#'){
		while( key != '6' && key != '7' && key !='*' && key !='#'){
			key = HKEYPAD_u8getPressedValue();
		}
		switch(key){
			case '6' :
				displayRoomSetting(ROOM3_PIN,2);
				break;
			case '7' :
				displayRoomSetting(ROOM4_PIN,2);
				break;
			case '*' :
				displayRoomPageOne();
				break;
			case '#' :
				displayTVPage();
				break;
			default :
				break;
		}
		key = HKEYPAD_u8getPressedValue();

	}
}
void displayRoomSetting(u8 roomNumber,u8 pageNum){
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
				ROOM_switchOn(roomNumber);
				break;
			case '2' :
				ROOM_switchOff(roomNumber);
				break;
			case '3' :
				ROOM_AutoLight(roomNumber);
				break;
			case '*' :
				switch(pageNum){
					case 1:
						displayRoomPageOne();
						break;
					case 2:
						displayRoomPageTwo();
						break;
					default:
						break;

				}
				break;
			default :
				break;
		}
		key = HKEYPAD_u8getPressedValue();
	}
}
