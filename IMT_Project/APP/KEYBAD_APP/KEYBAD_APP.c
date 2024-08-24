/*
 * KEYBAD_APP.c
 *
 *  Created on: Aug 6, 2024
 *      Author: Eslam
 */
#include"../../HAL/KeyBad/Keybad_Interface.h"
#include"../../HAL/LCD/LCD_Interface.h"
/*Function to
 *
 */
void KEYBAD_APP_1(void) {
	LCD_HWIntial(PORTC, PORTD);
	Keybad_HWIntial(PORTB);

	while (1) {
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		LCD_SendString(PORTC, PORTD, "Value is :: ");
		u8 Value = Keybad_SWIntial();
		//	if (Value != '\0')
			LCD_SendData(PORTC, PORTD, Value);

		LCD_SendCommand(PORTC, PORTD, CLEAR);
	}
}

/*Function To
 *
 */
void KEYBAD_APP_2(void) {
	LCD_HWIntial(PORTC, PORTD);
	while (1) {
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		//LCD_SendData(PORTC, PORTD, Data);
		LCD_SendCommand(PORTC, PORTD, CLEAR);
	}
}

/*Function to
 *
 */
void KEYBAD_APP_3(void) {
	LCD_HWIntial(PORTC, PORTD);
	while (1) {
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		//LCD_SendData(PORTC, PORTD, Data);
		LCD_SendCommand(PORTC, PORTD, CLEAR);
	}
}
