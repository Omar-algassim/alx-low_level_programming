#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: string number 1
 * @s2: string number 2
 * Return: null
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, j;
i = 0;
j = 0;
if (s1 == NULL || s2 == NULL)
	return (0);
c = malloc(sizeof(s1) + sizeof(s2));
while (s1[i])
{
	c[i] = s1[i];
	i++;
}
while (s2[j])
{
	c[i + j] = s2[j];
	j++;
}

return (c);
}
