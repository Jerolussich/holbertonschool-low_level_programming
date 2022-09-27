#include <stdio.h>

/**
 *
 * main: void
 *
 * Description: Print size
 * Return: 0
 */

int main()
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;
	triple tripleType;

	printf("Size of char: %ld byte\n",sizeof(charType));
	printf("Size of int: %ld bytes\n",sizeof(integerType));
	printf("Size of double: %ld bytes\n",sizeof(doubleType));
	printf("Size of long long %ld byte\n",sizeof(tripleType));
	printf("Size of float: %ld bytes\n",sizeof(floatType));

	
			    
	 return(0);
}
