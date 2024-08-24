/*
 * GIE_ISR_Programe.c
 *
 *  Created on: Aug 2, 2024
 *      Author: Eslam
 */

#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include"GIE_ISR_Private.h"
#include"GIE_ISR_Config.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
/*Function to Set Global Interrupt
 * Receive State like (ENABLE or DISABLE)
 */
void GIE_State(u8 State) {

	if (State == ENABLE) {

		Set_Bit(SREG_REG, SREG_I);
	}

	if (State == DISABLE) {

		Clr_Bit(SREG_REG, SREG_I);
}

}
