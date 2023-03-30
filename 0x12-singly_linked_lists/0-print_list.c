#include "lists.h"

/**
 * print_list - Function to print all the elements
 * of a list_t list.
 *
 * @h: Head node.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");

		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);

}
