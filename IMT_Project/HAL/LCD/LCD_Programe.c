/*
 * Programe.c
 *
 *  Created on: Jul 27, 2024
 *      Author: Eslam
 */

#include <avr/delay.h>
#include "../../MCAL/DIO/Interface.h"
#include"LCD_Private.h"
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"


/*Function Print Data from Type Integer
 * Receive PORT_CPIN this Port which Connected with pins RS , RW , EN
 * RS , RW ,EN Attach with PIN0 and PIN1 , PIN2 Respectlly
 *Receive PORT_OUT which connected with Pins form D0 to D7
 */
void LCD_SendData(u8 PORT_CPIN, u8 PORT_OUT, u8 Data_Int) {
	Set_PinValue(PORT_CPIN, PIN0, HIGH);  //RS
	Set_PinValue(PORT_CPIN, PIN1, LOW);  //RW

	Set_PortValue(PORT_OUT, Data_Int); //Send Data

	Set_PinValue(PORT_CPIN, PIN2, HIGH);  //Enable
	_delay_ms(2);
	Set_PinValue(PORT_CPIN, PIN2, LOW);  //Disable

}

/*Function to Set Pin RS , RW to Send Command
 * Receive PORT_CPIN this Port which Connected with pins RS , RW , EN
 * RS , RW ,EN Attach with PIN0 and PIN1 , PIN2 Respectlly
 *Receive PORT_OUT which connected with Pins form D0 to D7
 *Receive Data_INT That will send to command
 */
void LCD_SendCommand(u8 PORT_CPIN, u8 PORT_OUT, u8 Data_Int) {

	Set_PinValue(PORT_CPIN, PIN0, LOW);  //RS
	Set_PinValue(PORT_CPIN, PIN1, LOW);  //RW
	Set_PortValue(PORT_OUT, Data_Int);      //Command

	Set_PinValue(PORT_CPIN, PIN2, HIGH);  //Enable
	_delay_ms(2);
	Set_PinValue(PORT_CPIN, PIN2, LOW);  //Disable
}


/*Function To Set pins RW and RS and EN and PORT for Data Send
 * Receive PORT_CPIN this port for RS and RW and EN will attached it
 * Receive PORT_OUT this Port for pins from D0 to D7
 *  RS , RW ,EN Attach with PIN0 and PIN1 , PIN2 Respectlly
 */
void LCD_HWIntial(u8 PORT_CPIN, u8 PORT_OUT) {
	Set_PinDirection(PORT_CPIN, PIN0, OUTPUT);  //RS
	Set_PinDirection(PORT_CPIN, PIN1, OUTPUT);  //RW
	Set_PinDirection(PORT_CPIN, PIN2, OUTPUT);  //E

	Set_PortDirection(PORT_OUT, OUTPUT);
}
/*Function To INtialaztion LCD To Set it for Work
 * Receive PORT_CPIN this port for RS and RW and EN will attached it
 * Receive PORT_OUT this Port for pins from D0 to D7
 *  RS , RW ,EN Attach with PIN0 and PIN1 , PIN2 Respectlly
 */
void LCD_SWIntial(u8 PORT_CPIN, u8 PORT_OUT) {

	_delay_ms(40);
	LCD_SendCommand(PORT_CPIN, PORT_OUT, LINE_2_8BIT);   //Command

	_delay_ms(40);
	LCD_SendCommand(PORT_CPIN, PORT_OUT, CLEAR);   //Display Clear

	_delay_ms(40);
	LCD_SendCommand(PORT_CPIN, PORT_OUT, CURSOR_OFF);   //Display OFF
}



void LCD_SendString(u8 PORT_CPIN, u8 PORT_OUT, u8 *String) {
	u8 Counter = 0;
	while (String[Counter] != '\0') {
		LCD_SendData(PORT_CPIN, PORT_OUT, String[Counter]);
		Counter++;
	}

}

void LCD_Number(u8 Number_Int) {

}

void LCD_SendSpicialCharacter() {

}


