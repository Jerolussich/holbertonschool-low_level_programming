#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds a number
 * @a: number a
 * @b: number b
 * Return: sum of a and b
 **/
int op_add(int a, int b)
{
	int c = 0;
	c = a + b;
	return (c);
}
/**
 * op_sub - function that substracts a number
 * @a:number a
 * @b:number b
 * Return: substraction of a and b
 **/
int op_sub(int a, int b)
{
	int c = 0;
	c = a - b;
	return (c);
}
/**
 * op_mul - function that multiply
 * @a: number a
 * @b: number b
 * Return: value of a and b multiplied
 */
int op_mul(int a, int b)
{
	int c = 0;
	c = a * b;
	return (c);
}
/**
 * op_div - function that divides
 * @a: number a
 * @b: number b
 * Return: value of a divided by b
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		int c = 0;
		c = a / b;
		return (c);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
/**
 * op_mod - function that gives remainder of a number
 * @a: number a
 * @b: number b
 * Return: value of reminder of division of a and b
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		int c = 0;

		c = a % b;
		return (c);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
