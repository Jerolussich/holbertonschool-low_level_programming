#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy the string to a buffer
 * @*dest: pointer
 * @*src: pointer
 * Return: 0
 **/


char *_strcpy(char *dest, char *src)
{
	while(*src)
	{
		*dest =*src;
		src++;
		dest++;
	}


	return (dest);
}
