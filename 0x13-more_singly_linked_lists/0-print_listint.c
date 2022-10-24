#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of listint_t list
 *
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes in listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
