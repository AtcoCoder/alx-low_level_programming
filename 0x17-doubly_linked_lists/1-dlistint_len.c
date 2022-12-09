#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked
 *
 * @h: linked to be counted
 *
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
