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

	new = malloc(sizeof(listint_t));
	new->n = n;
	temp = *head;
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < idx && idx != 0)
		{
			temp = temp->next;
			i++;
		if (temp == NULL)
			return (NULL);
		}
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
		new->next = temp->next;
		temp->next = new;
		}
	}	
	return (new);
}
