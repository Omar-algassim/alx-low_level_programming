#include "main.h"
/**
 * print_array - print elemnts number in array
 * @a: name of array 
 * @n: number of elemnts
 * Return: aways 0
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i <= n; i++)
{
	if(i == 0)
	printf("%d", a[i]);
	else
	printf(", %d", a[i]);
}
printf ("\n");
}
