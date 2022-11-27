#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: given hash table
 * Return: value if succesful or 0 if not
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *pointerArray;

	if (!ht)
		return;

	printf("{");
	for (;i < ht->size; i++)
	{
		pointerArray = ht->array[i];

		while (pointerArray)
		{
			
			printf("'%s':", pointerArray->key);

			if (pointerArray->next)
				printf("'%s',", pointerArray->value);
			else 
				printf("'%s'", pointerArray->value);

			pointerArray = pointerArray->next;
		}

	}
	printf("}\n");
}
