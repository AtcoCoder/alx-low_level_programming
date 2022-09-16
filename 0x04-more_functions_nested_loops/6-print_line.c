#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: variable
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
