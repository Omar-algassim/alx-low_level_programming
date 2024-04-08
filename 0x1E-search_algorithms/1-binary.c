#include "search_algos.h"
#include <complex.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - print all element in array
 * @index: index begin to print
 * @array: array want to print
 * @size: the size of array 
 * Return: nothing
 */

void print_array(int *array, size_t size, size_t index)
{

	if (array == NULL)
		return;
	printf("Searching in array: ");
	while (index <= size)
	{
		printf("%d", array[index]);
		if (index != size)
			printf(", ");
		index++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: if value is not present in array or if array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, index_l = 0, index_r, middel = 0;

	if (array == NULL)
		return (-1);
	index_r = size - 1;
	while (index_l <= index_r)
	{
		print_array(array, index_r, index);
		middel = (index_l + index_r) / 2;

		if (array[middel] > value)
		{
			index_r = middel - 1;
			index = index_l;
		}
		else if (array[middel] < value)
		{
			index_l = middel + 1;
			index = index_l;
		}
		else
			return (middel);
	}
	return (-1);
}
