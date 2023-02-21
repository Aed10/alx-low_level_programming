#include "main.h"

/**
 * _isalpha - check if a 'char' is letter.
 * @c:  represent a char.
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int c) /*c - represent a char */
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
