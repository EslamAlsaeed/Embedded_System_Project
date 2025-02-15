/* * 7_SEGMENT_APP.c
 *
 *  Created on: Aug 6, 2024
 *      Author: Eslam
 */
#include "../../HAL/7_Segment/7_Segment_Interface.h"
#include "../../HAL/Button/Button_Interface.h"
#include "../../HAL/LED/LED_Interface.h"
/*Function to Send any Number
 * Receive Number That you want to print
 */
void _7SEGMENT_APP_1(u8 Number) {
	_7Segment_Init(PORTC);
	_7Segment_Status(PORTC, COMMAN_CATHOD, ON);
	while (1) {
		_7Segment_SpecificNumber(PORTC, COMMAN_CATHOD, Number);
	}
}

/*Function to Print Number form zero  to 9
 */
void _7SEGMENT_APP_2(void) {
	_7Segment_Init(PORTC);
	_7Segment_Status(PORTC, COMMAN_CATHOD, ON);
	while (1) {
		_7Segment0To9(PORTC, COMMAN_CATHOD);
	}
}

/*Function to Increase By Button and Decrease By Anther Button
 *With LED Detect over Increase and Decrease
 */
void _7SEGMENT_APP_3(void) {
	u8 Inc = 0;
	_7Segment_Init(PORTC);
	_7Segment_Status(PORTC, COMMAN_CATHOD, ON);
	Button_InitPullup(PORTB, PIN0);
	Button_InitPullup(PORTB, PIN1);

	while (1) {

		u8 value = Button_GetValue(PINB, PIN0);
		_delay_ms(100);
		if (value == LOW) {
			Inc++;

			_7Segment_SpecificNumber(PORTC, COMMAN_CATHOD, Inc);
			LED_ON(PORTB, PIN2);
			//_delay_ms(500);
		}
		else {
			LED_OFF(PORTB, PIN2);
		}
		u8 value_2 = Button_GetValue(PINB, PIN1);
		_delay_ms(100);
		if (value_2 == LOW) {
			Inc--;
			_7Segment_SpecificNumber(PORTC, COMMAN_CATHOD, Inc);
			LED_ON(PORTB, PIN3);
			//_delay_ms(1000);
		}
		else {
			LED_OFF(PORTB, PIN3);
		}

		if (Inc > 9 || Inc < 0) {
			Inc = 0;
			_7Segment_SpecificNumber(PORTC, COMMAN_CATHOD, Inc);
			LED_ON(PORTB, PIN4);
			_delay_ms(1000);
		}
		else {
			LED_OFF(PORTB, PIN4);
		}
	}
}
void _7SEGMENT_APP_4(void) {
	while (1) {

	}
}

