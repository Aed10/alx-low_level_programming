#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void	hash_table_delete(hash_table_t *ht)
{
	unsigned long int	i;

	hash_node_t *tmp, *next;

	tmp = NULL, next = NULL;
	i = 0;
	if (!ht)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
