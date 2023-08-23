#include "main.h"

/**
 * _strcat - concantenates tow string
 * @src: string number one
 * @dest: the string append in
 * Return:the value of dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')

	i++;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';
return (dest);
}
