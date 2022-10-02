#include "main.h"
/**
 * jack_bauer - print all minutes of the day
 * @n: variable that stores value
 * Description: Print last digit of a number
 * Return: last digit
 */


void jack_bauer(void)
{
	int H = 0;
	int M = 0;

	while (H < 23)
	{
	M = 0;	
		
		while (M < 60)
		{
		if (H < 10){
		_putchar('0');
		}	
		_putchar((H % 10) + '0');
		_putchar(':');
		if (M < 10)
		{
		_putchar('0');
		}
		_putchar((M % 10) + '0');
		_putchar('\n');
		M++;
		}
	H++;

	}
}
