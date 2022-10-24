#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 *
 * @head: pointer to the pointer to the first node in the listint_t
 * @n: integer value to be added
 *
 * Return: pointer to the updated listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}


	new->n = n;
	new->next = NULL;
	
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
	
		ptr->next = new;
	}

	return (*head); 
}
