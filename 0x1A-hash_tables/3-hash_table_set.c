#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - add element in hash_tables
 * @ht: the hash_tables want to add in
 * @key: the key of elemnt
 * @value: the value of elemnt
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element;
	hash_node_t *test;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	test = ht->array[index];

	if (test == NULL)
	{
		element = malloc(sizeof(hash_node_t));
		if (element == NULL)
			return (0);
		element->key = strdup(key);
		element->value = strdup(value);
		element->next = NULL;
		ht->array[index] = element;
		return (1);
	}
		while (test != NULL)
		{
			if (strcmp(test->key, key) == 0)
			{
				free(test->value);
				test->value = strdup(value);
				return (1);
			}
			test = test->next;
		}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	element->next = ht->array[index];
	ht->array[index] = element;

return (1);
}
