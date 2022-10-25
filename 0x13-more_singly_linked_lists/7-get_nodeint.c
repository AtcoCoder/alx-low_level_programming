#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the pointer to the first node of the list
 * @index: the index of the node, starting at 0
 *
 * Return: nth node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (head)
	{
		ptr = head;
		if (count == index)
		{
			return (ptr);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
