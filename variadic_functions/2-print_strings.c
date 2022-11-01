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
				if (va_arg(object, char*) != NULL)
				{
					if (i != n - 1)
					{
						printf("%s", va_arg(object, char*));
						printf("%s", separator);
					}
					else
						printf("%s", va_arg(object, char*));
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
				printf("%s", va_arg(object, char*));
			}
		}
		printf("\n");
		va_end(object);
}
