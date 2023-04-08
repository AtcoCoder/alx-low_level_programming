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
	char *value_dup;

	if ((key == NULL) || strcmp(key, "") != 0)
		return (0);
	if ((ht == NULL) || (value == NULL))
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	node = create_node(key, value_dup);
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	if (current_node == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		while (current_node != NULL)
		{
			if ((strcmp(current_node->key, key) == 0))
			{
				free(current_node->value);
				free(node);
				current_node->value = value_dup;
			}
			current_node = current_node->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
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
