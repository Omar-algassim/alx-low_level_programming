#include "lists.h"

/**
 * insert_dnodeint_at_index - add nod in the special position
 * @h: the head of linked lisst
 * @idx: the position want to add in
 * @n: the value of new node
 * Return: the new nod or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *current = *h;
unsigned int i = 0;

if (idx == 0)
add_dnodeint(h, n);
else
{
while (current != NULL)
current = current->prev;

new->n = n;
while (current != NULL)
{
if (i == idx)
{
if (current->next == NULL)
add_dnodeint_end(h, n);
else
{
new->next = current->next;
new->prev = current;
current->next->prev = new;
current->next = new;
return (new);
}
}
current = current->next;
i++;
}
}
return (NULL);
}
