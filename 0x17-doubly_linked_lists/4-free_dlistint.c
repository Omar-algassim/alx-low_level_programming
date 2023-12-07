#include "lists.h"

/**
 * free_dlistint - free the linkedlist
 * @head: the head of linkedlis
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
