#include "main.h"

/**
 * reverse_array - function to reverse an array of tintegers.
 *
 * @a: Array of integers.
 * @n: The sizze of this array.
 * Return: Always 0 means Success.
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp = 0;

	for (i = 0, j = n - 1; i <= j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

	}
}
