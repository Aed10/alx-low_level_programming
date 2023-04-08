#include "main.h"

/**
 * get_bit - Print a bit at a given @index.
 *
 * @n: Integer given.
 * @index: Index given.
 *
 * Return: The value of the bit , or -1 if it fails.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n >> index) & 1);
	return (-1);
}
