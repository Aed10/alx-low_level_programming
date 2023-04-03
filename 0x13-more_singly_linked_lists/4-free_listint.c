#include "lists.h"
/**
 * free_listint - Function to free a linked list.
 *
 * @head: pointer to the head node.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
