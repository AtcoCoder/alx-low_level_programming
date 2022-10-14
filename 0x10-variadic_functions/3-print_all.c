#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: format specifier
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, len = 0;
	char *separator = ", ";
	char *s;

	va_start(args, format);

	while (format && format[len])
		len++;
	i = 0;
	while (format && format[i])
	{
		if (i == (len - 1))
		{
			separator = "";
		}
		switch (format[i])
		{
			case 99:
				printf("%c%s", va_arg(args, int), separator);
				break;
			case 102:
				printf("%f%s", va_arg(args, double), separator);
				break;
		case 105:
				printf("%d%s", va_arg(args, int), separator);
				break;
			case 115:
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", s, separator);
				break;
		}
		i++;
	}
	printf("\n");
}
