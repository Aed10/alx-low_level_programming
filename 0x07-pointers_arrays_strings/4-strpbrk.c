#include "main.h"
#include "exist.c"
#include <stddef.h>
/**
 * _strpbrk  - function that searches a string for any of a set of bytes.
 *
 * @s: string where we will search for a charachter
 * that existed in @accept.
 * @accept: The bufffer that containes the bytes
 * that we need to find in @s.
 *
 * Return: A pointer to the first occurrence of
 * the character in  @accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		if (exist(accept, *(s + j)))
		{
			return (s + j);

		}

	}
	return (NULL);
}
