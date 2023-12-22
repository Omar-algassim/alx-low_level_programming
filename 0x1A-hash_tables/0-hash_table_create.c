#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creat a hash_tables
 * @size: the size of array
 * Return: the new hash_tables
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table != NULL)
	{
		hash_table->size = size;
		hash_table->array = malloc(new->size, sizeof(hash_node_t));
		if (hash_table->array == NULL)
			return (NULL);
	}
	else
		return (NULL);

	return (hash_table);
}
