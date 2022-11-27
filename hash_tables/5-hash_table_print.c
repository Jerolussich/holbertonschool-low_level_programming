#include "hash_tables.h"

/**
 * hash_table_get - get a value of a table
 * @ht: given hash table
 * Return: value if succesful or 0 if not
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *pointerArray;

	size = ht->size;
	pointerArray = ht->array[i];

	if (ht)
	{		
		while (pointerArray && i < size)
		{
			printf("%s", pointerArray->key);
			printf("%s", pointerArray->value);
			i++;
		}
	}
	printf("test1");
}
