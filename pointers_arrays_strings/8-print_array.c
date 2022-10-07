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

	for (; a[n] != '\0'; n++)
	{
		printf("%d,", a[n]);
	}


	_putchar('\n');
}
