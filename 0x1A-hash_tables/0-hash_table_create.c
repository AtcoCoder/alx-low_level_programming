#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with size of size
 *
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(size * sizeof(hash_node_t));
	if (!(table->array))
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
