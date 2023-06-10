#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add to the hash table
 * @value: value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int
hash_table_set (hash_table_t *ht, const char *key, const char *value)
{
  hash_table_t *table;
  unsigned long int index;

  if (!ht || !key || strlen (key) == 0)
    return (0);

  index = key_index ((unsigned char *)key, ht->size);
  table = ht;

  if (table->array[index])
    {
      if (strcmp (table->array[index]->key, key) == 0)
	{
	  if (add_node (&(table->array[index]), value, key) == 0)
	    return (0);
	  return (1);
	}
      return (0);
    }

  table->array[index] = malloc (sizeof (hash_node_t));
  if (!table->array[index])
    return (0);

  table->array[index]->key = strdup (key);
  table->array[index]->value = strdup (value);
  table->array[index]->next = NULL;

  return (1);
}
/**
 * add_node - adds a node to the beginning of a linked list
 * @header: pointer to the header node of the linked list
 * @value: value to add to the new node
 * Return: 1 if successful, 0 otherwise
 * Note: This function is not part of the task, but is used by hash_table_set
 */
int
add_node (hash_node_t **header, const char *value, const char *key)
{
  hash_node_t *new_node;

  if (!header)
    return (0);

  new_node = malloc (sizeof (hash_node_t));
  if (!new_node)
    return (0);

  new_node->key = strdup (key);
  new_node->value = strdup (value);
  return (1);
}