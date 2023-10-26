#include "main.h"

/**
 * get_bit - get the value of bit in the index
 * @n: the number
 * @index: the number of bit
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (!n || index > 63)
		return (-1);
	i = n >> index;

	return (i & 1);
}
