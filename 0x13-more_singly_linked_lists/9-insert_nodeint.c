#include "lists.h"

/**
 * insert_nodeint_at_index - add new node in special position
 * @head:the head of link list
 * @idx:the index of link list
 * @n:the data in new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	else
	{
		if (idx != 0)
		{
			temp = *head;
		while (i < idx)
		{
			temp = temp->next;
			i++;
			if (temp == NULL)
				return (NULL);
		}
		}
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
			new->next = temp->next;
			temp->next = new;
	}
	return (new);
}
