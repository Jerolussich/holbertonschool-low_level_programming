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


	for (i = 0; i < (n /2); i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n] = temp;
	}
	printf("\n");
}
