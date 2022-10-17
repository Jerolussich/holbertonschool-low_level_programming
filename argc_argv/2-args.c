#include <stdio.h>
/**
 * main - Print all arguments it recieves
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	
		printf("%s", (argv[i]));
		printf("\n");
	return (0);
}

