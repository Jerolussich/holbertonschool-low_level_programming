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
	char s2[] = {65, 69, 79, 84, 76, 97, 101, 111, 116, 124};
	char s3[] = {0,1,3,4,7};

	for (i = 0; dest[i] != '\0'; i++)
	{
		j = 0;

		for (; s2[j] != '\0'; j++)
		{
			if (dest[i] == s2[j] || dest[i] == s2[j] - 32) 
			{
				dest[i] = s3[j];
			}

		}

	}
	return (dest);
}
