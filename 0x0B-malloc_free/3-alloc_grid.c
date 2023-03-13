#include "main.h"
/**
 * alloc_grid - A function that returns a pointer a 2 Dim array of integers.
 *
 * @width: number of colons of the array.
 * @height: number of lines of the array.
 *
 * Return: Pointers to the the array,
 * or NUll if it failed.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **t;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = malloc(height * sizeof(int *));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(t[j]);
			free(t);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0 ; j < width; j++)
			t[i][j] = 0;

	return (t);
}
