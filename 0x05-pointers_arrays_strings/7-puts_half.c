#include "main.h"
/**
 * puts_half - print the last half of string
 * @str: the string array
 * Return: 0
 */

void puts_half(char *str)
{
int c, i, h, j;

c = 0;
while (str[c] != '\0')
{
c++;
}
j = c;
if (j % 2 == 0)
h = j / 2;
else
h = (j - 1) / 2;

for (i = h + 1; i <= c; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
