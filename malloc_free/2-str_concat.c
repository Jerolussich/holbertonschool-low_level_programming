#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer of a string
 * @s2: pointer of a string
 * Return: null or new pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	unsigned int i = 0, j = 0, l = 0;
	unsigned int k = 0;
		
		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}


		for (; s1[j]; j++)
			;
		for (; s2[k] != '\0'; k++)
			;
		p = malloc(sizeof(char) * (j + k + 1));

		if (p == NULL)
		{
			return (NULL);
		}
	
		for (; i < j; i++)
		{
			p[i] = s1[i];
		}
		}

		for (; i < j + k; i++)
		{
			p[i] = s2[l];
			l++;
		}
		
		p[i] = '\0';

		return (p);

}
