#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of link list
 * @n: the value of new node
 * Return: the address of new node if success and NULL if fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *current = *head;

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
if (current != NULL)
{
while (current->next != NULL)
current = current->next;
current->next = new;
}
else
*head = new;

new->prev = current;

return (new);
}
