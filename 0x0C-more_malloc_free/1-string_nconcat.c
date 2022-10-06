#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to the string
 * @s2: pointer to the string to be concatenated
 * @n: unsigned integer
 *
 * Return: pointer to the space created, NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
		n = j;

	length = i + n;
	ptr = malloc((length) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < length; j++)
	{
		if (j < i)
			ptr[j] = s1[j];
		else
			ptr[j] = s2[j - i];
	}
	ptr[j] = '\0';
	return (ptr);
}
