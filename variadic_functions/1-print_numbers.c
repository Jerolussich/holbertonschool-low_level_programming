#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @n: number of int
 * @separator: string
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
				if (i != n - 1)
				{
					printf("%d", va_arg(pointer, const unsigned int));
					printf("%s", separator);
				}
				else
					printf("%d", va_arg(pointer, const unsigned int));
			}
			else
			{
				printf("%d", va_arg(pointer, const unsigned int));
			}
		}
		printf("\n");
		va_end(pointer);
}
