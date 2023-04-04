#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a node at specific index @idx.
 *
 * @head: pointer to the head node.
 * @idx: The index of the node.
 * @n: Integer
 * Return: The addresse of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	current = *head;

	/*Stop before the current node.*/
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (node);
	node->next = current->next;
	current->next = node;
	node->n = n;
	return (node);
}
