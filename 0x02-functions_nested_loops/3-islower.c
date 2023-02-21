#include "main.h"

/**
 * _islower - check if a 'char' is lower.
 * @c:  represent a char.
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c) /*c - represent a char */
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
