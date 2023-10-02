#include "main.h"

/**
  *create_file - creates a file.
  *@filename:is the name of the file to create
  *@text_content:s a NULL terminated string to write to the file
  *Return:eturns: 1 on success, -1 on failure
  if filename is NULL return -1
  */

int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

	while (text_content)
	{
		i++;
	}

	write(file, text_content, i);
return (1);
}

