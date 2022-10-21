#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - function taht allocates memory using malloc
 * @b: holds an int value
 * Return: returns pointer of malloc
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
