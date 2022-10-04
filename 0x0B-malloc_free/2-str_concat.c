#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: destination string
 * @s2: source string
 *
 * Return: On success, pointer to a newly allocated spaced in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, count, size, i, j;
	char *ptr;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
	{
	}
	for (count = 0; s2[count] != '\0'; count++)
	{
	}
	size = len + count;

	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}
	return (ptr);
}
