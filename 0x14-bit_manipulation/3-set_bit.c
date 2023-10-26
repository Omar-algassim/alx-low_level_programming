#include "main.h"

/**
 * set_bit - set the bit in the n to 1 at given index
 * @n:the number to set
 * @index: the number of bit want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int set = 1;
	unsigned int i = 0;

	if (!n || index > 63)
		return (-1);

	while (i < index)
	{
		set = set << 1;
		i++;
	}

	*n = set | *n;

return (1);
}


