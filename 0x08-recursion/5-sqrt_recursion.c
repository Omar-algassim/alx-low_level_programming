#include "main.h"

/**
 * sqrt2 - natural square of a number
 * @a:the number want sqrt to a=n
 * @b: the test value
 * Return: the value of square
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - natural square of a number
 * @n:the number
 * Return: the value of square
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
