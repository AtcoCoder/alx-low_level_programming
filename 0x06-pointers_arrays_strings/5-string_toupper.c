#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to string
 * Return: char
 */
char *string_toupper(char *s)
{
	int len;
	int i;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
