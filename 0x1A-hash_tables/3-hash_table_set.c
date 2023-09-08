#include "hash_tables.h"

/**
 * hash_table_set - Adds elements to the hash table.
 *
 * @ht: A given hash table.
 * @key: A given string.
 * @value: A value associated with the @key.
 *
 * Return: 1 if it succeeds, 0 otherwise.
 */

int	hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int	index;
	hash_node_t			*new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!ht || !key || !new_node)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	/* Allocate memory for key and value and copy them */
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	/* Handle collisions by linking new_node to existing */
	/* nodes at the same index */
	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;
	return (1);
}
