#include "hash_tables.h"

/**
 * hash_table_create - creat a hash_tables
 * @size: the size of array
 * Return: the new hash_tables
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned int i = 0;

	if (table != NULL)
	{
		table->size = size;
		table->array = malloc(size * sizeof(hash_node_t *));
		if (table->array == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (; i < table->size; i++)
	{
	table->array[i] = NULL;
	}

	return (table);
}
