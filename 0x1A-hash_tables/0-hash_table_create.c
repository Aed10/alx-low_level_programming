#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 *
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created table,
 *	or NULL if something went wrong.
 *
 */

hash_table_t	*hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = (hash_table_t *)malloc(sizeof(hash_node_t));
	if (!new_hash_table)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = (hash_node_t **)calloc(new_hash_table->size,
			sizeof(hash_node_t *));
	for (i = 0; i < new_hash_table->size; i++)
	{
		new_hash_table->array[i] = NULL;
	}
	return (new_hash_table);
}
