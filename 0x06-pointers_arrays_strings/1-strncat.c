#include "main.h"

/**
 * _strcat - concantenates tow string
 * @src: string number one
 * @dest: the string append in
 * Return:the value of dest
 */

char *_strncat(char *dest, char *src, int n);
{
int i, j;

i = 0;

while (dest[i] != '\0')
{
	i++;
}
dest[i] = src[n];

return (dest);
}
