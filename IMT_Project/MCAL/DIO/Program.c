/*
 * Program.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Eslam
 */

#include "Private.h"
#include "Interface.h"
#include "Config.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
/* Function to Set Pin Direction
 * Receive Name of Port in all capital like (PORTA)
 * And Name Pin like(PIN0)
 * And Direction like (OUTPUT)
 */

void Set_PinDirection(u8 Port , u8 Pin , u8 Direction ){

	if (Direction == OUTPUT){
		switch(Port){
		case PORTA:
			Set_Bit(DDRa, Pin);   break;
		case PORTB:
			Set_Bit(DDRb, Pin);   break;
		case PORTC:
			Set_Bit(DDRc, Pin);   break;
		case PORTD:
			Set_Bit(DDRd, Pin);   break;
         }

	}
	if (Direction == INPUT){
		switch(Port){
		case PORTA:
			Clr_Bit(DDRa, Pin);   break;
		case PORTB:
			Clr_Bit(DDRb, Pin);   break;
		case PORTC:
			Clr_Bit(DDRc, Pin);   break;
		case PORTD:
			Clr_Bit(DDRd, Pin);   break;

		}


}

}

/* Function to Set Pin Value
 * Receive Name of Port in all capital like (PORTA)
 * And Name Pin like(PIN0)
 * And Value like (HIGH)
 */

void Set_PinValue(u8 Port , u8 Pin, u8 Value){
	Set_PinDirection(Port, Pin, OUTPUT);
	if (Value== HIGH){
		switch(Port){
		case PORTA:
			Set_Bit(PORTa, Pin);   break;
		case PORTB:
			Set_Bit(PORTb, Pin);   break;
		case PORTC:
			Set_Bit(PORTc, Pin);   break;
		case PORTD:
			Set_Bit(PORTd, Pin);   break;
         }

	}
	if (Value == LOW){
		switch(Port){
		case PORTA:
			Clr_Bit(PORTa, Pin);   break;
		case PORTB:
			Clr_Bit(PORTb, Pin);   break;
		case PORTC:
			Clr_Bit(PORTc, Pin);   break;
		case PORTD:
			Clr_Bit(PORTd, Pin);   break;

		}


}


}
/* Function to Set Full Port  Direction
 * Receive Name of Port in all capital like (PORTA)
 * And Direction like (OUTPUT or INPUT )or Value you want like 0xF0
 */

void Set_PortDirection(u8 Port ,u8 Direction){

	if (Direction == OUTPUT){
		switch(Port){
		case PORTA:
			DDRa=0b11111111;   break;
		case PORTB:
			DDRb=0b11111111;   break;
		case PORTC:
			DDRc=0b11111111;   break;
		case PORTD:
			DDRd=0b11111111;   break;
         }

	}
	else if (Direction == INPUT) {
		switch(Port){
		case PORTA:
			DDRa=0b00000000;   break;
		case PORTB:
			DDRb=0b00000000;   break;
		case PORTC:
			DDRc=0b00000000;   break;
		case PORTD:
			DDRd=0b00000000;   break;

		}


}
	else {
		switch (Port) {
		case PORTA:
			PORTa = Direction;
			break;
		case PORTB:
			PORTb = Direction;
			break;
		case PORTC:
			PORTc = Direction;
			break;
		case PORTD:
			PORTd = Direction;
			break;
		}
	}

}
/*Set Port Value make it OUTPUT
 * Receive PORT Name like (PORTA)
 *Receive Value That You Want Or to Set FUll Port By (HIGH or LOW)
 */

void Set_PortValue(u8 Port, u8 Value) {

	Set_PortDirection(Port, OUTPUT);
	if (Value == HIGH) {
		switch (Port) {
		case PORTA:
			PORTa = 0b11111111;
			break;
		case PORTB:
			PORTb = 0b11111111;
			break;
		case PORTC:
			PORTc = 0b11111111;
			break;
		case PORTD:
			PORTd = 0b11111111;
			break;

}
	}
	else if (Value == LOW) {
		switch (Port) {
		case PORTA:
			PORTa = 0b00000000;
			break;
		case PORTB:
			PORTb = 0b00000000;
			break;
		case PORTC:
			PORTc = 0b00000000;
			break;
		case PORTD:
			PORTd = 0b00000000;
			break;

		}
	}

	else {
		switch (Port) {
		case PORTA:
			PORTa = Value;
		break;
		case PORTB:
			PORTb = Value;
		break;
		case PORTC:
			PORTc = Value;
		break;
		case PORTD:
			PORTd = Value;
		break;
		}
}
}

/*Function To Get Value for Any Pin
 * Receive Name Of PIN like (PINA)
 * Receive Pin Number like(PIN0)
 */
u8 Get_PinValue(u8 PIN, u8 PIN_N) {

	switch (PIN) {
	case PINA:
		return Get_Bit(PINa, PIN_N);
		break;
	case PINB:
		return Get_Bit(PINb, PIN_N);
		break;
	case PINC:
		return Get_Bit(PINc, PIN_N);
		break;
	case PIND:
		return Get_Bit(PINd, PIN_N);
		break;
	}


}
