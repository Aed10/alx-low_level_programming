#include "hash_tables.h"

/**
 * hash_table_print - Print a given hash table.
 *
 * @ht: A given hash table.
 *
 * Return: Nothing.
 */

unsigned long int	hash_table_count(const hash_table_t *ht);
void	hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int count;
	hash_node_t *node;

	count = 0;
	if (!ht)
	{
		printf("{}\n"); /* Handle the case when the hash table is NULL*/
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			count++;
			if (count < hash_table_count(ht))
			{
				printf(", ");
					/* Add a comma and space if there are more key-value pairs */
			}
			node = node->next;
		}
	}
	printf("}\n");
}

/**
 * hash_table_count - Count the number of key-value pairs in a hash table.
 *
 * @ht: A given hash table.
 *
 * Return: The number of key-value pairs in the hash table.
 */

unsigned long int hash_table_count(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned long int count;

	count = 0;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			count++;
			node = node->next;
		}
	}
	return (count);
}
