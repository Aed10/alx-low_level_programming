#include "main.h"
/**
 * free_grid - A function to free an array of 2D.
 *
 * @grid: Array of pointers (Raws).
 * @height: Pointers of integers (Colons).
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
