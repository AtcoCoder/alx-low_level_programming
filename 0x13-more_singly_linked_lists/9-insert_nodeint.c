#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the pointer to the head of the listint_t list
 * @idx: the index of the list where the new node should be added.
 *
 * Return: NULL if it failed, or address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	ptr = *head;
	count = 0;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	
	while (ptr != NULL)
	{
		if (count == (idx - 1))
		{
			
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
