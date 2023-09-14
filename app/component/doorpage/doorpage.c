/*
 * doorpage.c
 *
 *  Created on: ١١‏/٠٩‏/٢٠٢٣
 *      Author: ASHRY
 */
#include "../../../LIB/math/datatypes.h"
#include "../../room/room.h"
#include "../../tv/tv.h"
#include "../tvandac/tvpage.h"
void displayDoorSetting(){
	enableDoor();
	autoListener();
	ACautoListen();
	u8 key = '+';
	HCLCD_vidClear();
	HCLCD_vidGoTo(0,0);
	HCLCD_vidSendString("1.open   2.close");
	HCLCD_vidGoTo(0,1);
	HCLCD_vidSendString("*.back");
	while(key!='*'){
		while( key != '1' && key != '2' && key !='*'){
			key = HKEYPAD_u8getPressedValue();
		}
		switch(key){
		case '1' :
			openDoor();
			break;
		case '2' :
			closeDoor();
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
