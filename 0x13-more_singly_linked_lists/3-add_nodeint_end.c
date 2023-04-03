#include "lists.h"

/**
* add_nodeint_end - Add a new node at the end of a list_t list.
*
* @head: Pointer to a pointer to the head node of the list.
* @n: Integer.
*
* Return: The address of the new node, or NULL if it fails.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

/* Populate the new node with data */
	new->n = n;
	new->next = NULL;

/* Special case: the list is empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

/* Find the last node in the list */
	last = *head;
	while (last->next != NULL)
		last = last->next;

/* Append the new node to the end of the list */
	last->next = new;
	return (new);
}
