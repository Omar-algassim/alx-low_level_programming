#include "function_pointers.h"
/**
 * int_index - to search for integer
 * @array: araay that search in
 * @size: size of array
 * @cmp: the function compare tow integer
 * Return: -1 if not same 1if its same
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size < 0)
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);

return (-1);
}
