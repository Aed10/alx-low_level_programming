#include "lists.h"

/**
 * print_listint - Function to print all the elements
 * of a list_t list.
 *
 * @h: Head node.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);

}
