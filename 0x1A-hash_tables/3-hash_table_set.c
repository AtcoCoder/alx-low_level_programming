#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table
 * @key: the key, which must not be an empty string
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node;

	if ((key == NULL) || *key == '\0')
		return (0);
	if ((ht == NULL) || (value == NULL))
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current_node = add_node(&(ht->array[index]), key, value);
	if (current_node == NULL)
		return (0);
	return (1);
}

/**
 * add_node - add node containing a key and a value
 *
 * @head: pointer to the pointer to node in the array
 * @key: the key, nonempty string
 * @value: the value associated with the key
 *
 * Return: pointer to the node created.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node;

	node = *head;

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (*head);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *head;
	*head = node;

	return (*head);
}
