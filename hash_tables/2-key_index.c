#include "hash_tables.h"

/**
 * key_index - provides the index of a key
 * @key: the key
 * @size: size of the array
 * Return: returns the index where key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
