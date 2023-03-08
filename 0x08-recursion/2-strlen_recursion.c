#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string.
 *
 * @s: The string that we need to give its length
 *
 * Return: Length of a string @s.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
