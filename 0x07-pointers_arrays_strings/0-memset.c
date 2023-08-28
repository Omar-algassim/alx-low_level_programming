#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s:pointed by constant
 * @n: number of byte
 * @b: constant b
 * Return: value to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
    s[i] = b;
}
 return (s);
}
