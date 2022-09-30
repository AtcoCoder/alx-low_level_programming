#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints single character to stdout
 *
 * @c: single character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
