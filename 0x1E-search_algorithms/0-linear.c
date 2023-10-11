#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		print_state(i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

/**
 * print_state - prints the position of the search
 *
 * @index: current index
 * @value: the value at that index
 *
 * Return: Nothing.
 */
void print_state(size_t index, int value)
{
	printf("Value checked array[%lu] = [%d]\n", index, value);
}
