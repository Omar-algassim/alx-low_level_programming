#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delet hash_tables
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *next;
	unsigned long int index = 0;

	if (ht != NULL)
	{
		while (index < ht->size)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
			index++;
		}
		free(ht->array);
		free(ht);
	}
}
