#include "main.h"

/**
 * read_textfile - read the test in file and print it in POSIX stdout
 * @filename: the file will read
 * @letters: the number of letter should read
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[letters];
	ssize_t op, re, wr;
	
	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	re = read(op, buff, letters);

	wr = write(1, buff, re);

	close(op);
	return (wr);
}
