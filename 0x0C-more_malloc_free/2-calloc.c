#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of array member
 * @size: size of array member
 * written by omar
 * Return: pointer allocat
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	int i;
	 
if (nmemb == 0 || size == 0)
	return (NULL);

m = malloc(size * nmemb);

if (m == NULL)
	return (NULL);

exit(m);
