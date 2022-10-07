#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: pointer
 * Return: 0
 **/


void rev_string(char *s)
{
	int r = 0;
	int n = 0;

	for (; s[r] != '\0'; r++)
	{
	}

	for (; r == 0; r--)
	{
		char dest = r;

		dest[n] = s[r];
		n++;
	}
		s = dest;
}
