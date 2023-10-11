#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where is value is located, -1 if value is
 * not present in array or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step_size, prev_jump, curr_jump, i;

	if (array == NULL)
		return (-1);

	step_size = sqrt(size);
	curr_jump = 0;
	while ((array[curr_jump] < value) && (curr_jump < size))
	{
		print_state(curr_jump, array[curr_jump]);
		prev_jump = curr_jump;
		curr_jump += step_size;
	}

	print_found(prev_jump, curr_jump);
	for (i = prev_jump; i <= curr_jump; i++)
	{
		if (i >= size)
			return (-1);
		print_state(i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
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
