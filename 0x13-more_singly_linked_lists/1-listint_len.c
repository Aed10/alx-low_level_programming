#include "lists.h"

/**
 * listint_len - Function returns the number of elements in a linked list.
 * of a list_t list.
 *
 * @h: Head node.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
