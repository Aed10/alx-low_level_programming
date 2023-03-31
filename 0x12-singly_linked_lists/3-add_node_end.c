#include "lists.h"

/**
* add_node_end - Add a new node at the end of a list_t list.
*
* @head: Pointer to a pointer to the head node of the list.
* @str: The string to be added to the new node.
*
* Return: The address of the new node, or NULL if it fails.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

/* Populate the new node with data */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
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
