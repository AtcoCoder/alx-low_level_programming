#include <stdio.h>
#include "search_algos.h"


/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the BS algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located, -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, new_range;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l < r)
	{
		print_array(array, l, r);

		new_range = l + r;
		m = new_range / 2;

		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	print_array(array, l, r);
	return (-1);
}


/**
 * print_array - prints specified range of an array
 *
 * @array: a pointer to the first element of the array
 * @left: index of the first element to print
 * @right: index of the last element to print
 *
 * Return: Nothing.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
		{
			printf(", ");
		}
	}
	printf("\n");
}
