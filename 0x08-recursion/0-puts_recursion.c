#include "main.h"

/**
 * puts_recursion - print string follwed by new line
 * @s: the string should
 * Return: always 0
 */

void _puts_recursion(char *s)
{

	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	 _puts_recursion(s + 1);
}
