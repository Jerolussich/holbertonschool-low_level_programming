#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: given hash table
 * Return: value if succesful or 0 if not
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *pointerArray;
	

	if (ht)
	{
		pointerArray = ht->array[i];
		size = ht->size;

		while (pointerArray && i < size)
		{
			printf("%s", pointerArray->key);
			printf("%s", pointerArray->value);
		}
		i++;
	}
}
