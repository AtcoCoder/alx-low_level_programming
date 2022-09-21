#include <unistd.h>

/**
 * _putchar - prints string character
 *
 *@c: single character
 *
 * Return: 1 on success, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
