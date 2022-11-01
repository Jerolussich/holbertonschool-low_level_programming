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
	char *string;
		va_start(object, n);
		for (i = 0; i < n; i++)
		{

			string = (va_arg(object, char *));
			if (separator)
			{
				if (string != NULL)
				{
					if (i != n - 1)
					{
						printf("%s", string);
						printf("%s", separator);
					}
					else
						printf("%s", string);
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
				printf("%s", string);
			}
		}
		printf("\n");
		va_end(object);
}
