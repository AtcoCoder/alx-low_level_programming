#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the pointer to the first node of the listint_t list
 *
 * Return: head node's data or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;
	int n;

	if (head == NULL)
	{
		return (0);
	}

	tmp = *head;
	ptr = (*head)->next;
	n = (*head)->n;
	*head = ptr;

	free(tmp);

	return (n);
}
