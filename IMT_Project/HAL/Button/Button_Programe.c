/*
 * Button_Programe.c
 *
 *  Created on: Jul 27, 2024
 *      Author: Eslam
 */
#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
#include"Button_Interface.h"
/*Function to Define Pin As INPUT PULLUP
 * Receive Name Port like (PORTA)
 * Receive Name Pin like (PIN_N)
 */
void Button_InitPullup(u8 PORT, u8 PIN) {
	Set_PinDirection(PORT, PIN, INPUT);
	Set_PinValue(PORT, PIN, HIGH);
}

/*Function to get Pin Value
 *Receive PIN Name like (PINA)
 *Receive Pin Name like (PIN1)
 *Note that you must be Intialzation pin by Button_InitPullup or Button_InitPullDown
 */
u8 Button_GetValue(u8 PIN, u8 PIN_N) {

	return Get_PinValue(PIN, PIN_N);
}
/*Function to Define Pin As INPUT PULLDOWN
 * Receive Name Port like (PORTA)
 * Receive Name Pin like (PIN0)
 */
void Button_InitPullDown(u8 PORT, u8 PIN) {
	Set_PinDirection(PORT, PIN, INPUT);
	Set_PinValue(PORT, PIN, LOW);
}
