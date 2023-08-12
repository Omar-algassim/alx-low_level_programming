#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Aleways 0 (Success)
 */
int main(void)
{
	char l;
	char d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
