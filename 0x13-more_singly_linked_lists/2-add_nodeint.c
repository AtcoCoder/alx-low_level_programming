#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 *
 * @head: pointer to pointer to the first node of the list
 * @n: integer data of the node to be added
 *
 * Return: pointer to the new first node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (*head);
}
