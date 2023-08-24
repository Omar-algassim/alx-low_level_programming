#include "main.h"

/**
 * reverse_array - revers the contents
 * @a: the array
 * @n: the numer of elemnt
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
while (n != 0)
{
	_putchar(a[n]);
	n--;
}
_putchar('\n');
return (0);

