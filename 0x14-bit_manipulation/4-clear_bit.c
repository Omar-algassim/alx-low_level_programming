#include "main.h"

/**
  *clear_bit - set bit to 0
  *@n:the value of
  *@index: the number f index
  *Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int h;

	h = 1;
	if (!n || index > 63)
		return (-1);

	h = h << index;
	h = ~h;
	*n = *n & h;
	return (1);
}
