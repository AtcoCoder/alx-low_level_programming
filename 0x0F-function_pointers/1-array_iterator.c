#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 *
 * @size: size of the array
 * @action: pointer to the function to be executed
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
