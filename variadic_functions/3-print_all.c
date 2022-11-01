#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print everything
 * @format: type of arguments
 */
void print_all(const char * const format, ...)
{
	va_list object;
	int i = 0;
	char  *s;

	va_start(object, format);

		while (format[i])
		{
			switch (format[i])

			{
			case 'c':
				printf("%c", va_arg(object, int));
				break;
			case 'i':
				printf("%d", va_arg(object, int));
				break;
			case 'f':
				printf("%f", va_arg(object, double));
				break;
			case 's':
				s = va_arg(object, char *);
				printf("%s", s = NULL ? "(nil)" : s);
				break;
			}
			if (format[i + 1])
			{
				printf(", ");
			}
			i++;
		}
		va_end(object);
		printf("\n");
}
