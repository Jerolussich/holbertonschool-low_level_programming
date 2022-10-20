#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _str_concat - concatenates two strings
 * @s1: pointer of a string
 * @s2: pointer of a string
 * Return: null or new pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	{
		for (j = 0; s1[j] != '\0'; j++)
			continue;
		for (k = 0; s2[k] != '\0'; k++)
			continue;

		p = malloc(sizeof(char) * (j + k + 1));

		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < j; i++)
		{
			p[i] = s1[i];
		}

		for (i = i + 1; i < j + k; i++)
		{
			p[i] = s2[i];
		}

		return (p);

	}

}
