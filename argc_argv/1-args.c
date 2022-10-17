#include <stdio.h>
/**
 * main - Print the number of arguments
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d", (argc - 1));
	printf("\n");
	return (0);
}

