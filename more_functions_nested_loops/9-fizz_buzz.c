#include "main.h"
#include <stdio.h>
/**
 * main - print 1 to 100
 * Description: print 1 to 100
 **/

int main(void)

{

	int n;

	for (n = 1; n <= 100; n++)
	{
	
		if (n % 15 == 0)
		{
			printf("fizzbuzz ");	
		}
		if (n % 3 == 0)
		{
			printf("fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
			
		}
	}
	return (0);
}
