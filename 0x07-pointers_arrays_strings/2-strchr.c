#include "main.h"
#include <stddef.h>
/**
 * _strchr  -  function to search for a specific char @c
 *
 * @s: string where we will search for a charachter @c.
 * @c: The character that we will search for.
 *
 * Return: A pointer to the first occurrence of the character @c.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return ((s + i));
	}
	if (c == '\0')
		return ((s + i));
	else
		return (NULL);
}
