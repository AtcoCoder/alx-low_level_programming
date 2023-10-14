#include <stdio.h>
#include "search_algos.h"


/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located, if value is not present in
 * array or if array is NULL, return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l_bound, u_bound;

	if (array == NULL)
		return (-1);

	u_bound = 1;
	while ((u_bound < size) && (array[u_bound] < value))
	{
		print_state(u_bound, array[u_bound]);
		u_bound *= 2;
	}

	l_bound = u_bound / 2;
	if (u_bound == size)
	{
		u_bound -= 1;
	}
	if ((u_bound) > size)
	{
		return (-1);
	}
	print_found(l_bound, u_bound);
	return (_binary_search(array, value, l_bound, u_bound));
}

/**
 * _binary_search - Searches for a value in a sorted array of
 * integers using the BS algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @l_bound: the lower bound of array
 * @u_bound: the upper bound of array
 *
 * Return: the index where value is located, -1 if value is not present
 */
int _binary_search(int *array, int value, size_t l_bound, size_t u_bound)
{
	size_t l, r, m, new_range;

	if (array == NULL)
		return (-1);

	l = l_bound;
	r = u_bound;

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
 * print_state - prints the current value and it's value
 *
 * @index: current index
 * @value: the value of the current index
 *
 * Return: Nothing.
 */
void print_state(size_t index, int value)
{
	printf("Value checked array[%lu] = [%d]\n", index, value);
}


/**
 * print_found - prints the range within which the value if found
 *
 * @prev_jump: previous jump position
 * @curr_jump: current jump position
 *
 * Return: Nothing.
 */
void print_found(size_t prev_jump, size_t curr_jump)
{
	printf("Value found between indexes [%lu] and [%lu]\n", prev_jump, curr_jump);
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
