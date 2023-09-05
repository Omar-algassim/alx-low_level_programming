#include "main.h"

/**
 * create_array -  creates an array of chars
 * @c:array of char
 * @size: size of array
 * Return: null if size = 0 Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;

s = malloc(size);
if (size == 0 || s == 0)
	return (0);
while (size--)
	s[size] = c;
return (s);
}
