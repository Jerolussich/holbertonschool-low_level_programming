#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and init with specific
 * @size: size of array
 * @c: char init
 * Return: null or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p = '\0';
	unsigned int i;

	if (size != '\0')
	{
		p = malloc((sizeof(char) * size));

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}

		return (p);
	}
	else
		return (NULL);

}
