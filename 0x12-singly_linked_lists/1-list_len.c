#include "lists.h"

/**
 * list_len - prints the number of elements in list
 *
 * @h: head of list
 *
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	const list_t *ptr = h;

	count = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
