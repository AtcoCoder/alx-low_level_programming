#include <unistd.h>

/**
 * _putchar - prints single character
 *
 * @c: single character
 *
 * Return: 1 as success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
