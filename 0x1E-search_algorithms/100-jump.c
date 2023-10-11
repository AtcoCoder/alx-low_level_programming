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

	step_size = sqrt(size);
	curr_jump = 0;
	while ((array[curr_jump] >=value) && (curr_jump < size))
	{
		prev_jump = curr_jump;
		curr_jump += step_size;
	}

	for (i = prev_jump; i < curr_jump; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
