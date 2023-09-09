#include "main.h"

/**
 * print_rev_recursion - print string in reverse
 * @s: string will print
 * Return:always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	return;
	}
_putchar(*s);
_print_rev_recursion(s - 1);
}
