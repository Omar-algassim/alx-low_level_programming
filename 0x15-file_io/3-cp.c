#include "main.h"
/**
 * main - function copy from file to file
 * @ac: the number of argument
 * @av:the argument
 * Return: always 0
 */
int main(int ac, char **av)
{
	int f_from, f_to, z, wr, c, c1;
	char *buff = malloc(1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(av[1], O_RDONLY);
	f_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	while ((z = read(f_from, buff, 1024)) != 0)
	{
		z = read(f_from, buff, 1024);
		if (z == -1 || f_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		wr = write(f_to, buff, z);
		if (wr == -1 || f_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	c = close(f_from);
	c1 = close(f_to);
	if (c == -1 || c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", f_from);
		exit(100);
	}
	free(buff);
	return (0);
}
