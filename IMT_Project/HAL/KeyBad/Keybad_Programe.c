/*
 * Keybad_Programe.c
 *
 *  Created on: Jul 28, 2024
 *      Author: Eslam
 */
#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
#include"Keybad_Interface.h"
#include"../Button/Button_Interface.h"


/*Function to Set Intialization for PORt Whcich will used with Keybad
 * Make First Four Pins as OUTPUT to Columes
 * And Make Last Four Pins As INPUT to Rows
 *Receive Name of PORT only like  (PORTA)
 */
void Keybad_HWIntial(u8 PORT) {
	Set_PortDirection(PORT, 0x0F);
	Set_PortValue(PORT, 0xF0);
}

/*Function to Set Intialization for PORb Which will used with Keybad
 *Set Part Which Make Keybad Work and Return Values Which Wanted
 *Be careful if you use Port Expected PORTA  you must go to function and Edit it
 */


u8 Keybad_SWIntial() {

	char keys[4][4] = { { '1', '2', '3', 'A' }, { '4', '5', '6', 'B' }, { '7',
			'8', '9', 'C' }, { '*', '0', '#', 'D' } };

	for (int col = 0; col < 4; col++) {
		Set_PinValue(PORTB, col + 4, HIGH); // Enable one row at a time
		_delay_ms(50); // Delay for stability

		for (int row = 4; row < 8; row++) {
			if (!Get_PinValue(PINb, col)) {
				return keys[col][row - 4];
				while (!Get_PinValue(PINb, row))
					_delay_ms(10);
			}
		}
		//Set_PinValue(PORTB, col, HIGH);
	}



	//return '\0'; // No key pressed
}

/*Special Function to Set Values Which Keybad Will Returned it
 * Made Every Value Build it place in keybad
 *Receive value from function of Keybad_SWIntial()
 */
static u8 Keybad_Value(u8 Number) {

	switch (Number) {
	case 1:
		return '1';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return 'A';
		break;
	case 5:
		return '4';
		break;
	case 6:
		return '5';
		break;
	case 7:
		return '6';
		break;
	case 8:
		return 'B';
		break;
	case 9:
		return '7';
		break;
	case 10:
		return '8';
		break;
	case 11:
		return '9';
		break;
	case 12:
		return 'C';
		break;
	case 13:
		return '*';
		break;
	case 14:
		return '0';
		break;
	case 15:
		return '#';
		break;
	case 16:
		return 'D';
		break;
		//default:
		//return '%';
		//break;
	}
}
