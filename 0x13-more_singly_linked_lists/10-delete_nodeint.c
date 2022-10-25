#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at index "index" of a listint_t
 *
 * @head: pointer to the address of the first node.
 * @index: index of the target node
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *curr;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}
	prev = *head;
	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}

	count = 0;
	while (curr != NULL)
	{
		if (count == index)
		{
			prev->next = curr->next;
			free(curr);
			curr = NULL;
			return (1);
		}
		prev = curr;
		curr = curr->next;
		count++;
	}
	return (-1);
}
