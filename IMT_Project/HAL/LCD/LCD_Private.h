/*
 * Private.h
 *
 *  Created on: Jul 27, 2024
 *      Author: Eslam
 */

#ifndef HAL_LCD_LCD_PRIVATE_H_
#define HAL_LCD_LCD_PRIVATE_H_


#define ROW_ONE              (0x80)  //Set Location One In Row One
#define ROW_TOW              (0xC0)  //Set Location One In Row Tow
//Lines For 8_bit
#define LINE_1_8BIT          (0x30)
#define LINE_2_8BIT          (0x38)
//Lines For 4_bit
#define LINE_1_4BIT           (0x20)
#define LINE_2_4BIT           (0x28)
//Entery Mode
#define ENTRY_MODE_LEFT       (0x06)
#define ENTRY_MODE_RIGHT      (0x04)
//Cursor Set
#define DISPLY_OFF_CURSOR_OFF (0x08)
#define CURSOR_ON             (0x0E)
#define CURSOR_OFF            (0x0C)
#define BLINKING_CURSOR       (0x0F)
//Shift
#define LEFT_SHIFT            (0x18)
#define RIGHT_SHIFT           (0x1C)
//Clear
#define CLEAR                 (0x01)

#define Heart                 Draw1

#endif /* HAL_LCD_LCD_PRIVATE_H_ */
