#include "main.h"

/**
 * _isupper - check if a 'char' is uppercase.
 * @c:  represent a char.
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c) /*c - represent a char */
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
