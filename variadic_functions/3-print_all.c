#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings
 * @n: number of int
 * @separator: string
 */
void print_all(const char * const format, ...)
{
	char c = 0;
	int i = 0;
	char * s = 0;
	va_list object;

	va_start(object, format);

		while (string[i])
		{
			switch(c) {
				case 'c':
					printf("%d\n", va_arg(object, int);
					break;
				case 'i':
					printf("%s\n", va_arg(object, int);
					break;
				case 'f':
					printf("%f\n", va_arg(object, double);
					break;
				case 's':
					s = va_arg(object, char *);
					printf("%s\n", s = NULL ? "(nil)\n" : s);
					break;
				}
			i++;
		}
		va_end(object);
		printf("\n");
}
