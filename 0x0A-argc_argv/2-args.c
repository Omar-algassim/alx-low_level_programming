#include "main.h"
/**
 * main - print all argument
 * @argv: the value of array
 * @argc: the count of array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	printf("\n");
	return (0);
}
