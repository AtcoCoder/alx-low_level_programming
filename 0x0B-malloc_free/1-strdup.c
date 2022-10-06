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

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	ptr = (char *)malloc(size * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ptr[i] = str[i];
	}
		return (ptr);
}
