#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: pointer
 * Return: 0
 */
int _strlen_recursion(char *s)
{

	int i = 0;

	if (*s != '\0')
	{
		i++;
		s++;
		_strlen_recursion(s);
	}

	return (i);



}
