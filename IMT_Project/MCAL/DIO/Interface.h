/*
 * Interface.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../Service/Bit_Math.h"
#include "Private.h"
#include "Config.h"
#ifndef MCAL_DIO_INTERFACE_H_
#define MCAL_DIO_INTERFACE_H_

void Set_PinDirection(u8 Port , u8 Pin , u8 Direction );
void Set_PinValue(u8 Port , u8 Pin, u8 Value);
void Set_PortDirection(u8 Port ,u8 Direction);
void Set_PortValue(u8 Port, u8 Value);
u8 Get_PinValue(u8 PORT, u8 PIN);

#endif /* MCAL_DIO_INTERFACE_H_ */
