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
	hash_table_t		*new_table;
	unsigned long int	i;

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = (hash_node_t **)calloc(new_table->size,
			sizeof(hash_node_t *));
	if (!new_table->array)
	{
		free(new_table); /* Free the table if array allocation fails */
		return (NULL);
	}
	for (i = 0; i < new_table->size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
