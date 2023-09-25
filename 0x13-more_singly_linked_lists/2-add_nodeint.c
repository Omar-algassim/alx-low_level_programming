#include "lists.h"

/**
 * add_nodeint - add node at the begining
 * @head:pointer to the pointer to head node
 * @n: the elemnt
 * Return:the address of new elemnt if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

return (*head);
}
