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
	listint_t *previous, *next_node;

	previous = NULL;
	while ((*head) != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_node;
	}
	*head = previous;
	return (*head);
}
