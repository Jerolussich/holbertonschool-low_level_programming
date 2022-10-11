#include "main.h"

/**
 * _strcmp - concatenate a string
 * @dest: stores a string
 * @src: stores a string
 * @n: stores a number of bytes
 * Return: pointer to string dest
 **/

int _strcmp(char *s1, char *s2)
{

	int i;
	int j;
	int n;
	
	for (i = 0; s2[i] == s1[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
		
}
