#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

int main()
{
	  DDRB |= (1<<DDB5);	//PINMODE (13,output)
	  
	  while(1)
	  {
	  		PORTB |= (1 << PB5);		//DIGITALWRITE(13,HIGH)	
	  		_delay_ms(1000);
	  		PORTB &= ~(1 << PB5) ;		//DIGITALWRITE(13,LOW)
	  		_delay_ms(1000);
	  }

return(0);
}