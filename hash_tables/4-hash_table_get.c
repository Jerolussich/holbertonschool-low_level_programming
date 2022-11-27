#include "hash_tables.h"

/**
 * hash_table_set - add en element to the hash table
 * @ht: given hash table
 * @key: key of the node
 * @value: value of the key node
 * Return: 1 if succesful or 0 if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash, size;
	hash_node_t *pointerArray;

	if (!key || !ht)
		return (0);
	size = ht->size;
	hash = key_index((unsigned char *) key, size);
	pointerArray = ht->array[hash];

	while (pointerArray && strcmp(pointerArray->key, key) != 0)
	{
		if (pointerArray && strcmp(pointerArray->key, key) == 0)
			return (pointerArray->value);
		else if (pointerArray->next)
			pointerArray = pointerArray->next;
	}
	return (0);
}
