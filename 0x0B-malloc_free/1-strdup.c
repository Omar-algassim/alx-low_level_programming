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
	s = malloc(sizeof(char) * (p + 1));
	p++;
if (s == 0)
	return (0);
}
for (i = 0; i <= p; i++)

s[i] = str[i]

return (s);
}
