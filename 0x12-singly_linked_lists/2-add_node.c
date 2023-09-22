#include "lists.h"

/**
 * add_node - add new node in the head
 * @head:the first node
 * @str: the string
 * Return:the address of the new elemnt
 */

list_t *add_node(list_t **head, const char *str)
{
	char *cpy;
	int len;
	list_t *new;

	len = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cpy = strdup(str);
	if (cpy == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	new->str = cpy;
	new->len = len;
	new->next = *head;
	}
*head = new;
return (new);
}
