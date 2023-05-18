#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t	dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t	len;

	len = 0;
	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
