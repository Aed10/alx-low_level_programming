#include "main.h"
#include "2-strlen.c"
/**
 * _strncat -  function to concatenate two strings.
 *
 * @dest: The first string
 * @src: The second that we need to append to first one.
 *@n: the number of bytes.
 * Return: a pointer to the string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
