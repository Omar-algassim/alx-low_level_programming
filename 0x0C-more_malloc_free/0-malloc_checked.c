#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: return poiter
 * Return: 98 in fail stute
 */

void *malloc_checked(unsigned int b)
{
	char *memo;

	memo = malloc(b);

	if (memo == NULL)
	exit(98);

return (memo);
}

