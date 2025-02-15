/*
 * EXT_ISR_Programe.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Eslam
 */

#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include"EXT_ISR_Private.h"
#include"EXT_ISR_Config.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"

/*Function to Set Interrupt 0 for run Mode of Sleep Mode
 * Receive ISR0_State which Be like (ENABLE or DISABLE)
 * Receive ISR0_Mode which like (LOW_LEVEL ,NO_CHANGE , FALLING_EDGE, RASING_EDGE,DEFUALT )
 *Defualt mean that Mode is Rising Edge
 */
void EXT_ISR0Intial(u8 ISR0_State, u8 ISR0_Mode) {


#if ISR0_State == DISABLE
	Clr_Bit(GICR_REG, GICR_INT0);
#elif ISR0_State == ENABLE
	Set_Bit(GICR_REG, GICR_INT0);
#endif
	//INT0 on low level
	if (ISR0_Mode == LOW_LEVEL) {
	Clr_Bit(MCUCR_REG, MCUCR_ISC00);
	Clr_Bit(MCUCR_REG, MCUCR_ISC01);
	}
	//INT0 Any change
	else if (ISR0_Mode == NO_CHANGE) {
	Set_Bit(MCUCR_REG, MCUCR_ISC00);
	Clr_Bit(MCUCR_REG, MCUCR_ISC01);
	}
//INT0 on falling edge
	else if (ISR0_Mode == FALLING_EDGE) {
	Clr_Bit(MCUCR_REG, MCUCR_ISC00);
	Set_Bit(MCUCR_REG, MCUCR_ISC01);
	}
//INT0 on High level rising Edge
	else if (ISR0_Mode == RASING_EDGE) {
Set_Bit(MCUCR_REG, MCUCR_ISC00);
Set_Bit(MCUCR_REG, MCUCR_ISC01);
	}
//Defualt Mode is Rising Edage
	else if (ISR0_Mode == DEFUALT) {
	Set_Bit(MCUCR_REG, MCUCR_ISC00);
	Set_Bit(MCUCR_REG, MCUCR_ISC01);
}

}
void EXT_ISR1Intial(u8 ISR1_State, u8 ISR1_Mode) {

#if ISR1_State == DISABLE
	Clr_Bit(GICR_REG, GICR_INT1);
#elif ISR1_State == ENABLE
	Set_Bit(GICR_REG, GICR_INT1);
#endif
	//INT1 on low level
	if (ISR1_Mode == LOW_LEVEL) {
		Clr_Bit(MCUCR_REG, MCUCR_ISC10);
		Clr_Bit(MCUCR_REG, MCUCR_ISC11);
	}
	//INT1 Any change
	else if (ISR1_Mode == NO_CHANGE) {
		Set_Bit(MCUCR_REG, MCUCR_ISC10);
		Clr_Bit(MCUCR_REG, MCUCR_ISC11);
	}
//INT1 on falling edge
	else if (ISR1_Mode == FALLING_EDGE) {
		Clr_Bit(MCUCR_REG, MCUCR_ISC10);
		Set_Bit(MCUCR_REG, MCUCR_ISC11);
	}
//INT1 on High level rising Edge
	else if (ISR1_Mode == RASING_EDGE) {
		Set_Bit(MCUCR_REG, MCUCR_ISC10);
		Set_Bit(MCUCR_REG, MCUCR_ISC11);
	}



}
void EXT_ISR2Intial(u8 ISR2_State) {
#if ISR2_State == DISABLE
	Clr_Bit(GICR_REG, GICR_INT2);
#elif ISR2_State == ENABLE
	Set_Bit(GICR_REG, GICR_INT2);
#endif

	}

/*Function To Select INT
 *Receive INT name like (INT0)
 */
void EXT_ISRFlag(u8 INT) {
	switch (INT) {
	case INT0:
		Set_Bit(GIFR_REG, GIFR_INTF0);
		break;
	case INT1:
		Set_Bit(GIFR_REG, GIFR_INTF1);
		break;
	case INT2:
		Set_Bit(GIFR_REG, GIFR_INTF2);
		break;
	}
}

