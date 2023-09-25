#include "lists.h"

/**
 * free_listint - free the elemnts of link
 * @head: the head of the links
 * Return:always 0
 */

void free_listint(listint_t *head)
{
	listint_t *new, *tmp;

	tmp = head;
	while (tmp->next != 0)
	{
		new = tmp->next;
		free(new);
		new = tmp;
	}
}
