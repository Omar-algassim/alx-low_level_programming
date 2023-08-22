#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @s: string to print the chars from
 */
void rev_string(char *s)
{
	int len, i;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
