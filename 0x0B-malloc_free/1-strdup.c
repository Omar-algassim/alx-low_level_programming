#include "main.h"
/**
 * _strdup - copy the string in new pointer
 * @str: the string copy from
 * Return: null
 */

char *_strdup(char *str)
{
	char *s;
	int p, i;
p = 0;

if (str == 0)
	return (0);

while (str[p])
{
	s = malloc(sizeof(char) * p);
	p++;
if (s == 0)
	return (0);
}
for (i = 0; str[i] != '\0'; i++)

s[i] = str[i];

return (s);
}
