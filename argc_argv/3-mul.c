#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Error");
		printf('\n');
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d", i);
		printf("\n");
		return (0);
	}

}

