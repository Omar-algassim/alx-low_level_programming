#include "lists.h"

/**
 * get_dnodeint_at_index - get the value in the index
 * @head: the head node of linked list
 * @index: the index want to get
 * Return: the valu in the index node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
return (current);

current = current->next;
i++;
}
return (NULL);
}