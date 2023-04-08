#include "main.h"

/**
 * flip_bits - Function returns the number of bits we need to flip
 * to get from @n to @m.
 *
 * @n: Integer given.
 * @m: Integer given.
 *
 * Return: The number of bits we should flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, diff;

	diff = n ^ m;

	while (diff != 0)
	{
		/*Shift one bit a time and checking LSB */

		count += (diff & 1);
		diff  >>= 1;
	}
	return (count);
}
