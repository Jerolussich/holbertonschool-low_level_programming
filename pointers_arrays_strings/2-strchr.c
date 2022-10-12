#include "main.h"
#include <stdio.h>
/**
 * _strchr - fill memory with constante byte
 * @c: a character
 * @s: pointer
 * Return: dest
 **/

char *_strchr(char *s, char c)
{
	for (; *s != c && *s != '\0'; s++)
	{
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}

}
