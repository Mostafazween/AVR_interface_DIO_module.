#include <avr/io.h>
void DIO_SET_PIN_DIR (unsigned char port,unsigned char pin, unsigned char dir)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		if(dir==1)
		{
			DDRA|=(1<<pin);
		}
		else
		{
			DDRA&=~(1<<pin);
		}
		break;
		//portB
		case 'B':
		case 'b':
		if(dir==1)
		{
			DDRB|=(1<<pin);
		}
		else
		{
			DDRB&=~(1<<pin);
		}
		break;
		//portC
		case 'C':
		case 'c':
		if(dir==1)
		{
			DDRC|=(1<<pin);
		}
		else
		{
			DDRC&=~(1<<pin);
		}
		break;
		//portD
		case 'D':
		case 'd':
		if(dir==1)
		{
			DDRD|=(1<<pin);
		}
		else
		{
			DDRD&=~(1<<pin);
		}
		break;
	}
}
void DIO_WRITE_PIN (unsigned char port,unsigned char pin, unsigned char val)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		if(val==1)
		{
			PORTA|=(1<<pin);
		}
		else
		{
			PORTA&=~(1<<pin);
		}
		break;
		//portB
		case 'B':
		case 'b':
		if(val==1)
		{
			PORTB|=(1<<pin);
		}
		else
		{
			PORTB&=~(1<<pin);
		}
		break;
		//portC
		case 'C':
		case 'c':
		if(val==1)
		{
			PORTC|=(1<<pin);
		}
		else
		{
			PORTC&=~(1<<pin);
		}
		break;
		//portD
		case 'D':
		case 'd':
		if(val==1)
		{
			PORTD|=(1<<pin);
		}
		else
		{
			PORTD&=~(1<<pin);
		}
		break;
	}
}

void DIO_TOGGLE_PIN (unsigned char port,unsigned char pin)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
			PORTA^=(1<<pin);
		break;
		//portB
		case 'B':
		case 'b':
		    PORTB^=(1<<pin);
		break;
		//portC
		case 'C':
		case 'c':
			PORTC^=(1<<pin);
		break;
		//portD
		case 'D':
		case 'd':
			PORTD^=(1<<pin);
		break;
	}
}

unsigned char DIO_READ_PIN (unsigned char port,unsigned char pin)
{
unsigned char value;
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		value=((PINA&(1<<pin))>>pin);
		break;
		//portB
		case 'B':
		case 'b':
		value=((PINB&(1<<pin))>>pin);
		break;
		//portC
		case 'C':
		case 'c':
		value=((PINC&(1<<pin))>>pin);
		break;
		//portD
		case 'D':
		case 'd':
		value=((PIND&(1<<pin))>>pin);
		break;
	}
return value;
}

void DIO_SET_PORT_DIR (unsigned char port,unsigned char dir)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		DDRA=dir;
		break;
		//portB
		case 'B':
		case 'b':
		DDRB=dir;
		break;
		//portC
		case 'C':
		case 'c':
		DDRC=dir;
		break;
		//portD
		case 'D':
		case 'd':
		DDRD=dir;
		break;
	}
}
void DIO_WRITE_PORT (unsigned char port,unsigned char val)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		PORTA=val;
		break;
		//portB
		case 'B':
		case 'b':
		PORTB=val;
		break;
		//portC
		case 'C':
		case 'c':
		PORTC=val;
		break;
		//portD
		case 'D':
		case 'd':
		PORTD=val;
		break;
	}
}
void DIO_TOGGLE_PORT (unsigned char port)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		PORTA=~PORTA;
		break;
		//portB
		case 'B':
		case 'b':
		PORTB=~PORTB;
		break;
		//portC
		case 'C':
		case 'c':
		PORTC=~PORTC;
		break;
		//portD
		case 'D':
		case 'd':
		PORTD=~PORTD;
		break;
	}
}
unsigned char DIO_READ_PORT (unsigned char port)
{
unsigned char value;
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		value=PINA;
		break;
		//portB
		case 'B':
		case 'b':
		value=PINB;
		break;
		//portC
		case 'C':
		case 'c':
		value=PINC;
		break;
		//portD
		case 'D':
		case 'd':
		value=PIND;
		break;
	}
return value;
}