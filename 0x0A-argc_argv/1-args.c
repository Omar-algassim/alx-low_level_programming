#include "main.h"

/**
 * main - print number of argument
 * @argc:argument counter
 * @argv: argument value
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d \n", argc - 1);
	return (0);
}
