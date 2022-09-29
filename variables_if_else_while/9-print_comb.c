#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - void
 * Return: all numbers 1 to 9
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);

		if (n != '9')
		{
			putchar(44);
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
