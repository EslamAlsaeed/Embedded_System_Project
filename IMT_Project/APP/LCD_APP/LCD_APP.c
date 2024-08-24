/*
 * LCD_APP.c
 *
 *  Created on: Aug 6, 2024
 *      Author: Eslam
 */
#include "../../HAL/LCD/LCD_Interface.h"
/*Function to Print Data from type Integer On Screen LCD on Row One
 *Receive Data That you want To Print in This fromt 'Data'
 */

void LCD_APP_1(u8 Data) {

	LCD_HWIntial(PORTC, PORTD);

	while (1) {
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		LCD_SendData(PORTC, PORTD, 'D');
		LCD_SendCommand(PORTC, PORTD, CLEAR);
	}
}

/*Function To Print String word That You Want
 *Receive String in this Format "String"
 */

void LCD_APP_2(u8 String) {
	LCD_HWIntial(PORTC, PORTD);
	while (1) {
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		LCD_SendString(PORTC, PORTD, String);

		LCD_SendCommand(PORTC, PORTD, CLEAR);
	}
}
u8 num(u8 i) {
	switch (i) {
	case 0:
		return '0';
		break;
	case 1:
		return '1';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
		break;
	case 6:
		return '6';
		break;
	case 7:
		return '7';
		break;
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	case 10:
		return '10';
		break;
	case 11:
		return '11';
		break;

	}

}
/*Function to Print Number from 0 to 10
 */

void LCD_APP_3(void) {
	LCD_HWIntial(PORTC, PORTD);
	while (1) {
		u8 i = 0;
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		LCD_SendString(PORTC, PORTD, "     Number ");
		LCD_SendCommand(PORTC, PORTD, ROW_TOW);
		//LCD_SendString(PORTC, PORTD, "        ");
		for (i = 0; i < 11; i++) {
			LCD_SendData(PORTC, PORTD, num(i));
			_delay_ms(500);

		}
		LCD_SendCommand(PORTC, PORTD, CLEAR);
	}
}
