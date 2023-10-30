#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: is the NULL terminator string
 * Return: Return: 1 on success and -1 on failure
 * Return 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int op;
	
	if (filename == NULL)
		return (-1);
	
	if (text_content == NULL)
		text_content = "";

	
	op = open(filename, O_WRONLY | O_APPEND);
	
	if (op == -1)
		return (-1);

	while (text_content[len])
		len++;

	write(op, text_content, len);

	return (1);
}
