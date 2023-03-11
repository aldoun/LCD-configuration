/*
 * Name: mylcd.c
 * Author: Mahmoud Adel
 * Description: This file contains main information of testing lcd driver
 * Version: v1.0
 * */

#include <16F88.h>
#include "lcd.h"
#use delay(clock=8000000)
#fuses NOWDT,NOPROTECT,NOLVP,INTRC_IO,NOMCLR

void main()
{
   setup_oscillator(OSC_8MHZ | OSC_INTRC);
   lcd_initial();
   while(1)
   {
      lcd_putc('\f');
     
     //send your name one character at a time
      send_byte('M', 1);
      send_byte('a', 1);
      send_byte('h', 1);
      send_byte('m', 1);
      send_byte('o', 1);
      send_byte('u', 1);
      send_byte('d', 1);
      
      delay_ms(1000);
   }
}