#include "main.h"
/**
 * int _strlen_recursion - prints length of a string
 * @s: pointer
 * Return: 0
 */
int _strlen_recursion(char *s)
{

	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}

	i++;
	return (_strlen_recursion(s + 1));
	

	
}
