#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals of a square
 * @a: pointer
 * size: array
 **/

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for(i = 0; i < size; i++)
	{
		sum = sum + a[size - i][size - i];
		sum1 = sum + a[size - i][i + 1];
	}
}
