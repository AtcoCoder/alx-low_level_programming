#include <stdio.h>
#include "search_algos.h"


/**
 * advanced_binary - Searches for a value in a sorted array of
 * integers using the BS algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located, -1 if value is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;
	size_t l, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	index = (int) recursive_binary(array, l, r, value);

	if (array[index] == value)
		return (index);

	return (-1);
}


/**
 * recursive_binary - Searches for the index of the first element with value
 * as value in array
 *
 * @array: a pointer to the first element of array
 * @left: lower bound of array
 * @right: upper bound of array
 * @value: the value to search for
 *
 * Return: the index of the first element with value, -1 if not found.
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (left >= right)
	{
		if (array[left] != value)
		{
			print_array(array, left, right);
		}
		return (left);
	}
	print_array(array, left, right);
	middle = (left + right) / 2;

	if (array[middle] < value)
		return (recursive_binary(array, middle + 1, right, value));
	else
		return (recursive_binary(array, left, middle, value));

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
