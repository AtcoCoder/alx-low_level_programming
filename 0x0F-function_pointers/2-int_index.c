#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to the search function
 *
 * Return: index of the array at which the number is found,
 * -1, if no match is found, -1 if size less than equal to zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
