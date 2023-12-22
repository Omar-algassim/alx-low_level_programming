#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creat a hash_tables
 * @size: the size of array
 * Return: the new hash_tables
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	if (new != NULL)
	{
		new->size = size;
		new->array = calloc(new->size, sizeof(hash_node_t));
	}

	return (new);
}
