#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - function taht allocates memory using malloc
 * @n: holds an int value
 * @s2: string 2
 * @s1: string 1
 * Return: returns pointer of malloc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j, k, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s2[i]; i++)
		;
	for (; s1[l]; l++)
		;
	if (n >= i)
		p = malloc(l + i + 1);
	if (n < i)
		p = malloc(l + n + 1);
	if (p == NULL)
		return (NULL);
	for (j = 0; s1[j]; j++)
		p[j] = s1[j];
	if (n >= i)
		for (k = 0; s2[j]; j++)
			p[j] = s2[j];
	if (n < i)
		for (k = 0; k < n; j++,k++)
			p[j] = s2[k];
	p[j] = '\0';
	return (p);
}
