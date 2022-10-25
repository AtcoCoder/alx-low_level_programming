#include "lists.h"

/**
 * sum_listint - sum all the data of a listint_t linked list.
 *
 * @head: pointer to the first node of the list
 *
 * Return: sum of all the data of listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
