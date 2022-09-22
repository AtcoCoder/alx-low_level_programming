#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if first string is equal to the second
 * positive if s1 is greater than s2, negative if s2 is less
 * than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int len, res;

	for (len = 0; s1[len] != '\0' && s2[len] != '\0'; len++)
	{
		if (s1[len] == s2[len])
		{
			res = 0;
		}
		else
		{
			res = s1[len] - s2[len];
		}
	}
	return (res);
}
