#include "main.h"

/**
 * swap_int - function to swap two integers.
 *@a: the first integer.
 *@b: The second integer
 * Return: nothing just print.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
