#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - execute a function given a parameter on each element.
 * * @array: pointer to an array
 * @size: size of an array
 * @action: pointer to a function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned long int i = 0;

	if (array != NULL && *cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			while (i < size)
			{
				(*cmp)(array[i]);
				i++;
			}
		}
}
