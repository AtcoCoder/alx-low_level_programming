#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash_table to be printed
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count, counter = 0;
	hash_node_t **array;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	count = count_keys(ht);

	array = ht->array;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			counter++;
			if (counter != count)
				printf(", ");
		}
	}
	printf("}\n");
}

/**
 * count_keys - count number of keys
 *
 * @ht: hash table
 *
 * Return: number of keys value pairs.
 */
unsigned long int count_keys(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *temp;

	hash_node_t **array = ht->array;

	for (i = 0; i < ht->size; i++)
	{
		temp = array[i];
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
	}
	return (count);
}
