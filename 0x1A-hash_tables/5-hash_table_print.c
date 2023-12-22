#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;
	int cm = 0;
	if (ht != NULL)
	{
		printf("{");
		while (index < ht->size)
		{
			node = ht->array[index];
			while (node != NULL) 
			{
				if (cm >= 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				cm++;
			}
			index++;
		}
		printf("}\n");
	}

}
