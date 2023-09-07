#include "main.h"

/**
 * string_nconcat.c -  function that concatenates two strings.
 * @s1: string number 1
 * @s2: string number 2
 * @n: number of byet
 * Return: return 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memo;
	int len, len1;
len = 0;
len1 = 0;
	
while (s1[len])	
{
	len++;
}
while (s2[len1])
{
	len1++;
}
if (len1 >= n)
{
len1 = n;
}
memo = malloc(sizeof(char) * (len + len1) + 1);

	return (memo);
	}
