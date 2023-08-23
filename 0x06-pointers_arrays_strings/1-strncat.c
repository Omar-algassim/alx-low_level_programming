#include "main.h"

/**
 * _strcat - concantenates tow string
 * @src: string number one
 * @dest: the string append in
 * @n: number of byte append to 
 * Return:the value of dest
 */

char *_strcat(char *dest, char *src)
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
"0-strcat.c" 29L, 337C                                                                                              29,1          All
