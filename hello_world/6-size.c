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

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld bytes(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(doubleType));
	printf("Size of a long long %ld byte(s)\n", sizeof(tripleType));
	printf("Size of a float: %ld bytes(s)\n", sizeof(floatType));

	return (0);
}
