#include "main.h"

/**
 * *array_range - calulate the range
 * @min:the minimum value
 * @max:the max value
 * Return: the pointer new created
 */

int *array_range(int min, int max)
{
	int *m;
	int i, r;

if (min > max)
	return (NULL);

r = max - min + 1;

m = malloc(sizeof(int) * r);
if (m == 0)
	return (0);

for (i = 0; min <= max; i++)
	m[i] = min++;

return (m);
}
