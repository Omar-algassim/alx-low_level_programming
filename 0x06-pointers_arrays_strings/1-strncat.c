#include "main.h"

/**
 * _strcat - concantenates tow string
 * @src: string number one
 * @dest: the string append in
 * @n: number of byte append to 
 * Return:the value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')

        i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
