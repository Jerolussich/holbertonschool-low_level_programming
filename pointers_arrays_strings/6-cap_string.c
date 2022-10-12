#include "main.h"
#include <stdio.h>
/**
 * cap_string - reverse a string
 * @dest: holds a string
 * Return: 0
 **/


char *cap_string(char *dest)
{
	int i;
	int j;
	char s2[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; dest[i] != '\0'; i++)
	{
		j = 0;

		for (; s2[j] != '\0'; j++)
		{
			if (dest[i] == s2[j])
			{
				if (dest[i + 1] >= 'a' && 'z' >= dest[i + 1])
				{
					dest[i + 1] = (dest[i + 1] - 32);
				}
			}

		}

	}
	return (dest);
}
