#include "lists.h"
/**
 * pop_listint - Function to delete the head node.
 *
 * @head: pointer to the head node.
 *
 * Return: 0 if the linked list in empty , or the value of the head node.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);
	current = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(current);
	return (n);
}
