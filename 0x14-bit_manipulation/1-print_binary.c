#include "main.h"

/**
 * print_binary - Print the binary representation of a number.
 *
 * @n: An integer.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int i;

	/* Determine the psition of the most significant non-zero bit */
	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
			break;
	}

	/* The case all bit zero */
	if ((n >> 0) == 0)
		_putchar('0');

	for (; i >= 0; i--)
	{
		bit = ((n >> i) & 1) + '0';
		_putchar(bit);
	}
}
