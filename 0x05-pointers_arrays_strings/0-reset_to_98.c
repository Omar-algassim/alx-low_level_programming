#include "main.h"
#include <stdio.h>

/**
 * main -rest the pointer to 98
 * @n : pointer to varisable to update
 *written by omar
 * Return: nothing
 */

void reset_to_98(int *n)
{
	printf("the value of n:%p \n", n);
	printf("the value of address n %p \n, n");
*n = 98;
}
