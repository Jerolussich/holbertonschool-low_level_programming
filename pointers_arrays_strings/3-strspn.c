#include "main.h"
#include <stdio.h>
/**
 * _strspn - return number of bytes of init seg
 * @accept: pointer
 * @s: pointer
 * Return: dest
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; *s != '\0'; i++)
	{
		for (; s* != accept[j] && accept[j] != '\0', j++)
		{
			j++;
		}
	i++;

	}
	return (i);
}
