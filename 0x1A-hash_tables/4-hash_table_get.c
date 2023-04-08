#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: the key to be looked for
 *
 * Return: value associated with the key, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_concerned;
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	node_concerned = ht->array[index];

	while (node_concerned != NULL)
	{
		if (strcmp(node_concerned->key, key) == 0)
		{
			return (node_concerned->value);
		}
		node_concerned = node_concerned->next;
	}
	return (NULL);
}
