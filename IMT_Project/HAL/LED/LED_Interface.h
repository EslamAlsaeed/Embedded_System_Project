/*
 * Interface.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#ifndef HAL_LED_INTERFACE_H_
#define HAL_LED_INTERFACE_H_

void LED_ON(u8 PORT, u8 PIN);
void LED_OFF(u8 PORT, u8 PIN);
void LED_Delay(u8 PORT, u8 PIN, u8 Delay);
void LED_Port(u8 PORT, u8 Value);
void LED_PortDelay(u8 PORT, u8 Delay);
void LED_Switch(u8 PORT, u8 Delay);


#endif /* HAL_LED_INTERFACE_H_ */
