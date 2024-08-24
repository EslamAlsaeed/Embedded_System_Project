/*
 * Program.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Eslam
 */

#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
#include"7_Segment_Config.h"

/*function to  Set PORT As OUTPUT  to Use it with 7_Segment
 *Receive PORT Name
 */
void _7Segment_Init(u8 PORT) {

	Set_PortDirection(PORT, OUTPUT);

}

/*Function To Make 7_Segment ON
 *Receive PORT Name Like (PORTA)
 *Receive _7_SegmentType like (COMMAN_CATHOD or COMMAN_AHOD)
 *Receive Status like (ON or OFF )
 */
void _7Segment_Status(u8 PORT, u8 _7SegmentType, u8 Status) {
	if (_7SegmentType == COMMAN_ANOD) {
		if (Status == ON) {
			Set_PinValue(PORT, PIN7, HIGH);
		} else if (Status == OFF) {
			Set_PinValue(PORT, PIN7, LOW);
		}

	}

	else if (_7SegmentType == COMMAN_CATHOD) {
		if (Status == ON) {
			Set_PinValue(PORT, PIN7, LOW);
		} else if (Status == OFF) {
			Set_PinValue(PORT, PIN7, HIGH);
		}

}

}
/*Function to Print Any Number from 0 to 9
 *Receive PORT Name Like (PORTA)
 *Receive Status like (COMMAN_CATHOD or  COMMAN_ANOD)
 *Receive Number lik (0 or 1 ..)
 */
void _7Segment_SpecificNumber(u8 PORT, u8 Status, u8 Number) {
	u8 _7Segment_Cathode[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
			0x7F, 0x6F };
	u8 _7Segment_Anod[10] = { ~0x3F, ~0x06, ~0x5B, ~0x4F, ~0x66, ~0x6D, ~0x7D,
			~0x07, ~0x7F, ~0x6F };
	if (Status == COMMAN_CATHOD) {
		Set_PortValue(PORT, _7Segment_Cathode[Number]);
	}
	if (Status == COMMAN_ANOD) {
		Set_PortValue(PORT, _7Segment_Anod[Number]);
	}
}

/*Function to Print Number from 0 to 9
 * Receive PORT Name Like (PORTA)
 * Receive Status like (COMMAN_CATHOD, COMMAN_ANOD)
 *
 */
void _7Segment0To9(u8 PORT, u8 Status) {
	u8 _7Segment_Cathode[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
			0x7F, 0x6F };
	u8 _7Segment_Anod[10] = { ~0x3F, ~0x06, ~0x5B, ~0x4F, ~0x66, ~0x6D, ~0x7D,
			~0x07, ~0x7F, ~0x6F };
	if (Status == COMMAN_CATHOD) {
		for (int i = 0; i < 10; i++) {
			Set_PortValue(PORT, _7Segment_Cathode[i]);
			_delay_ms(1000);
		}
	}
	if (Status == COMMAN_ANOD) {
		for (int i = 0; i < 10; i++) {
			Set_PortValue(PORT, _7Segment_Anod[i]);
		}
	}
}



