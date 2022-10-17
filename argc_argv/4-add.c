#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j;

	for (i = 1; argc > i; i++)
	{
		j = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 'a' && 'z' >= argv[i][j])
			{
				printf("Error\n");
				return (1);
			}

		}


		sum += atoi(argv[i]);

	}
		printf("%d", sum);
		printf("\n");
		return (0);
}
