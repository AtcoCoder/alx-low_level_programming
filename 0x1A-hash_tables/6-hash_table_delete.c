#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_bucket(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_bucket - all the buckets of hash table
 * @head: pointer to the head of the bucket
 * Return: Nothing.
 */
void free_bucket(hash_node_t *head)
{
	hash_node_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->key);
		free(curr->value);
		free(curr);
	}
}
