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

if (str == 0)
	return (0);
while (str[p])
	p++;
s = malloc(sizeof(char) * (p + 1));		

for (i = 0; str[i] != '\0'; i++)
	s[i] = str[i];
	
if (s == NULL)
	return (0);
else
	return (s);
}
