#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
shash_table_t	*shash_table_create(unsigned long int size)
{
	shash_table_t	*ht;

	ht = NULL;
	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add or update
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int	shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int	index;
	shash_node_t *new_node, *tmp;

	new_node = NULL, tmp = NULL;
	index = 0;
	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
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
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	insert_node(ht, new_node);
	return (1);
}

/**
 * insert_node - inserts a node into a sorted hash table
 * @ht: hash table to insert the node into
 * @node: node to insert
 * Return: void
 */
void	insert_node(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t	*tmp;

	tmp = ht->shead;
	if (!tmp)
	{
		ht->shead = node;
		ht->stail = node;
		node->sprev = NULL;
		node->snext = NULL;
		return;
	}
	while (tmp)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->sprev = tmp->sprev;
			node->snext = tmp;
			if (tmp->sprev)
				tmp->sprev->snext = node;
			else
				ht->shead = node;
			tmp->sprev = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = ht->stail;
	node->snext = NULL;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char	*shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t		*tmp;
	unsigned long int	index;

	tmp = NULL;
	index = 0;
	if (!ht || !key || !strcmp(key, ""))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table to print
 * Return: void
 */
void	shash_table_print(const shash_table_t *ht)
{
	shash_node_t	*tmp;
	char			*sep;

	tmp = NULL;
	sep = "";
	if (!ht)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 * Return: void
 */
void	shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t	*tmp;
	char			*sep;

	tmp = NULL;
	sep = "";
	if (!ht)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 * Return: void
 */
void	shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *tmp2;

	tmp = NULL, tmp2 = NULL;
	if (!ht)
		return;
	tmp = ht->shead;
	while (tmp)
	{
		tmp2 = tmp->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = tmp2;
	}
	free(ht->array);
	free(ht);
}
