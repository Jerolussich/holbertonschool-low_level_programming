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
	int n;
	int last digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 5)
	{
	printf=("Last digit of %d is %d and is greater than 5", n, last digit  
	}
	if (n == 0)
	{
	printf=("Last digit of %d is %d and is 0", n, last digit
	}
	else (n < 0)
	{
	printf=("last digit of %D is %d and is less than 6", n, last digit

	last digit = n% 10;

	return (0);
}
