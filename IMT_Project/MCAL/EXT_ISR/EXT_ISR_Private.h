/*
 * EXT_ISR_Private.h
 *
 *  Created on: Aug 1, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"

#ifndef MCAL_EXT_ISR_EXT_ISR_PRIVATE_H_
#define MCAL_EXT_ISR_EXT_ISR_PRIVATE_H_





#define MCUCR_REG  *((volatile u8*)0x55)

#define MCUCR_ISC00  0
#define MCUCR_ISC01  1
#define MCUCR_ISC10  2
#define MCUCR_ISC11  3



#define MCUCSR_REG  *((volatile u8*)0x54)

#define MCUCSR_ISC2 6

#define GICR_REG  *((volatile u8*)0x5B)

#define GICR_INT0 6
#define GICR_INT1 7
#define GICR_INT2 5

#define GIFR_REG  *((volatile u8*)0x5A)

#define GIFR_INTF2  5
#define GIFR_INTF0  6
#define GIFR_INTF1  7





#endif /* MCAL_EXT_ISR_EXT_ISR_PRIVATE_H_ */
