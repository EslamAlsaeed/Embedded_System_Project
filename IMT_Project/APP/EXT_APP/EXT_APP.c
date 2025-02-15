/*
 * EXT_APP.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Eslam
 */
#include "../../MCAL/EXT_ISR/EXT_ISR_Interface.h"
#include "../../MCAL/Global_ISR/GIE_ISR_Interface.h"
#include"../../HAL/Button/Button_Interface.h"
#include "../../HAL/LED/LED_Interface.h"
#include <avr/delay.h>
/*Function to
 *
 */
void EXT_APP_1(void) {
	Button_InitPullup(PORTB, PIN2);
	GIE_State(ENABLE);
	EXT_ISR0Intial(ENABLE, RASING_EDGE);
	EXT_ISRFlag(INT0);
	while (1) {
		LED_ON(PORTB, PIN0);
		void __vector_1(void);
	}
}

/*Function To
 *
 */
void EXT_APP_2(void) {

	while (1) {

	}
}

/*Function To
 *
 */

void EXT_APP_3(void) {

	while (1) {

	}
}

void __vector_1(void) {
	if (Button_GetValue(PINB, PIN2) == LOW) {
	LED_OFF(PORTB, PIN0);
	_delay_ms(1000);
	}
}


void __vector_2(void) {

}

void __vector_3(void) {

}
