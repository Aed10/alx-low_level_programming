#include "main.h"

/**
 * _strncpy - Function to copy a string.
 *
 * @dest: The string that we need to copy to
 * @src: The string that we nedd to copy.
 * @n: The number of Bytes.
 *
 * Return: A pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
