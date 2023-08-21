#include "main.h"
/**
 * print_rev - print string reversly
 * @s: the value of array
 * written by omar
 * Return: the string reversl
 */

void print_rev(char *s)
{
int i;

for (i = '\0'; i != s[1]; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
