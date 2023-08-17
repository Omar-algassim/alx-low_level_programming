#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 *_putchar - writes the character c to stdout
 * @c: The character to print
 * Return: always 0
 */
void print_numbers(void)
int _putchar(char c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{	
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
