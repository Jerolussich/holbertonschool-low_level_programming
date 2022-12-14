#include "search_algos.h"

/**
* binary_search - Function using binary search
* @array: Array with ints given
* @size: size of array
* @value: int value being searched
* Return: value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle = size, i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		middle = (right + left) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
