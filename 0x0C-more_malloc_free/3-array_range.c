#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Pointer to an array of integers on success, returns NULL if failed
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (0);
	}

	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
		return (0);
	for (i = 0; min <= max; i++, min++)
		array[i] = min;
	return (array);
}
