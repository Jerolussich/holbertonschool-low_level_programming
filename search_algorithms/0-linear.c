#include "search_algos.h"

/**
* linear_search - searchs for an int linearly
* @array: array given with int
* @size: size of the array given
* @value: value searched for
* Return: return index where value was found
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%d] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
