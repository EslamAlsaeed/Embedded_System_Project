/*
 * ADC_Config.h
 *
 *  Created on: Aug 5, 2024
 *      Author: Eslam
 */

#ifndef MCAL_ADC_ADC_CONFIG_H_
#define MCAL_ADC_ADC_CONFIG_H_
//For Modes  select the voltage reference for the ADC
#define AREF 0
#define AVCC 1
#define Reserved 2
#define AREF_IN  3

// For Bit ADC Left Adjust Result
#define RIGHT 1
#define LEFT  0

//For Pins Input
#define ADC0  0
#define ADC1  1
#define ADC2  2
#define ADC3  3
#define ADC4  4
#define ADC5  5
#define ADC6  6
#define ADC7  7

//For Control  ADC
#define ENABLE 1
#define DISABLE 0

//For ADC Prescaler Selections
#define FACTOR_0  0
#define FACTOR_2  1
#define FACTOR_4  2
#define FACTOR_8  3
#define FACTOR_16  4
#define FACTOR_32  5
#define FACTOR_64  6
#define FACTOR_128  7

//For Special Function
#define FREE_RUN         0
#define ANALOGE_COMP     1
#define EXTER_INT_0      2
#define TIMER0_COMPARE   3
#define TIMER0_OVERFLOW  4
#define TIMER1_COMPERA_B 5
#define ITMER1_OVERFLOW  6
#define TIMER1_CAPUTURE  7
#endif /* MCAL_ADC_ADC_CONFIG_H_ */
