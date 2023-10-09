#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: If value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		print_comparison(i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

/**
 * print_number - prints number
 *
 * @num: number to be printed
 *
 * Return: Nothing.
 */
void print_number(int num)
{
	int i, signed_num;
	char lastd;
	char array[8];

	if (num == 0)
		putchar('0');
	else
	{
		if (num < 0)
		{
			signed_num = num;
			num = (-1) * num;
		}
		i = 0;
		while (num != 0)
		{
			lastd = num % 10;
			num = num / 10;
			array[i] = lastd;
			i++;
		}
		i--;

		if (signed_num < 0)
			putchar('-');
		for (; i >= 0; i--)
		{
			putchar(array[i] + '0');
		}
	}
}

/**
 * print_comparison - prints the position of the search
 *
 * @index: current index
 * @value: the value at that index
 *
 * Return: Nothing.
 */
void print_comparison(size_t index, int value)
{
	int i;
	char *str = "Value checked array[0] = [0]";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 20)
		{
			print_number(index);
		}
		else if (i == 26)
		{
			print_number(value);
		}
		else
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
