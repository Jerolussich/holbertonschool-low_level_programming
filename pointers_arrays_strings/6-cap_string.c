#include "main.h"
#include <stdio.h>
/**
 * cap_string - reverse a string
 * @s: pointer
 * Return: 0
 **/


char *cap_string(char *dest)
{
	int i;
	int j;
	char s2[] = {' ', '\0', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	for (i = 0; dest[i] ; i++)
	{
		r = 0;

		for (; s2[j] = '\0'; j++)
		{
			if (dest[i] = s2[j])
			{
				dest[i + 1] = dest[i] - 32;
			}

			j++;
		}

		i++;
	}
	return (dest);
}
