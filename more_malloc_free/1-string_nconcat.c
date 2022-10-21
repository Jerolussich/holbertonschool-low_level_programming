#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - function taht allocates memory using malloc
 * @b: holds an int value
 * Return: returns pointer of malloc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s2[i]; i++)
		;
	for (; s1[l]; l++)
		;
	if (n > i)
		p = malloc(l + i + 1);
	if (n < i)
		p = malloc(l + n);
	if (p == NULL)
	{
		return (NULL);
	}
	for (; s1[j]; j++)
		p[j] = s1[j];
	for (; k < n; j++)
	{
		s2[j] = p[k];
		k++;
	}
	return (p);
}
