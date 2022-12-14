#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * *get_op_func - get pointer to function in structure
 * @s: the module to operate
 * Return: return pointer to wanted function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};

	while (ops[i].op)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
