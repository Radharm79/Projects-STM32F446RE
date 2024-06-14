/*
 * lcd.h
 *
 *  Created on: 27-Apr-2023
 *      Author: chaman
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include"stm32f4xx.h"

void delay(int seconds);
void LCD_nibble_write(char data, unsigned char control);
void LCD_command(unsigned char command);
void LCD_data(char data);
void LCD_init(void);
void PORTS_init(void);
void LCD_string(char []);


#endif /* INC_LCD_H_ */
