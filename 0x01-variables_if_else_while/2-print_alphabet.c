#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;
	low ='a';
	while(low <= 'z')
		putchar(low);
	        putchar('\n');
	low++;
	return(0);
}
