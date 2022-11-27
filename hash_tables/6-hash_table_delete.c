#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: given hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *pointerArray = NULL, *temp = NULL;

	if (!ht)
		return;

	pointerArray = ht->array;

	for (; i < ht->size; i++)
	{
		while (pointerArray[i] != NULL)
		{
			temp = pointerArray[i]->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			pointerArray[i] = temp;
		}
	}
	free(pointerArray);
	free(ht);
}
