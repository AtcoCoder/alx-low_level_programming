#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: pointer to the string
 *
 * Return: pointer to the sting
 */
char *leet(char *str)
{
	int i, k;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (str[i] == s[k])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
