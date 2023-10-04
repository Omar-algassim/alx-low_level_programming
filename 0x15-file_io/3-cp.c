#include "main.h"
/**
 *main - copy file to another file
 *@argc: the number of argument
 *@argv:the name of files
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	char c[1024];
	int copy_to, from, x, y;
	ssize_t z;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
			dprintf(2, "Error: Can't open from file %s\n", argv[1]);
			exit(98);
	}
	copy_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (copy_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (z != 0)
	{
		z = read(from, c, 1024);
		if (z < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write(copy_to, c, z);
		printf("file copied\n");
	}
	x = close(from);
	if (x < 0)
	{
		dprintf(2, "Error: Can't close fd %d", from);
		exit(100);
	}
	y = close(copy_to);
	if (y < 0)
	{
		dprintf(2, "Error: Can't close fd %d", copy_to);
		exit(100);
	}
	return (0);
}
