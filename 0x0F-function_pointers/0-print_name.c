#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: name to be printed
 * @f: pointer to function
 *
 * Retun: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
