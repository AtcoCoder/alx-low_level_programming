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
	int n;

	if (head == NULL)
	{
		return (0);
	}

	ptr = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(ptr);

	return (n);
}
