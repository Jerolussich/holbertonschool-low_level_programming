#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - void
 * Return: Alphabet
 */

	int main(void)

{

	char ch = 'a';
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}

		for (CH = 'A'; CH <= 'Z'; CH++)

		{
			putchar(CH);
		}


	putchar('\n');

	return (0);
}
