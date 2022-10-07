#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: pointer
 * Return: 0
 **/


void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	int temp;

	for (i = 0; s[length] != '\0'; length++)
	{
	}

	for (i = 0; i < (length / 2); i++)

	{

		temp = s[i];
		s[i] = s[length - i - 1];
		s[length -i - 1] = temp;
	}
}
