#include "main.h"
/**
 * is_prime_number - return 1 if n is prime, otherwise 0
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (is_prime_number2(n - 1, n));
}
/**
 * is_prime_number2 - return value if prime or not
 * @i: base
 * @n:number
 * Return: 0 not prime, 1 prime
 **/
int is_prime_number2(int i, int n)
{
	if (n < 0)
	{
		return (0);
	}

	else if (n % i != 0)
	{
		return (is_prime_number2(i - 1, n));
	}

	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else
		return (1);
}
