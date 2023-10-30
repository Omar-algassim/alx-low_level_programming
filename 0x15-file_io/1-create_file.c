#include "main.h"

/**
 * create_file - function create the file
 * @filename: the name of file will created
 * @text_content: is a NULL terminated string to write to the file 
 * Return: Returns: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write fails, etc)
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int op, w;
	int len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	
	w = write(op, text_content, len);
	if (w == -1)
		return (-1);

	return (1);
}
