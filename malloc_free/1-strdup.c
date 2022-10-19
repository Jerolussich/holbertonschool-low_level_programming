#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates an array of chars and init with specific
 * @str: string
 * Return: null or new pointer
 */

char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int i;
	unsigned int j;

	if (str)
	{
		for (j = 0; str[j] != '\0'; j++);

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
		return (NULL);

}
