#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: first node of list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->next);
		free(curr);
	}
}
