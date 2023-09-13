#include "function_pointers.h"

/**
 * array_iterator - print the array
 * @size: the size of array
 * @array: the array will printed
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;
    
    if (array != 0 && action != 0)
    {
    for (i = 0; i < size; i++)
    action(array[i]);
    }   
}
