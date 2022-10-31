int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
              {"+", op_add},
              {"-", op_sub},
              {"*", op_mul},
              {"/", op_div},
              {"%", op_mod},
              {NULL, NULL};
             };

	while (s != ops[i].op && i < 7)
	{
		i++;
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
