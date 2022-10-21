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
	if (head != NULL)
	{
		free(head);
	}
}
