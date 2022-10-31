#include <stdio.h>
/**
 * Main - execute calc
 *
 */
int main (int argc, char *agrv)
{
	if (argc > 5)
	{
		printf("Error\n");
		return ("98");
	}
	if (argv[3] != "+" || argv [3] != "-" || argv[3] != "*" || argv[3] != "/" || argv[3] != "%")
	{
		printf("Error\n");
		return ("99");
	}
	if ((argv[3] == "/" || argv[3] == "%") && argv[4] == 0)
	{
		printf("Error\n");
		return ("100");
	}
	else
		(*get_op_func)(atoi(*argv[2])(atoi(*argv[4]);
}
