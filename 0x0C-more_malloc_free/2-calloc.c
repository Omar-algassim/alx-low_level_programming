#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
if (nmemb == 0 || size == 0)
	return (0);

m = malloc(nmemb * size);

if (m == NULL)
	return (NULL);

_memset(m, 0, nmemb * size);

return (m);
}
