#include "hash_tables.h"

/**
 * hash_table_set - add en element to the hash table
 * @ht: given hash table
 * @key: key of the node
 * @value: value of the key node
 * Return: 1 if succesful or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, size;
	hash_node_t *node;
	hash_node_t *h;

	if (!key || !ht)
		return (0);

	size = ht->size;
	hash = key_index((unsigned char *) key, size);


	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->value = strdup(value);
	if (node->value == 0)
		return (0);
	node->key = strdup(key);
	if (node->key == 0)
		return (0);

	if (!ht->array[hash])
	{
		ht->array[hash] = node;
		node->next = NULL;
	}
	else
	{
		h = ht->array[hash];
		node->next = h;
		ht->array[hash] = node;
	}
	return (1);
}
