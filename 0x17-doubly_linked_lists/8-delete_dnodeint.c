#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 * if the node does not exist, do not do anything
 */
int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int	i;
	dlistint_t		*current;

	if (!head || !*head)
		return (-1);
	current = *head;
	for (i = 0; current && i < index; i++)
		current = current->next;
	if (!current)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	else
		*head = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
