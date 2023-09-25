#include "lists.h"

/**
 * listint_len - return the length of elemnts
 * @h:the pointer to lists
 *
 * Return: the number of linked elemnts
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
