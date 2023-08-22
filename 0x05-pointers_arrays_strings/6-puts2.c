#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int c, i;

	len = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
