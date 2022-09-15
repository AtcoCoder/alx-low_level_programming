#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9.
 *
 * Return: characters
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
