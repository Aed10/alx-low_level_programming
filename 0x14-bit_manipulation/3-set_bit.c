#include "main.h"

/**
 * set_bit - set a bit at a given @index to 1.
 *
 * @n: Integer given.
 * @index: Index given.
 *
 * Return: 1 if it succed , or -1 if it fails.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
