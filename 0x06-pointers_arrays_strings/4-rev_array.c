#include "main.h"

/**
 * reverse_array - revers the contents
 * @a: the array
 * @n: the numer of elemnt
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
int i, j, t;

j = (n - 1);
i = 0;
while (i < n)
{
t = a[i];
a[j] = a[i];
a[j--] = t;

i++;
}
}
