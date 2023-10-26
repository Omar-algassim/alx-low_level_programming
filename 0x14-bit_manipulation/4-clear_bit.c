#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: the number want to set 0 in
 * @index: the index 
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
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

	set = ~ set;

	*n = *n & set;
return (1);
}
