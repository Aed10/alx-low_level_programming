#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the new node
 * Return: address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add the new
 * node and return NULL
 */
dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int	i;
	dlistint_t *current, *new_node;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	for (i = 0; current && i < idx; i++)
		current = current->next;
	if (!current && i == idx)
		return (add_dnodeint_end(h, n));
	else if (current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->prev = current->prev;
		new_node->next = current;
		current->prev->next = new_node;
		current->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
