#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - execute a function given a parameter on each element.
 * @cmp: pointer to function
 * @size: size of an array
 * Return: cmp returns true if array matches, 0 if not.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int temp = 0;

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
				temp = (*cmp)(array[i]);

				if (temp != 0)
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}
