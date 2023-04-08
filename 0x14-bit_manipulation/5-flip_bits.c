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
	unsigned int count = 0, diff;

	diff = n ^ m;

	while (diff != 0)
	{
		if (diff & 1)
			count++;
		diff  >>= 1;
	}
	return (count);
}
