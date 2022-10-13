#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates first occurrence in the string s
 * @accept: pointer
 * @s: pointer
 * Return: pointer to byte in s
 **/

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	for (; *s != '\0'; s++)
	{
		j = 0;

		for (; *s != accept[j] && accept[j] != '\0'; j++)
		{
		}
		if (*s == accept[j])
		{
			return (s);
		}
	}
	return (0);

}
