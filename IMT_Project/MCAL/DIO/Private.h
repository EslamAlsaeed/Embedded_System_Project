/*
 * Private.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#ifndef MCAL_DIO_PRIVATE_H_
#define MCAL_DIO_PRIVATE_H_

//Register for PortA
#define PORTa   *((volatile u8*)0x3B)
#define PINa   *((volatile u8*)0x39)
#define DDRa   *((volatile u8*)0x3A)

//Register for PortB
#define PORTb   *((volatile u8*)0x38)
#define PINb   *((volatile u8*)0x36)
#define DDRb   *((volatile u8*)0x37)

//Register for PortC
#define PORTc   *((volatile u8*)0x35)
#define PINc   *((volatile u8*)0x33)
#define DDRc   *((volatile u8*)0x34)

//Register for PortD
#define PORTd   *((volatile u8*)0x32)
#define PINd   *((volatile u8*)0x30)
#define DDRd   *((volatile u8*)0x31)

#endif /* MCAL_DIO_PRIVATE_H_ */
