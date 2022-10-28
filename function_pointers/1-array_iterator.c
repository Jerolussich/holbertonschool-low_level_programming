#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - execute a function given a parameter on each element.
 * * @array: pointer to an array
 * @size: size of an array
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array != NULL && *action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
