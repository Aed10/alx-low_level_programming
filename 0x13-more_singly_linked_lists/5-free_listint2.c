#include "lists.h"
/**
 * free_listint2 - Function to free a linked list.
 *
 * @head: pointer to the head node.
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}
