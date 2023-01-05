#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle = size;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
    	middle = (right + left) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
