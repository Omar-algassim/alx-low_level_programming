#include "main.h"

/**
 * array_range - calulate the range
 * @main:the minimum value
 * @max:the max value
 * Return: the pointer new created
 */

int *array_range(int min, int max)
{
	int *m;
	int i, r;
i = 0;

r = max - min + 1;

m = malloc(sizeof(int) * r);
if (m == 0)
	return (0);

while (min >= max)
{
m[i] = min;
	i++;
	min++;
}

return (m);
}	
