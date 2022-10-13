#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters passed
 *
 * @n: constant unsigned integer
 *
 * Return: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int i;
	int sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum = sum + num;
	}

	va_end(args);

	return (sum);
}
