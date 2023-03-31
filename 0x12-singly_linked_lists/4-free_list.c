#include "lists.h"
/**
 * free_list - Function to free a linked list.
 *
 * @head: pointer to the head node.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
