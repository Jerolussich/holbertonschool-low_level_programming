#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals of a square
 * @a: pointer
 * @size: array
 **/

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;
	int sum1 = 0;

	for (j = 0; j < (size * size); j += size + 1)
	{
		sum1 += a[j];
	}
	for (i = size - 1; i < (size * size) - 1; i = i + (size - 1))
	{
		sum += a[i];
	}

	printf("%d, ", sum1);
	printf("%d", sum);
	printf("\n");
}
