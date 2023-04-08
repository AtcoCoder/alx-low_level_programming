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
	hash_node_t *node;
	hash_node_t *current_node;

	if (strcmp(key, "") != 0)
		return (0);
	if ((ht == NULL) || (value == NULL))
		return (0);

	node = create_node(key, value);
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	if (current_node == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if ((strcmp(current_node->key, key) == 0))
		{
			strcpy(current_node->value, value);
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
		return (1);
	}
	return (0);
}

/**
 * create_node - creates node containing a key and a value
 *
 * @key: the key, nonempty string
 * @value: the value associated with the key
 *
 * Return: pointer to the node created.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}
