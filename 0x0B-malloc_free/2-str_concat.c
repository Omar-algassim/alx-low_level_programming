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
	unsigned int i, j, len;
i = 0;
j = 0;
if (s1 == NULL || s2 == NULL)
	return (0);
while (s1[i])
{
	i++;
}
while (s2[j])
{
	j++;
}
len = i + j;
c = malloc(sizeof(char) * (len + 1));

c[len] = s1[i];
c[len + i] = s2[j];

return (c);
}
