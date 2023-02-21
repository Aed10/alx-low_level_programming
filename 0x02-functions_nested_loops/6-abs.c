#include "main.h"

/**
 * _abs - The absolute value of the integer n.
 * @n:  represent an integer.
 * Return: n if n is positive, -n if n is negative,
 * 0 if n is zero.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return ((-1) * n);
	}
	else
	{
		return (0);
	}
}
