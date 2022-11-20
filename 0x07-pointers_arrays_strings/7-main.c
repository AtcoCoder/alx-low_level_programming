#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'P'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'K', 'B', 'K', 'R'},
	};
	print_chessboard(board);
	return (0);
}
