/*
 * Gloabal_ISR_Private.h
 *
 *  Created on: Aug 2, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#ifndef MCAL_GLOBAL_ISR_GIE_ISR_PRIVATE_H_
#define MCAL_GLOBAL_ISR_GIE_ISR_PRIVATE_H_


#define  SREG_REG *((volatile u8*)0x5F)
#define  SREG_I 7  //Global Interrupt Enable

#endif /* MCAL_GLOBAL_ISR_GIE_ISR_PRIVATE_H_ */
