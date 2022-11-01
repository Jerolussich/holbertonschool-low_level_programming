#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all ints from a varaidic function
 * @n: number of int
 * Return: return sum of all values
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;

		va_start(pointer, n);
		for (i = 0; i < n; i++)
		{
			if (separator)
			{
				printf("%d", va_arg(pointer, const unsigned int));
				printf("%s", separator);
			}
			else
			{
				printf("%d", va_arg(pointer, const unsigned int));
			}
		}
		va_end(pointer);
}
