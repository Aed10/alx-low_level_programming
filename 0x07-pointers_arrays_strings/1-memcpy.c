#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area
 * src to memory area dest
 *
 * @dest: Memory area where we will past data copied from @src
 * @src: Memory Area from we will copy data.
 * @n: the n first Bytes of Memory.
 *
 * Return: A pointer to the memory area @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
