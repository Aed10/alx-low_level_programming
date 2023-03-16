#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: The size of memory.
 *
 * Return: Always 0 means Success.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
