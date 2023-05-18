#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: data to insert in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*tmp;
	dlistint_t	*end_node;

	end_node = malloc(sizeof(dlistint_t));
	if (!end_node)
		return (NULL);
	end_node->next = NULL;
	end_node->n = n;

	if (!*head) /* if the list is empty */
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = end_node;
	end_node->prev = tmp;
	return (end_node);
}
