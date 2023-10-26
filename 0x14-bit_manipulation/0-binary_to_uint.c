#include "main.h"

/**
 * binary_to_uint - convert the binary to int
 * @b:is the 0 or 1 char
 * Return: the int number and 0 if the char is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, oct, hex;

	i = strlen(b);
	oct = 0;
	hex = 1;

	if (b == NULL)
		return (0);
	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);
		if (b[i - 1] == NULL)
			return (0);
		if (b[i - 1] == '1')
		{
			oct += hex;
		}
		hex *= 2;
		i--;
	}
return (oct);
}
