/*
 * Interface.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#include "../../MCAL/DIO/Interface.h"
#include "7_Segment_Config.h"
#include <avr/delay.h>
#ifndef HAL_7_SEGMENT_7_SEGMENT_INTERFACE_H_
#define HAL_7_SEGMENT_7_SEGMENT_INTERFACE_H_

void _7Segment_Init(u8 PORT);

void _7Segment_Status(u8 PORT, u8 _7SegmentType, u8 Status);

void _7Segment_SpecificNumber(u8 PORT, u8 Status, u8 Number);

void _7Segment0To9(u8 PORT, u8 Status);


#endif /* HAL_7_SEGMENT_7_SEGMENT_INTERFACE_H_ */
