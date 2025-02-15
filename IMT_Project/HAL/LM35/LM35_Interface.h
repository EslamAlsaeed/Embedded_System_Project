/*
 * LM35_Interface.h
 *
 *  Created on: Aug 22, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#include "../../MCAL/DIO/Interface.h"
#include "../../MCAL/ADC/ADC_Interface.h"
#include "LM35_Config.h"
#include <avr/delay.h>
#ifndef LM35_INTERFACE_H_
#define LM35_INTERFACE_H_


u8 SensorLM35(u8 CHANNAL);


#endif /* LM35_INTERFACE_H_ */
