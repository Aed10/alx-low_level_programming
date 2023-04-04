#include "lists.h"
/**
 * delete_nodeint_at_index - Delete node at specific index @idx.
 *
 * @head: pointer to the head node.
 * @index: The index of the node.
 *
 * Return: 1 Success, (-1) Failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	previous = *head;
	current = previous->next;
	for (i = 1; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}
	if (i != index || current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);
	return (1);
}
