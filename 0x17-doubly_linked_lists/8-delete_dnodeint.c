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
dlistint_t *after = *head;
unsigned int i = 0;

if (index == 0)
{
if (after->next == NULL)
*head = malloc(sizeof(dlistint_t));
else
*head = after->next;
}
else
{
after = current->next;
while (current != NULL)
{
if (i == index)
{
if (current->next == NULL)
{
current = NULL;
perve->next = NULL;
return (1);
}
if (current->next != NULL)
after->prev = perve;
perve->next = after;
return (1);
}
if (i != 0)
{
perve = perve->next;
}
after = after->next;
current = current->next;
i++;
}
}
return (-1);
}
