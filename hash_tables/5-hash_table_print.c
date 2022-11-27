#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: given hash table
 * Return: value if succesful or 0 if not
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, j = 0;
	hash_node_t *pointerArray;

	if (!ht)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		pointerArray = ht->array[i];

		while (pointerArray)
		{
			if (j == 1)
				printf(", ");
			printf("'%s' : '%s'", pointerArray->key, pointerArray->value);
			pointerArray = pointerArray->next;
			j = 1;
		}

	}
	printf("}\n");
}
