#include <stdio.h>
#include "search_algos.h"


/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the BS algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located, -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	l = 0;
	r = size - 1;

	while (l < r)
	{
		print_array(array, l, r);

		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}


/**
 * print_array - prints specified range of an array
 *
 * @array: a pointer to the first element of the array
 * @left: index of the first element to print
 * @right: index of the last element to print
 *
 * Return: Nothing.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;
	char *msge = "Searching in array: ";

	_puts(msge);

	for (i = left; i <= right; i++)
	{
		putchar(array[i] + '0');
		if (i != right)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

/**
 * _puts - prints string without newline
 *
 * @str: string to be print
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}
