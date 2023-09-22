#include "lists.h"

/**
 * list_len - return the number of elemnts
 * @h: elemnts of linked
 *
 * Return: number of elemnts
 */

size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

