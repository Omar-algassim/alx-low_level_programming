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
	unsigned int i, j, len1, len2;
i = 0;
j = 0;
len1 = 0;
len2 = 0;

while (s1 && s1[len1])
{
	len1++;
}
while (s2 && s2[len2])
{
	len2++;
}
c = malloc(sizeof(char) * (len1 + len2 + 1));
if (c == NULL)
	return (NULL);
if (s1)

{
	while (i < len1)
{
	c[i] = s1[i];
	i++;
}
}

if (s2)
{
while (i < (len1 + len2))
{
	c[i] = s2[j];
	i++;
	j++;
}
}
c[i] = '\0';

return (c);
}
