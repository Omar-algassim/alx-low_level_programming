#include "main.h"

/**
 * _strcat : concantenates tow string
 * @str: string number one 
 * @dest: the string append in 
 * return:the value of dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (src[i] != '\0')

	i++;
while (dest[j] != '\0')
{
src[i] = dest[j];
j++;
i++;
}

dest[i] = '\0';
return (dest);
}
