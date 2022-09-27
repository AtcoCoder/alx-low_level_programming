#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of square matrix
 *
 * @a: the martix
 * @size: the size
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		if (b % (size + 1) == 0)
		{
			sum1 += *(a + b);
		}
		if (b % (size - 1) == 0 && b != 0 && i < size * size - 1)
		{
			sum1 += *(a + 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
