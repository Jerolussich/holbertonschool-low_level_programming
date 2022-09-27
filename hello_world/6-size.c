#include <stdio.h>

/**
 * main: void
 *
 * Description: Print size
 * Return: 0
 */

int main(void)
{
	int integerType;
	float floatType;
	long int doubleType;
	char charType;
	long long int tripleType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld bytes(s)\n", sizeof(integerType));
	printf("Size of double: %ld bytes(s)\n", sizeof(doubleType));
	printf("Size of long long %ld byte(s)\n", sizeof(tripleType));
	printf("Size of float: %ld bytes(s)\n", sizeof(floatType));

	return (0);
}
