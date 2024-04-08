#include "search_algos.h"


/**
 * linear_search - linear_search algorthim
 * @array: the array will search in
 * @size: size of array search in
 * @value: the number want to retrive
 * Retrun: the index of value or -1 in fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	while (size > index)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
