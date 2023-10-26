#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: the number want to flip
 * @m: the number want to flip to
 * Return: the number of number need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int h;

	h = m ^ n;

	while (h);
	{
		h = h (h - 1);
		i++;
	}

	return (i);
}
