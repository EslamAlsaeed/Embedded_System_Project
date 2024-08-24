/*
 * Bit_Math.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Eslam
 */

#ifndef SERVICE_BIT_MATH_H_
#define SERVICE_BIT_MATH_H_

#define Set_Bit(Register, Bit_Number)   (Register |=(1<<Bit_Number))
#define Clr_Bit(Register, Bit_Number)   (Register &=~(1<<Bit_Number))
#define Toggle_Bit(Register, Bit_Number)   (Register ^=(1<<Bit_Number))
#define Get_Bit(Register, Bit_Number)   (Register & (1 << Bit_Number))


#endif /* SERVICE_BIT_MATH_H_ */
