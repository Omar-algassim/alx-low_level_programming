#include "main.h"

/**
  * set_bit - chang bit to 1
  *@n: the number
  *@index:the number of bit
  *Returns: 1 if it worked, or -1 if an error occurred
  */

  int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int h;
	
	h = 1;
	if (!n || index > 63)
		return (-1);

	h = h << index;
	*n = *n | h;
	return (1);
}
