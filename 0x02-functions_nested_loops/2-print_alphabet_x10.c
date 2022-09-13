#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c, n;

	n = 0;
	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
