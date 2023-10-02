#include "main.h"

/**
 * main - add tow positive number
 * @argc: the number of args
 * @argv: the value of argv
 * Return: 1 if non digit if no number 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if (*argv[i] => '0' && argv[i] < '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
printf("%d", sum);
return (0);
}
