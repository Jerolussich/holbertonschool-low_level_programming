#include "main.h"
#include <stdio.h>
/**
 * leet - encode a string
 * @dest: holds a string
 * Return: 0
 **/


char *leet(char *dest)
{
	int i;
	int j;
	char s2[5] = {'a', 'e', 'o', 't', 'l'};
	char s3[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; dest[i] != '\0'; i++)
	{

		for (j = 0; j < 5; j++)
		{
			if (dest[i] == s2[j] || dest[i] == s2[j] - 32)
			{
				dest[i] = s3[j];
			}

		}

	}
	return (dest);
}
