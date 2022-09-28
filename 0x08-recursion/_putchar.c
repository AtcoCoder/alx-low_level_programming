#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: single character
 *
 * Return: single character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
