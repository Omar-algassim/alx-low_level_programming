#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * prop_position - find the prop_position in array
 * @array: array want to find prop_position in
 * @high: the high elemnt in array
 * @low: the lowest elemnt in array
 * @value: the value want to find
 * Return: the prop_position
 */
size_t prop_position(int *array, size_t high, size_t low, int value)
{
	size_t pos;

	if (array == NULL)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	printf("%lu \n", pos);
	return (pos);
}

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = array[0];
	size_t high = array[size - 1];
	size_t pos = prop_position(array, high, low, value);

	while ((array[low] < array[high]) && (array[low] <= value) && (value <= array[high]))
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos;
		if (array[pos] < value)
			low = pos;
		else
			return (pos);
		pos = prop_position(array, high, low, value);
	}
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
