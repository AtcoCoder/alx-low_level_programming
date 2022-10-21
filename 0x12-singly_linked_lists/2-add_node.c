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
list_t *add_node(const list_t **head, const char *str)
{
	list_t *ptr;
	char *s;
	
	int len = _strlen(str);

	ptr = malloc(sizeof(list_t));
	s = malloc(sizeof(char) * len + 1);

	ptr = (list_t *)head;

	ptr->s = str;
	ptr = ptr->new;

	return (ptr);
}
