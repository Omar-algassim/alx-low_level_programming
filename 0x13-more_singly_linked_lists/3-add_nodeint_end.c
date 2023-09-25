#include "lists.h"

/**
 * add_nodeint_end - add node in the last of link
 * @n: the data of new node
 * @head: the addres of head pointer
 * Return: the adress of new node and null if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (temp);
}
