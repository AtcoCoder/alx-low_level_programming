#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: the string to be check for a substring
 * @needle: the substring to be located
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	for (len = 0; needle[len] != '\0'; len++)
		;

	i = 0;
	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == needle[0])
		{
			j = 1;
			while (j < len)
			{
				if (haystack[i + j] == needle[j])
				{
					j++;
				}
				else
				{
					return (NULL);
				}
			}
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
