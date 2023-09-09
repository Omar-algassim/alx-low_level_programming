#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate the factorial of number
 * @n: the number 
 * Return: the result or error if the n>0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
	return (n = n * (n - 1));
	factorial(n--);
	}
	
}
