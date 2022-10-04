#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 * the string str.
 * @str: pointer to a string which is duplicated
 *
 * Return: NULL if str = NULL, on success, a pointer to the duplicate
 * string; NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size, i;

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ptr[i] = str[i];
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (ptr);
}
