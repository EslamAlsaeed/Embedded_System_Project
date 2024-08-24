/*
 * ADC_Programe.c
 *
 *  Created on: Aug 5, 2024
 *      Author: Eslam
 */

#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include"ADC_Private.h"
#include"ADC_Config.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
/*Function to select the voltage reference for the ADC
 *Receive Mode
 *Mode AREF to  Internal Vref turned off
 *Mode AVCC to AVCC with external capacitor at AREF pin
 *Mode Reserved
 *Mode AREF_IN toInternal 2.56V Voltage Reference with external capacitor at AREF pin
 */
void ADC_VoltageRef(u8 Mode) {

	switch (Mode) {
//AREF, Internal Vref turned off
	case AREF:
		Clr_Bit(ADMUX, REFS_1);
		Clr_Bit(ADMUX, REFS_0);
	break;
//AVCC with external capacitor at AREF pin
	case AVCC:
		Clr_Bit(ADMUX, REFS_1);
		Set_Bit(ADMUX, REFS_0);
		break;
// Reserved
	case Reserved:
		Set_Bit(ADMUX, REFS_1);
		Clr_Bit(ADMUX, REFS_0);
		break;
//Internal 2.56V Voltage Reference with external capacitor at AREF pin
	case AREF_IN:
		Set_Bit(ADMUX, REFS_1);
		Set_Bit(ADMUX, REFS_0);
		break;

	}
}

/*Function to Set ADC Left Adjust Result
 * bit affects the presentation of the ADC conversion result in the ADC Data Register
 * Receive Mode like (RIGHT or LEFT)
 * Mode LEFT mean  left adjust the result
 * Mode RIGHT mean Right Adjusted result
 */

u8 ADC_AdjustResult(u8 Mode) {

	switch (Mode) {

	case LEFT:
		Set_Bit(ADMUX, ADLAR);
		return ADCH;
		break;
	case RIGHT:
		Clr_Bit(ADMUX, ADLAR);
		return ADCL;
		break;
	
	}

}

/*Function for bits selects which combination of analog inputs are connected to the ADC
 * This function for Single Ended Input
 * Receive Name Pin like (ADC0 or ADC1... )
 */

void ADC_SinglePinInput(u8 Pin) {
	switch (Pin) {
	case ADC0:
		Set_PinDirection(PORTA, PIN0, INPUT);
		Clr_Bit(ADMUX, MUX0);
		Clr_Bit(ADMUX, MUX1);
		Clr_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	case ADC1:
		Set_PinDirection(PORTA, PIN1, INPUT);
		Set_Bit(ADMUX, MUX0);
		Clr_Bit(ADMUX, MUX1);
		Clr_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	case ADC2:
		Set_PinDirection(PORTA, PIN2, INPUT);
		Clr_Bit(ADMUX, MUX0);
		Set_Bit(ADMUX, MUX1);
		Clr_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	case ADC3:
		Set_PinDirection(PORTA, PIN3, INPUT);
		Set_Bit(ADMUX, MUX0);
		Set_Bit(ADMUX, MUX1);
		Clr_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	case ADC4:
		Set_PinDirection(PORTA, PIN4, INPUT);
		Clr_Bit(ADMUX, MUX0);
		Clr_Bit(ADMUX, MUX1);
		Set_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	case ADC5:
		Set_PinDirection(PORTA, PIN5, INPUT);
		Set_Bit(ADMUX, MUX0);
		Clr_Bit(ADMUX, MUX1);
		Set_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	case ADC6:
		Set_PinDirection(PORTA, PIN6, INPUT);
		Clr_Bit(ADMUX, MUX0);
		Set_Bit(ADMUX, MUX1);
		Set_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	case ADC7:
		Set_PinDirection(PORTA, PIN7, INPUT);
		Set_Bit(ADMUX, MUX0);
		Set_Bit(ADMUX, MUX1);
		Set_Bit(ADMUX, MUX2);
		Clr_Bit(ADMUX, MUX3);
		Clr_Bit(ADMUX, MUX4);
		break;
	}

}
/*Function To Set ADC Enable or Disable
 * Receive Mode Like (ENABLE or DISABLE)
 */
void ADC_Control(u8 Mode) {
	switch (Mode) {
	case ENABLE:

		Set_Bit(ADCSRA, ADEN);  //Bit Enable ADC
		Set_Bit(ADCSRA, ADSC);  //Bit to Start Conversion Mode
		while (Get_Bit(ADCSRA,ADIF) == 0)
			//set flag on of interrupt
			;
		Set_Bit(ADCSRA, ADIF); //clear flag
		break;
	case DISABLE:
		Clr_Bit(ADCSRA, ADEN);
		Clr_Bit(ADCSRA, ADSC);
		break;

	}

}
/*Function determine the division factor between the XTAL frequency and the input clock to the ADC
 *Receive Mode Based On Factor  like (FACTOR_2 or FACTOR_128..)
 */

void ADC_DivisionFactor(u8 Mode) {
	switch (Mode) {
	case FACTOR_0: //Factor 2
		Clr_Bit(ADCSRA, ADPS0);
		Clr_Bit(ADCSRA, ADPS1);
		Clr_Bit(ADCSRA, ADPS2);
		break;
	case FACTOR_2: //Factor 2
		Set_Bit(ADCSRA, ADPS0);
		Clr_Bit(ADCSRA, ADPS1);
		Clr_Bit(ADCSRA, ADPS2);
		break;
	case FACTOR_4: //Factor 4
		Clr_Bit(ADCSRA, ADPS0);
		Set_Bit(ADCSRA, ADPS1);
		Clr_Bit(ADCSRA, ADPS2);
		break;
	case FACTOR_8:
		Set_Bit(ADCSRA, ADPS0);
		Set_Bit(ADCSRA, ADPS1);
		Clr_Bit(ADCSRA, ADPS2);
		break;
	case FACTOR_16:
		Clr_Bit(ADCSRA, ADPS0);
		Clr_Bit(ADCSRA, ADPS1);
		Set_Bit(ADCSRA, ADPS2);
		break;
	case FACTOR_32:
		Set_Bit(ADCSRA, ADPS0);
		Clr_Bit(ADCSRA, ADPS1);
		Set_Bit(ADCSRA, ADPS2);
		break;
	case FACTOR_64:
		Clr_Bit(ADCSRA, ADPS0);
		Set_Bit(ADCSRA, ADPS1);
		Set_Bit(ADCSRA, ADPS2);
		break;
	case FACTOR_128:
		Set_Bit(ADCSRA, ADPS0);
		Set_Bit(ADCSRA, ADPS1);
		Set_Bit(ADCSRA, ADPS2);
		break;
	}

}

/*Function To Special Function Auto Trigger Source
 * Receive Mode like (FREE_RUN or ANALOGE_COMP  ...)
 */
void ADC_TriggerSourc(u8 Mode) {
	switch (Mode) {
	case FREE_RUN:
		Clr_Bit(SFIOR, ADTS0);
		Clr_Bit(SFIOR, ADTS1);
		Clr_Bit(SFIOR, ADTS2);
		break;
	case ANALOGE_COMP:
		Set_Bit(SFIOR, ADTS0);
		Clr_Bit(SFIOR, ADTS1);
		Clr_Bit(SFIOR, ADTS2);
		break;
	case EXTER_INT_0:
		Clr_Bit(SFIOR, ADTS0);
		Set_Bit(SFIOR, ADTS1);
		Clr_Bit(SFIOR, ADTS2);
		break;
	case TIMER0_COMPARE:
		Set_Bit(SFIOR, ADTS0);
		Set_Bit(SFIOR, ADTS1);
		Clr_Bit(SFIOR, ADTS2);
		break;
	case TIMER0_OVERFLOW:
		Clr_Bit(SFIOR, ADTS0);
		Clr_Bit(SFIOR, ADTS1);
		Set_Bit(SFIOR, ADTS2);
		break;
	case TIMER1_COMPERA_B:
		Set_Bit(SFIOR, ADTS0);
		Clr_Bit(SFIOR, ADTS1);
		Set_Bit(SFIOR, ADTS2);
		break;

	case ITMER1_OVERFLOW:
		Clr_Bit(SFIOR, ADTS0);
		Set_Bit(SFIOR, ADTS1);
		Set_Bit(SFIOR, ADTS2);
		break;

	case TIMER1_CAPUTURE:
	    Set_Bit(SFIOR,ADTS0);
		Set_Bit(SFIOR, ADTS1);
		Set_Bit(SFIOR, ADTS2);
	break;

}
}

/*Function Set All Defination As A defult
 * Receive Channal Name like (ADC0 or ADC1 ..)
 * Voltage refernce is AVCC
 * Adjust result is LEFT
 * 
 */
u8 SelfRead(u8 CHANNAL) {
	ADC_Control(ENABLE);
	ADC_VoltageRef(AVCC);
	ADC_SinglePinInput(CHANNAL);
	return ADC_AdjustResult(LEFT);

}

