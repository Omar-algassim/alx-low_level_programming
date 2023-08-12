#include <stdio.h>
/**
 * main - Entry point
 *
 * REturn: Always 0 (Success)
 */
int main (void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
