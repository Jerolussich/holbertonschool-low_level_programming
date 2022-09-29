#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - void
 * Return: all numbers 1 to 9
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(44);
		putchar(' ');

		if (n != 9)
		putchar(44);

	}
		putchar('\n');

	return (0);
}
