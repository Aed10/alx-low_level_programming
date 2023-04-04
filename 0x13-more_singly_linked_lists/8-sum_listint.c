#include "lists.h"
/**
 * sum_listint - Get the sum of all data (n) of list.
 *
 * @head: pointer to the head node.
 *
 * Return: 0 if a list empty, or the sum of all data(n).
 */

int sum_listint(listint_t *head)
{
	int sum, i = 0;

	/*Check if the list is empty.*/
	if (head == NULL)
		return (0);

	sum = 0;
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
