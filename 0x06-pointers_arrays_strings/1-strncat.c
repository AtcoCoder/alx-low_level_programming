#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes of sourc required
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;
	

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

