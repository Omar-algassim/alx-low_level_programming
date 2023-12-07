#include "lists.h"

/**
 * sum_dlistint - sum of linked list elemnt
 * @head: the head of linked kidt
 * Return: the sum of linked list elemnt
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum = (current->n) + sum;
current = current->next;
}
return (sum);
}
