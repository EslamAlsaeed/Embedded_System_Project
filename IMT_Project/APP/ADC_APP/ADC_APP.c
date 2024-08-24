/*
 * ADC_APP.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Eslam
 */
#include "../../MCAL/ADC/ADC_Interface.h"
#include "../../HAL/LCD/LCD_Interface.h"
/*Function To
 *
 */
void ADC_APP_1(void) {
	LCD_HWIntial(PORTC, PORTD);
	while (1) {
		ADC_VoltageRef(AREF); //select type voltage
		ADC_Control(ENABLE); //Enable ADC
		ADC_SinglePinInput(ADC0); //ADC0 Select
		//ADC_DivisionFactor(FACTOR_2); //Divion factor
		u8 data = ADC_AdjustResult(RIGHT); //Right Adjustment
		//lcd intial
		LCD_SWIntial(PORTC, PORTD);
		LCD_SendCommand(PORTC, PORTD, ROW_ONE);
		LCD_SendData(PORTC, PORTD, data);
		LCD_SendCommand(PORTC, PORTD, CLEAR);

	}
}

/*Function To
 *
 */
void ADC_APP_2(void) {

	while (1) {

	}
}

/*Function To
 *
 */
void ADC_APP_3(void) {

	while (1) {

	}
}

