#include "main.h"
/**
 * print_chessboard - Function that pints the chessboard.
 *
 * @a: Is a pointer to an array of type char.
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
