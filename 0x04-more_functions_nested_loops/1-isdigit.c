#include "main.h"

/**
 * _isdigit - check if a 'char' is digit.
 * @c:  represent a char.
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c) /*c - represent a char */
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
