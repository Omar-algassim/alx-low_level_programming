#include "main.h"

/**
 * swap_int - swap the value of two integr
 * @a : the value number one
 * @b : the value number two
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
