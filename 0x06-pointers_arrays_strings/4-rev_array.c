#include "main.h"

/**
 * reverse_array - revers the contents
 * @a: the array
 * @n: the numer of elemnt
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
int i;

i = n - 1;
while (i != 0)
{
	_putchar(a[i]);
	i--;
}
_putchar('\n');
return (0);
