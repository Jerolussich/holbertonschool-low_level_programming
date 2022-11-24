#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: 0 if failed or pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	return (p);
}
