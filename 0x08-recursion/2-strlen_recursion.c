#include "main.h"

/**
 * _strlen_recursion - count the string length
 * @s:string will be counted
 * Return: the length value
 */

int _strlen_recursion(char *s)
{
	unsigned int i;

	if (*s != '\0')
	{
	i = i + 1;
	return (i);
	_strlen_recursion(s + 1);
	}
	return (0);
}
