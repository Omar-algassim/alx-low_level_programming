#include "main.h"


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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of array member
 * @size: size of array member
 * written by omar
 * Return: pointer allocat
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *m;

if (nmemb == 0 || size == 0)
	return (NULL);

m = malloc(size * nmemb);

if (m == NULL)
	return (NULL);

_memset(m, 0, nmemb * size);

return (m);
}
