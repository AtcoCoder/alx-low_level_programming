#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - inserts an new node at the beginning of the list
 * @head: a pointer to the first node
 * @n: value of the new node
 *
 * Return: new list, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
