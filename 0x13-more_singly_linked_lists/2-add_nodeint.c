#include "lists.h"

/**
 * add_nodeint - Create new node.
 *
 * @head: Head node.
 * @n: Integer.
 *
 * Return: The Address of new node, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
