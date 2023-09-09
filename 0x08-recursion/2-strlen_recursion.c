#include "main.h"

/**
 * _strlen_recursion - count the string length
 * @s:string will be counted
 * Return: the length value
 */

int _strlen_recursion(char *s)
{
	int i;
i = 0;
	if (*s != '\0')
	{
	i = i + 1;
	_strlen_recursion(s + 1);
	return (i);
}
}
