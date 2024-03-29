#include <stdio.h>
#include "search_algos.h"


/**
 * interpolation_search - Searches for a value in a sorted array of
 * integers using the interpolation search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located, -1 if value is
 * not present in array or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = estimate_pos(array, high, low, value);

		if (pos >= size)
		{
			print_out_of_bound(pos);
			return (-1);
		}
		print_state(pos, array[pos]);
		if (array[pos] > value)
		{
			high = pos - 1;
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			return (pos);
		}
	}

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
 * print_out_of_bound - prints out of bound message
 *
 * @pos: current position to compare
 *
 * Return: Nothing.
 */
void print_out_of_bound(size_t pos)
{
	printf("Value checked array[%lu] is out of range\n", pos);
}

/**
 * estimate_pos - estimates the position of value
 *
 * @arr: a pointer to the first element of the array
 * @hi: index of the last element in the array
 * @lo: index of the first element in the array
 * @val: target value
 *
 * Return: estimated position.
 */
size_t estimate_pos(int *arr, size_t hi, size_t lo, int val)
{
	size_t pos;

	pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (val - arr[lo]));

	return (pos);
}
