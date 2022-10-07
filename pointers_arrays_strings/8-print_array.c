#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @n: number of elements to be printed
 * @a: array
 * Return: 0
 **/


void print_array(int *a, int n)
{
	 int r = 0;


	for (; n > r ; r++)
	{
		if (r == n - 1)
		{
			printf("%d", a[r]);
		}
		else 
		{
		printf("%d, ", a[r];
		}
	}


	_putchar('\n');
}
