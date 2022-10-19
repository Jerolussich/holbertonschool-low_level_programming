#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and init with specific
 * @intsize - size of array
 * @initial char
 * Return: null or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p = null;

	if (size != 0)
	{

		*p = malloc(sizeof(char)* size);
		p[0]= c;
		return (*p);

	}
	else
		return (0);

}

