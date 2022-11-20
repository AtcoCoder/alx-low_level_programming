#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - prints the chessboard
 *
 * @a: 2D array containing the characters
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (a[i][j] != '\0')
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
