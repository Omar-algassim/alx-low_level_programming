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
	char *m;
	unsigned int len, len1, i, j;
len = 0;
len1 = 0;
i = 0;
j = 0;
while (s1[len] != '\0')
{
	len++;
}
while (s2[len1] != '\0')
{
	len1++;
}
if (n > len1)
m = malloc(sizeof(char) * (len + len1) + 1);
else
m = malloc(sizeof(char) * (len + n) + 1);

while (i <= len)
{
	m[i] = s1[i];
	i++;
}
while ((len1 + len) < i && len1 <= n)
{
m[i] = s2[j];
i++;
j++;
}
while (n < len1 && i < (len1 + n))
{
	m[i] = s2[j];
	i++;
	j++;
}
m[i] = '\0';
return (m);
}
