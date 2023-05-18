#include "lists.h"

/**
 * sum_dlistint - returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a dlistint_t linked list,
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
