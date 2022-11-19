#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in string.
 *
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurence of the character c in the string s.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (NULL);
}
