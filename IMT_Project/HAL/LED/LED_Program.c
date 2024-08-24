/*
 * Progrma.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Eslam
 */
#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"

/*Used for make led ON
 *Receive PORT name
 *Receive PIN Number
 */
void LED_ON(u8 PORT, u8 PIN) {
	Set_PinDirection(PORT, PIN, OUTPUT);
	Set_PinValue(PORT, PIN, HIGH);

}

/*Used for make led OFF
 *Receive PORT name
 *Receive PIN Number
 */

void LED_OFF(u8 PORT, u8 PIN) {
	Set_PinDirection(PORT, PIN, OUTPUT);
	Set_PinValue(PORT, PIN, LOW);

}

/*Used for make led ON and OFF with Delay
 *Receive PORT name
 *Receive PIN Number
 *Receive and Delay time
 */

void LED_Delay(u8 PORT, u8 PIN, u8 Delay) {
	Set_PinDirection(PORT, PIN, OUTPUT);

	Set_PinValue(PORT, PIN, HIGH);
	_delay_ms(Delay);
	Set_PinValue(PORT, PIN, LOW);
	_delay_ms(Delay);
}

/*Used for make Full PORT ON OR OFF
 *Receive PORT name
 *Receive PORT Value
 */

void LED_Port(u8 PORT, u8 Value) {
	Set_PortDirection(PORT, OUTPUT);
	Set_PortValue(PORT, Value);

}

/*Used for make Full PORT ON and OFF with Delay
 *Receive PORT name
 *Receive Delay Value
 */

void LED_PortDelay(u8 PORT, u8 Delay) {
	Set_PortDirection(PORT, OUTPUT);

	Set_PortValue(PORT, HIGH);
	_delay_ms(Delay);
	Set_PortValue(PORT, LOW);
	_delay_ms(Delay);


}

/*function play all led by sequence
 * Receive PORT Name
 * Receive Delay you Want
 *
 */


void LED_Switch(u8 PORT, u8 Delay) {
	LED_ON(PORT, PIN0);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN0);
	_delay_ms(Delay);

	LED_ON(PORT, PIN1);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN1);
	_delay_ms(Delay);

	LED_ON(PORT, PIN2);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN2);
	_delay_ms(Delay);

	LED_ON(PORT, PIN3);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN3);
	_delay_ms(Delay);

	LED_ON(PORT, PIN4);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN4);
	_delay_ms(Delay);

	LED_ON(PORT, PIN5);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN5);
	_delay_ms(Delay);

	LED_ON(PORT, PIN6);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN6);
	_delay_ms(Delay);

	LED_ON(PORT, PIN7);
	_delay_ms(Delay);
	LED_OFF(PORT, PIN7);
	_delay_ms(Delay);


}

