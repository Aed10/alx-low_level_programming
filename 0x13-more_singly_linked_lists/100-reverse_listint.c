#include "lists.h"

/**
 * reverse_listint - Function to reverse a listint.
 *
 * @head: Head node.
 *
 * Return: Pointer to the new head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous, *next_node;

	current = *head;
	previous = NULL;
	while (current != NULL)
	{
		next_node = current->next;
		current->next = previous;
		previous = current;
		current = next_node;
	}
	*head = previous;
	return (*head);
}
