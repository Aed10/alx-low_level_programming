#include <stdlib.h>

/**
 *array_range - Function Create array of integers.
 *
 * @min: Our array start with this one .
 * @max: Our finished with this value.
 *
 * Return: Pointer to our array or NULL if it fails.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int *start;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	start = ptr; /* Record The start */
	for (i = min; i <= max; i++, ptr++)
		*ptr = i;
	return (start);

}
