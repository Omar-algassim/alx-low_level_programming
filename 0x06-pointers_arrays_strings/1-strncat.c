#include "main.h"

/**
 * _strncat - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;
while (dest[i] != '\0')
	{
	dest[i] = src[i];
	i++;
}

while (src[j] != '\0' && j < n)
{
	dest[i] = '\0';
	i++;
}

return (dest);
}
