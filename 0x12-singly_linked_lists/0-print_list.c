#include "lists.h"

/**
 * print_list - print all elemnt of struct
 * @h:the elemnt saved in struct
 *
 * Return: the number of elemnt
 */

size_t print_list(const list_t *h)
{
	int  nodes = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			nodes++;
		}
		else
		{
			printf("[0] (nail)\n");
		}
	h = h->next;
	}
	return (nodes);
}

