#include "lists.h"

/**
 * pop_listint - function delet the head node
 * @head: pointer to the head
 * Return:the value of head node or 0if empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = temp->next;
		n = temp->n;
		free(temp);
		return (n);
	}
}
