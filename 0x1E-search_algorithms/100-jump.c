#include "search_algos.h"
#include <math.h>
/**
 * jump_search - search for value in sorted array of integer
 * using jump_search algorthim
 * @array: the array want to search in
 * @size: the size of array want to search in
 * @value: the value search for
 * Return: If value is not present in array or if
 * array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, next, index = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	next = jump;
	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (value <= array[next] || next > size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", index, next);
			while (index <= next && index < size)
			{
				printf("Value checked array[%lu] = [%d]\n", index, array[index]);
				if (array[index] == value)
					return (index);
				index++;
			}
		}
		index += jump;
		next += jump;

	}
	return (-1);
}

