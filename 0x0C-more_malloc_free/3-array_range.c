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
	int i, j;

	if (min > max)
	{
		return (0);
	}
	for (i = min; i <= max; i++)
		;
	array = malloc(i * sizeof(int));
	if (array == NULL)
		return (0);
	for (j = min; j <= max; j++)
		array[j] = j;
	return (array);
}
