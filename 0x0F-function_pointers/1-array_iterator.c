#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print the array
 * @size: the size of array
 * @array: the array will printed
 * @action: the function want to run
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

if (array != 0 && action != 0 && size >= 1)
{
for (i = 0; i < size; i++)
	action(array[i]);
}
}
