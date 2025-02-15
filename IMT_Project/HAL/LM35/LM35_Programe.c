/*
 * LM35_Programe.c
 *
 *  Created on: Aug 22, 2024
 *      Author: Eslam
 */

#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
#include "../../MCAL/ADC/ADC_Interface.h"
#include"LM35_Config.h"
/*Function To read Value from sensor LM35
 * Receive Channal Name like (ADC0 or ADC1.. )
 * Voltage reference is AVCC and Adjust result is LEFT
 * return equation to calculate value of sensor
 *
 */
u8 SensorLM35(u8 CHANNAL) {

	//ADC_Init();
	ADC_Control(ENABLE);
	ADC_VoltageRef(AREF_IN);
	//ADC_DivisionFactor(FACTOR_128);
	ADC_SinglePinInput(CHANNAL);
	return ADC_AdjustResult(LEFT);


}
