#include "main.h"

/**
 * puts_recursion - print string follwed by new line
 * @s: the string should
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	int i;
i = 0;

	if (s[i] < '\0')
		return;
	else
	{
	_putchar(s[i]);

	 _puts_recursion(i + 1);
}
}
void main()
{
	_puts_recursion();
}
