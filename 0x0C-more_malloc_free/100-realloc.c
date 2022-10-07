#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, allocated space for ptr
 * @new_size: the size, in bytes of the new memory block
 *
 * Return: a pointer to the new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if ((new_size == 0) && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
