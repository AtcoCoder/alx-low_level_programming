#include "lists.h"

/**
 * add_node_end - insert new node at the end of list
 *
 * @head: pointer to the first node of the list
 * @str: character string
 *
 * Return: pointer to the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;
	int length;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	ptr->str = strdup(str);
	ptr->len = length;
	ptr->next = NULL;

	tmp = *head;

	if (tmp == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = ptr;
	}
	return (*head);
}
