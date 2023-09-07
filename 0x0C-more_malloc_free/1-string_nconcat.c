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
	int i, j, len, len1;
len = 0;
len1 = 0;
i = 0;
j = 0;
	
while (s1 && s1[len])	
{
	len++;
}
while (s2 && s2[len1])
{
	len1++;
}
if (len1 >= n)
	memo = malloc(sizeof(char) * (len + len1 + 1));
	else
	memo = malloc(sizeof(char) * (len + n + 1));
if (!memo)
	return (NULL);

	while (i < len)
{	
	memo[i] = s1[i];
	i++;
}
while (n < len1 && i < (len + n))
{
	memo[i] = s2[j];
	i++;
	j++;
	}
while (n >= len1 && i < (len1 +len))
	memo[i] = s2[j];
	i++;
	j++;

	return(memo);
}
