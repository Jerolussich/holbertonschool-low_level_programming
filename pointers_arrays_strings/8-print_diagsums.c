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

	for(i = 0; i < ((size*size - 1) / (size - 1)); i++)
	{
		if (i == 0)
		{
		}
		else
		{
			sum = sum + a[i*(size - 1)];
		}
	}
	printf("%d, ", sum);
	printf("%d", sum1);
}
