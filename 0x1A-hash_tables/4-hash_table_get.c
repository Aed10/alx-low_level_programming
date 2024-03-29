#include "hash_tables.h"

/**
 * hash_table_get - A function to retrieve a value associated with a key.
 *
 * @ht: A given hash table.
 * @key: A given key.
 *
 * Return: The value associated with the given @key
 * or NULL if @key couldn'tbe found.
 */

char	*hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (!node)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
