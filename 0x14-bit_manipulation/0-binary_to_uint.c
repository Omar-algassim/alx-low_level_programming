#include "main.h"

/**
 * binary_to_uint - trensfer the binary to number
 * @b:pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if there is one
 * or more chars in the string b that is not 0 or 1
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
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i - 1] == '1')
		{
			oct += hex;
		}
		hex *= 2;
		i--;
	}
return (oct);
}

