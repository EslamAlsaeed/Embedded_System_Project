/*
 * Keybad_Interface.h
 *
 *  Created on: Jul 28, 2024
 *      Author: Eslam
 */
#include "../../Service/STD_LIB.h"
#include "../../MCAL/DIO/Private.h"
#include "../../MCAL/DIO/Config.h"
#ifndef HAL_KEYBAD_KEYBAD_INTERFACE_H_
#define HAL_KEYBAD_KEYBAD_INTERFACE_H_

void Keybad_HWIntial(u8 PORT);
u8 Keybad_SWIntial(void);
static u8 Keybad_Value(u8 Number);
u8 Key_PORT( PORT);
u8 Key_PIN( PORT);


#endif /* HAL_KEYBAD_KEYBAD_INTERFACE_H_ */
