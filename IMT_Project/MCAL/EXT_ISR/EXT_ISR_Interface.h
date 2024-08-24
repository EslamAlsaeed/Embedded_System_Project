/*
 * EXT_ISR_Interface.h
 *
 *  Created on: Aug 1, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#include "EXT_ISR_Config.h"
#ifndef MCAL_EXT_ISR_EXT_ISR_INTERFACE_H_
#define MCAL_EXT_ISR_EXT_ISR_INTERFACE_H_

void __vector_1(void)__attribute__((signal));
void __vector_2(void)__attribute__((signal));
void __vector_3(void)__attribute__((signal));


void EXT_ISR0Intial(u8 ISR0_State, u8 ISR0_Mode);
void EXT_ISR1Intial(u8 ISR1_State, u8 ISR1_Mode);
void EXT_ISR2Intial(u8 ISR2_State);
void EXT_ISRFlag(u8 INT);

#endif /* MCAL_EXT_ISR_EXT_ISR_INTERFACE_H_ */
