#include "main.h"
#include <stdio.h>
/**
 * main - print 1 to 100
 * Description: print 1 to 100
 **/

int main(int n)

{

	while (n > 1 && 100 > n)
	
		if (n % 3 == 0)
			printf("fizz ", n);
			n++;
		if (n % 5 == 0)
			printf("Buzz ", n);
			n++;
		if (n % 15 == 0)
			printf("fizzbuzz ", n);
		else
			printf("%d ", n);
}
