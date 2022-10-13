#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers separated by comma
 *
 * @separator: separates the numbers
 * @n: constant unsigned integer for the number of numbers
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list args;

	if (n == 0)
	{
		exit(0);
	}
	
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, const unsigned int);
		printf("%d", num);
		if(i != (n - 1))
		{
			if (separator != NULL)
			{
			printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
