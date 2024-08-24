/*
 * ADC_Private.h
 *
 *  Created on: Aug 5, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_

//Register for ADC Multiplexer Selection Register ADMUX

#define  ADMUX   *((volatile u8*)0x27)
// Pins to control  the voltage reference for the ADC
#define  REFS_1  7
#define  REFS_0 6
// Pin for ADC Left Adjust Result
#define  ADLAR 5
//Pins for Define input Pin
#define MUX0  0
#define MUX1  1
#define MUX2  2
#define MUX3  3
#define MUX4  4
//Register for ADC Control and Status Register ADCSRA
#define ADCSRA   *((volatile u8*)0x26)
//Pins for Register ADCSRA
#define ADEN 7  // ADC Enable
#define ADSC 6  //ADC Start Conversion
#define ADATE 5  // ADC Auto Trigger Enable
#define ADIF 4  // ADC  Falg Interrupt Enable
#define ADIE 3  // ADC Interrupt Enable
#define ADPS2 2  //ADC Prescaler Select Bit
#define ADPS1 1  //ADC Prescaler Select Bit
#define ADPS0 0  //ADC Prescaler Select Bit

//Register for ADC Data
#define ADCH  *((volatile u8*)0x25)
#define ADCL *((volatile u8*)0x24)

//Register ForSpecial Function
#define SFIOR  *((volatile u8*)0x50)

//Pins for Register SFIOR
#define ADTS0 5
#define ADTS1 6
#define ADTS2 7

#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
