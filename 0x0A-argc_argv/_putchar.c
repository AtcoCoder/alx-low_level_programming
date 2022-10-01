#include <unistd.h>

/**
 * _putchar - prints a single character to stdout
 * @c: single charater
 *
 * Return: single character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
