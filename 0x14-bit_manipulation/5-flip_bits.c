#include "main.h"

/**
 *flip_bits - the number of flibed bits
 *@n: the first number
 *@m: the second number
 *Return: the number of bits you would need to flip
 *to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int h;
	int i = 0;

	h = n ^ m;

	while (h)
	{
		h = h & (h - 1);
		i++;
	}
	return (i);
}


