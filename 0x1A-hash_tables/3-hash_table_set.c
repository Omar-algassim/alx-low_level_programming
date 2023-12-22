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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *element = malloc(sizeof(hash_node_t));

	if (element == NULL)
		return (0);

	element->key = strdup(key);
	element->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		element->next = NULL;
	}
	else 
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}

return (1);
}
