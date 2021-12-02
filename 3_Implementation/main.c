#ifndef __AVR_ATmega16__
#define __AVR_ATmega16__
#endif 



#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"


void initADC()
{
  ADMUX=(1<<REFS0);   //for Aref=AVcc;
ADCSRA=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS1)|(1<<ADPS0); //prescaler div factor = 128;
}

uint16_t ReadADC(uint8_t ch)
{
  ch=ch&0b00000111; /* select ADC channel ch 0 to 7 */
  ADMUX|=ch;

  ADCSRA|=(1<<ADSC); // for single conversion;

  while(!(ADCSRA & (1<<ADIF))); //wait for conversion;

  ADCSRA|=(1<<ADIF); // clear ADIF;

  return(ADC);

}


void main()
{

  DDRB=0b00001111;
  DDRA=0xFF;
  int open,close,pir,pir_sec;

  int temp;


   //Initialize LCD module
    InitLCD(LS_ULINE);

   //Clear the screen
   LCDClear();

 //Initialize ADC
  initADC();

 

  uint16_t adc_rslt,adc_rslt1;

while(1)
{

   open=PINA&0b00000001;    

   close=PINA&0b00000010;

   pir=PINA&0b00001000;

   pir_sec=PINA&0b00010000; 

 
    adc_rslt=ReadADC(2);
    temp=adc_rslt/2;
	LCDWriteIntXY(5,1,temp,4);


   if(open==0b00000001)
    {      PORTB=0b00000001;
      LCDWriteStringXY(5,0,"Curtain"); 
	  LCDWriteStringXY(0,1,"Open");
    }

   else
    if(close==0b00000010)
    {
      PORTB=0b00000010;
	  LCDWriteStringXY(5,0,"Curtain"); 
	  LCDWriteStringXY(0,1,"Close");
    }
	else
	if(pir==0b00001000)
	PORTB=0b00000100;

	else
	if(pir_sec==0b00010000)
	PORTB=0b00001000;

    else
	if(temp>=75)
	PORTB=0b00001000;

	else
	{
	PORTB=0x00;
	LCDClear();
    LCDWriteStringXY(0,0,"Room Temp");
    LCDWriteStringXY(0,1,"TEMP=");
	}
	
}

}

