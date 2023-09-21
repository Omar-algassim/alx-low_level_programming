#include "lists.h"

/**
 * print_list - printthe - print all elemnt of struct
 * @h:the elemnt saved in struct
 *
 * Return: the number of elemnt
 */

size_t print_list(const list_t *h)
{
	size_t  nodes = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			nodes++;
			h = h->next;
		}
		else 
			printf("[0] (nail)\n");
	}
	return (nodes);
}

