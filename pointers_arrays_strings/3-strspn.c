#include "main.h"
#include <stdio.h>
/**
 * _strspn - fill memory with constante byte
 * @*accept: pointer
 * @s: pointer
 * Return: dest
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (;s[i] != '\0'; i++)
	{
		j = 0;
		k++;
		for (;accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}
