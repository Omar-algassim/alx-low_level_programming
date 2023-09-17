#include "main.h"

/**
 * main - multibly tow integer
 * @argc:the count of elemnt
 * @argv:the value of elemnt
 *
 * Return: always 0
 */

int main (int argc, char *argv[])
{
	int a, b, r;

if (argc <= 2)
{
	printf("Error\n");
	return (1);
}
else
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	r = a * b;
	printf("%d\n", r);
		return(0);
	}
}
