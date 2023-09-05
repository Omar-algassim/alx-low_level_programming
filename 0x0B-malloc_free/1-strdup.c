#include "main.h"
/**
 * _strdup - copy the string in new pointer
 * @str: the string copy from
 * Return: null
 */

char *_strdup(char *str)
{
	char *s;
	int p;
	int i;
s = malloc(sizeof(str));
if (s == 0 || str == 0)
	return (0);

for (i = 0; str[i] != '\0'; i++)
	p = str[i];
	s[i] = p;
	s[i] = str[i];
if (s == NULL)
	return (0);
else
	return (s);
}
