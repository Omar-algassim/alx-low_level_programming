#include "function_pointers.h"
/**
 * int_index - to search for integer
 * @array: araay that search in
 * @size: size of array
 * @cmd: the function compare tow integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
    if (size <= 0)
    return (-1);
for (i = 0; i < size; i++)
{
cmd(array[i]);
return (i);
}
}