/*
 * LM35_APP.c
 *
 *  Created on: Aug 24, 2024
 *      Author: Eslam
 */
#include "../../HAL/LM35/LM35_Interface.h"
#include "../../HAL/LCD/LCD_Interface.h"
void LM35_APP_1(void) {

	LCD_HWIntial(PORTC, PORTD);

	while (1) {
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		LCD_SendString(PORTC, PORTD, "  Value ::  ");
		LCD_SendData(PORTC, PORTD, SensorLM35(ADC0));
		_delay_ms(100);
		LCD_SendCommand(PORTC, PORTD, CLEAR);


	}

}



