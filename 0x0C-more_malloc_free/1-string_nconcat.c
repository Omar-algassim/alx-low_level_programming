#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string number 1
 * @s2: string number 2
 * @n: number of byet
 * Return: return 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memo;
	unsigned int i, j, len, len1;
len = 0;
len1 = 0;
i = 0;
j = 0;

while (s1[len] != '\0')
	len++;
printf("%d\n", len);
while (s2[len1] != '\0')
	len1++;
	printf("%d\n", len1);
if (len1 >= n)
	memo = malloc(sizeof(char) * (len + len1 + 1));
	else
	memo = malloc(sizeof(char) * (len + n + 1));
if (memo == NULL)
	return (NULL);

	while (i < len)
{
	memo[i] = s1[i];
	i++;
}
if (n > len1)
	
while (i < (len + n))
	memo[i] = s2[j];
	i++;
	j++;
if (n < len1)
while (i < (len1 + len))
	memo[i] = s2[j];
	i++;
	j++;
	
memo[i] = '\0';
return (memo);
}
