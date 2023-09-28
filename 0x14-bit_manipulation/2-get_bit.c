#include "main.h"

/**
 * get_bit - git the bit value
 * @n:the number
 * @index:the index of n
 *Return: the value of inex bit
 */


 int get_bit(unsigned long int n, unsigned int index)
{
	int h;

	n = n >> index;
	h = n & 1;
	return (h);
}
