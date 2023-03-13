#include "main.h"
/**
 * create_array - function to create an array dynamically.
 *
 * @size: The size of array.
 * @c: Char.
 *
 * Return: Pointers to the array, or NULL IF IT FAILS or @size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *t = malloc(size * sizeof(char));
	unsigned int i;

	if (t == NULL || size == 0)
		return (NULL);
	for (i = 0; i <= size; i++)
		t[i] = c;
	return (t);
}
