#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of list
 *
 * @h: head
 *
 * Return: unsigned int.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	const list_t *ptr = h;

	count = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
