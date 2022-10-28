#include <stdlib.h>
#include <stdio.h>
#ifndef function_pointers_h
#define function_pointers_h
#endif

/**
 * print_name - print a name 
 * @name: string
 * @f: pointer to function
 * @
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name)
		(*f)(name);
}
