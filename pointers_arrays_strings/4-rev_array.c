#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse a string
 * @n: length of string
 * @a: pointer
 * Return: 0
 **/


void reverse_array(int *a, int n)
{

	int temp = 0;
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
