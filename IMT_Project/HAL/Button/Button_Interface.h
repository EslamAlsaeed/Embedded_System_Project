/*
 * Button_Interface.h
 *
 *  Created on: Jul 27, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#include"Button_Config.h"
#include"Button_Private.h"
#ifndef HAL_BUTTON_BUTTON_INTERFACE_H_
#define HAL_BUTTON_BUTTON_INTERFACE_H_

void Button_InitPullup(u8 PORT, u8 PIN);
u8 Button_GetValue(u8 PORT, u8 PIN);
void Button_InitPullDown(u8 PORT, u8 PIN);


#endif /* HAL_BUTTON_BUTTON_INTERFACE_H_ */
