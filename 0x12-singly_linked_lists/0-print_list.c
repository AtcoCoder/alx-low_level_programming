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

	list_t *ptr;

	if (h == NULL)
	{
		return (0);
	}

	ptr = malloc(sizeof(list_t));
	ptr = (list_t *)h;

	count = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
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
