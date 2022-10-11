#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse a string
 * @s: pointer
 * Return: 0
 **/


void reverse_array(int *a, int n)
{

	int temp = 0;
	int i;
	int div = n / 2;

	for (i = 0; i < div; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n] = temp;
	}
}
