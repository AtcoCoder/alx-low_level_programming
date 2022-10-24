#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to pointer to the first node of listint_t list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}

