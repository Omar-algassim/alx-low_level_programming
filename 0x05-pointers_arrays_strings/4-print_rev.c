#include "main.h"
/**
 * print_rev - print string reversly
 * @s: the value of array
 * written by omar
 * Return: the string reversl
 */

void print_rev(char *s)
{
int i,c,l;
c = 0;
while(s[c] != '\0')
{
	c++;
}
l = c;
for (i = l-1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
