#include "main.h"
/**
 * _strdup - copy the string in new pointer
 * @str: the string copy from
 * Return: null
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int p, i;
p = 0;

if (str == 0)
	return (0);

while (str[p])
{
	p++;
}
s = malloc(sizeof(char) * (p + 1));

if (s == 0)
	return (0);

for (i = 0; str[i] != '\0'; i++)

s[i] = str[i];

return (s);
}
