#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int Aux;

	n = n - 1;
	while (i <= n)
	{
		Aux = a[i];
		a[i++] = a[n];
		a[n--] = Aux;
	}
}
