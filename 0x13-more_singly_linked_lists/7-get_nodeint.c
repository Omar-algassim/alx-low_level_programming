#include "lists.h"

/**
 * get_nodeint_at_index - return specific node
 * @head: the head of linked list
 * @index: the number of wantted node
 * Return: the n node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (temp);
}
}
