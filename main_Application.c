
/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 01/8/2021 09:09:10 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED_interface.h"
int main(void)
{
	signed char i;
	for (i=0;i<=7;i++)
	{
		LED_Init('A',i);
	}
	while (1)
	{
		for (i=0;i<=7;i++)
		{
			LED_On('A',i);
			_delay_ms(1000);
		}
		for (i=7;i>=0;i--)
		{
			LED_Off('A',i);
			_delay_ms(1000);
		}
	}
}

