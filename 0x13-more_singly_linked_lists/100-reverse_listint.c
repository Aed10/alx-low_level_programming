#include "lists.h"

/**
 * reverse_listint - Function to reverse a listint.
 *
 * @head: Head node.
 *
 * Return: Pointer to the new head.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

    if (head == NULL) {
        printf("Error: head is NULL\n");
        exit (98);
    }

    const listint_t *slow = head;
    const listint_t *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next; // move slow pointer by 1 step
        fast = fast->next->next; // move fast pointer by 2 steps

        // If fast and slow pointers meet, it indicates a cycle
        if (slow == fast) {
            printf("Error: Linked list contains a cycle\n");
            exit (98); // or return an appropriate error code
        }

        // Print current node's address and value
        printf("[%p] %d\n", (void*)slow, slow->n);
	count ++;
    }

    return (count); // or return the appropriate count if needed
}

