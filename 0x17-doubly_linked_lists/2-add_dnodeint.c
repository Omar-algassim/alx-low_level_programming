#include "lists.h"

/**
 * add_dnodeint - add new at the beginning of a dlistint_t
 * @head: the head node
 * @n: the value in new node
 * Return: the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *current;

if (new == NULL)
return (NULL);

current = *head;
new->n = n;
new->prev = NULL;

if (current != NULL)
{
while (current->prev != NULL)
current = current->prev;
}

new->next = current;
if (current != NULL)
{
current->prev = new;
}

*head = new;


return (new);
}
