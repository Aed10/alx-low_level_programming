#include "main.h"

/**
 * print_sign - check if a number is positive or negative.
 * @n:  represent an integer.
 * Return: 1 if n is positive, -1 if n is negative,
 * 0 if n is zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
