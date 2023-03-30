#include "lists.h"

/**
 * add_node - Create new node.
 *
 * @head: Head node.
 * @str: The string that we will copy to the new node.
 *
 * Return: The Address of new node, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
