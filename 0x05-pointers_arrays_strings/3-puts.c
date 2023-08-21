#include "main.h"

/**
 * _puts - to print stdout
 * written by omar
 * @str: the string stdout
 * Return: alyaws 0
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i]!= '\0'; i++)
{

_putchar(str[i]);
}
_putchar('\n');
}
