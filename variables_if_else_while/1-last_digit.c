#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - void
 * Description: Get m
 * Return: last digit
**/

int main(void)

{
	int n = 0;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);  
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	if (n < 0)
	{
		printf("last digit of %d is %d and is less than 6\n", n, lastdigit);
	}
	return (0);
}
