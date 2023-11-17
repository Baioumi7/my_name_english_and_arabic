/*
 * my_name_english_and_arabic.c
 *
 * Created: 8/17/2022
 *  Author: BAYOUMII
 */ 


#define  F_CPU 8000000UL
#include <util/delay.h>
#include "LCD.h"
int main(void)
{
	LCD_vInit();
	LCD_vSend_string("ahmed bayoumy");
	LCD_movecursor(2,1);
	LCD_vSend_cmd(64);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);

	LCD_vSend_char(0b00000000); 
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00001010);
	LCD_vSend_char(0b00000000);


	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00001100);
	LCD_vSend_char(0b00001111);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00011100);
	LCD_vSend_char(0b00000000);

	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000011);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);

    LCD_vSend_char(0b00000000);
    LCD_vSend_char(0b00000000);
    LCD_vSend_char(0b00000000);
    LCD_vSend_char(0b00000000);
    LCD_vSend_char(0b00001011);
    LCD_vSend_char(0b00001010);
    LCD_vSend_char(0b00001110);
    LCD_vSend_char(0b0000100);

    
	
	LCD_movecursor(2,16);
	LCD_vSend_char(0);
	LCD_movecursor(2,15);
	LCD_vSend_char(1);
	LCD_movecursor(2,14);
	LCD_vSend_char(2);
	LCD_movecursor(2,13);
	LCD_vSend_char(3);
	LCD_movecursor(2,12);
	LCD_vSend_char(4);
	LCD_movecursor(2,11);
	LCD_vSend_char(5);
	LCD_movecursor(2,10);

	while(1)
	{
		
	}
	
	return 0;
}
