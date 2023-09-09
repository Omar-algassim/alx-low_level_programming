#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power y
 * @x:the number
 * @y:the power of number
 * Return: -1 if  y<0 return the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return ((x * x)_pow_recursion(y - 1))
}
