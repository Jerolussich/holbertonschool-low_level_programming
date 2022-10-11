#include "main.h"
#include <stdio.h>
/**
 * string_toupper - lower case to uppercase
 * @dest: pointer
 * Return: 0
 **/


char *string_toupper(char *dest)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] >='a' && 'z'<= dest[i])
		{
			dest[i] = s[i] - 32;
		}
	}
	return (dest);
}
