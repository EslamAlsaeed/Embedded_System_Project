/*
 * Interface.h
 *
 *  Created on: Jul 27, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#include"LCD_Private.h"
#include<avr/delay.h>
#ifndef HAL_LCD_INTERFACE_H_
#define HAL_LCD_INTERFACE_H_

void LCD_SendData(u8 PORT_CPIN, u8 PORT_OUT, u8 Data_Int);
void LCD_SendCommand(u8 PORT_CPIN, u8 PORT_OUT, u8 Data_Int);
void LCD_HWIntial(u8 PORT_CPIN, u8 PORT_OUT);
void LCD_SWIntial(u8 PORT_CPIN, u8 PORT_OUT);

void LCD_SendString(u8 PORT_CPIN, u8 PORT_OUT, u8 *String);
void LCD_Number(u8 Number_Int);
void LCD_SendSpicialCharacter();

void LCD_4BitInit(void);
void LCD_Clear();

#endif /* HAL_LCD_INTERFACE_H_ */
