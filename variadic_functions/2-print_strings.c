#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings
 * @n: number of int
 * @separator: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list object;

		va_start(object, n);
		for (i = 0; i < n; i++)
		{
			if (separator)
			{
				if (object != NULL)
				{
					if (i != n - 1)
					{
						printf("%d", va_arg(object, const unsigned int));
						printf("%s", separator);
					}
					else
						printf("%d", va_arg(object, const unsigned int));
				}
				else
				{
					if (i != n - 1)
					{	
						printf("(nil)");
						printf("%s", separator);
					}
					else
						printf("(nil)");
				}
			}	
			else
			{
				printf("%d", va_arg(object, const unsigned int));
			}
		}
		printf("\n");
		va_end(object);
}
