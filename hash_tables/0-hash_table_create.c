#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: 0 if failed or pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	*array = malloc(size * sizeof(size));
	if (array == NULL)
		return (NULL);
	table->array = array;
	return (table);
}
