#include "hash_tables.h"

/**
 * key_index - give the index key
 * @key: the key of index
 * @size: the size of table
 * Return: the index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
