#include "lists.h"

/**
 * sum_listint - calculat the sum of elemnt
 * @head: the head of link
 * Return: the sum of elemnt
 */

int sum_listint(listint_t *head)
{
	int n, sum = 0;

	while (head)
	{
		n = head->n;
		sum += n;
		head = head->next;
	}
	return (sum);
}
