#include "lists.h"

/**
 * listint_len - returns the number of elements in link listint_t list
 *
 * @h: pointer to the first node in listint_t
 *
 * Return: number of elements in listint_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
