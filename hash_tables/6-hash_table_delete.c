#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: given hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *pointerArray, *temp;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		pointerArray = ht->array[i];

		while (pointerArray)
		{
			temp = pointerArray;
			free(pointerArray->key);
			free(pointerArray->value);
			free(temp);
			pointerArray = pointerArray->next;
		}

	}
	free(ht->array);
	free(ht):
}
