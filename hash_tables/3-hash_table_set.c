#include "hash_tables.h"

/**
 * hash_table_set - add en element to the hash table
 * @ht: given hash table
 * @key: key of the node
 * @value: value of the key node
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, size;
	hash_node_t node;

	if (!key)
		return (0);

	size = ht->size;
	hash = key_index(key, size);

	node = malloc(sizeof(hash_node_t));
	if (node)
		return (NULL);
	node->value = strdup(value);
	if (node->value == 0)
		return (NULL);
	node->key = strdup(key);
	if (node->key == 0)
		return (NULL);
	node->next = NULL;

	ht->array[hash] = node;
	return (1);


