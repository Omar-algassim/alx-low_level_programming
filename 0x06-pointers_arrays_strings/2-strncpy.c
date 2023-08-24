#include "main.h"

/**
 * _strncpy - function cpies that string
 * @dest: var string copy in
 * @src: string copied from
 * @n: byts of src
 * Return: dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
