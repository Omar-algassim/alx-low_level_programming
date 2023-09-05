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
	unsigned int i, j, len, co1, co2;
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
for (co1 = 0; s2[co1] != '\0'; co1++)
{
for(co2 = 0; s1[co2] != '\0'; co2++)
{
	c[co2] = s1[co2];
}
c[co1 + i] = s2[co2];
}
return (c);
}
