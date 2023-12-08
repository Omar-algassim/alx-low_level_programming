#include "lists.h"

/**
 * delete_dnodeint_at_index - delet node in the index
 * @head: the head of linked list
 * @index: the position of node want to delet
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
dlistint_t *perve = *head;
dlistint_t *after;
unsigned int i = 0;
if (*head == NULL)
return (-1);

if (index == 0)
{
	*head = current->next;
	if (current->next != NULL)
		current->next->prev = NULL;
	free(current);
	return (1);
}
else
{
	while (current != NULL)
	{
		if (i == index)
		{
			after = current->next;
			perve->next = after;
			if (current->next != NULL)
				after->prev = perve;
			free(current);
			return (1);
		}
		perve = current;
		current = current->next;
		i++;
	}
}
return (-1);
}
