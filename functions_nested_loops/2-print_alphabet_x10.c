#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{

	char ch = 'a';
	int t = 0;

	while (t <= 10)
	{
		t++;
		ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		_putchar(ch);
		
		if (ch = 'z')

			_putchar("\n");	
	}

	}

}
