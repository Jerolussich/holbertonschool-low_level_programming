#include "main.h"
/**
 * times_table - print all minutes of the day
 * Description: Print table of 9
 * Return: table of 9
 */


void times_table(void)
{
	int I = 0;
	int N = 9;

	while (I <= 9)
	{
		int R = (N * I);

		if (I <= 1)
		{
			_putchar((R % 10) + '0');
			_putchar('\n');
			I++;
		}
		else 
		{
			_putchar((R / 10) + '0');
			_putchar((R % 10) + '0');
			I++;
		}

	}
}
