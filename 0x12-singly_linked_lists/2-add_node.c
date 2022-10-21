#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 *
 * @head: pointer to the first node
 * @str: string value of the new node
 *
 * Return: pointer to the new node.
 */
list_t *add_node(const list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	ptr = (list_t *)head;

	ptr->str = str;

	ptr= ptr->str;

	free(ptr);
	return (ptr);
}
