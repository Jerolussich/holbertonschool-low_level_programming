#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and init with specific
 * @size: size of array
 * @c: char init
 * Return: null or pointer
 */

char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int i;
	unsigned int j;

	if (*str != '\0')
	{
		for (j = 0; str[j] != '\0'; j++)
		{
		}
		
		p = malloc(sizeof(char) * (j + 1));

		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < j; i++)
		{
			p[i] = str[i];
		}
		return (p);

	}
	return ('\0');

}
