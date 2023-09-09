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
		return (0);
	
	putchar(s[i]);
	i++;
}
void main()
{
	_puts_recursion();
}
