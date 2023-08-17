#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/

void print_alphabet_x10(void)
{
char l;
int x;

for (x = 0; x < 10; x++)
{
	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
}
