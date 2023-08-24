#include "main.h"

/**
 * string_toupper - function chang the lowercase string to uppercas
 *
 *@s: the string will be chinging to uppercase
 *Return: the new string
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
	if (i >= 'a' && i <= 'z')
	s[i] = s[i] - 32;
}
return (s);
}
