/*
 * ADC_Interface.h
 *
 *  Created on: Aug 5, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#include "ADC_Config.h"
#include "ADC_Private.h"
#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_

//Main Function
void ADC_Control(u8 Mode);
void ADC_SinglePinInput(u8 Pin);
u8 ADC_AdjustResult(u8 Mode);
u8 SelfRead(u8 CHANNAL);
//Extra Function
void ADC_VoltageRef(u8 Mode);
void ADC_DivisionFactor(u8 Mode);
void ADC_TriggerSourc(u8 Mode);




#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
