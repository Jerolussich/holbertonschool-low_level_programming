#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list pointer;

	va_start(pointer, n)
	sum += va_arg(ptr,in);
	va_end(ptr);

	return (sum);
