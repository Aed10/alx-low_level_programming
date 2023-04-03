#include "lists.h"
#include "1-listint_len.c"
/**
 * get_nodeint_at_index - Get the index of node.
 *
 * @head: pointer to the head node.
 * @index: The index of the node.
 *
 * Return: NULL if the Node not found, or the @index node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;
	unsigned int len = listint_len(head);

	for (n = 0; n < index; n++)
	{
		head = head->next;
	}
	if (head == NULL || index > len)
		return (NULL);
	node = head;
	return (node);
}
