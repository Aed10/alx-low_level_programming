#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t	print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	i = 0;
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}