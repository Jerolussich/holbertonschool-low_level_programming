#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers
 * @n: stores value
 * Description: print all nat num
 * Return: int from n to 98
 */


void print_to_98(int n)

{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	if (n <= 0)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
				if (n == 98)
				{
					printf("%d\n", n);
				}
		}


	}
	if (n > 0)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
				if (n == 98)
				{
					printf("%d\n", n);
				}
		}
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
				if (n == 98)
				{
					printf("%d\n", n);
				}
		}
	}
}
