#include "lists.h"



/**
 * _strlen - finds the length of a string.
 * @s: string
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}


/**
 * add_node - adds a new node at the beginning of a list_t
 *
 * @head: pointer to the first node
 * @str: string value of the new node
 *
 * Return: pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
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

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
