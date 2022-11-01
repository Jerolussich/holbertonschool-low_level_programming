#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all ints from a varaidic function
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list pointer;

	va_start(pointer, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(pointer, unsigned int);
	}
	va_end(pointer);
	return (sum);
}
