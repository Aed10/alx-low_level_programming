#include<stdio.h>
/**
 * print_array - print_array function.
 * @a: an array of integers.
 * @n: the size of @a array.
 * Return: Always 0 means Success.
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[n - 1]);
		}
	}
}
