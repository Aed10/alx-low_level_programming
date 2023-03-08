#include "main.h"

/**
 * factorial - function to calculate a factorial of an integer.
 *
 * @n: The integer that we need to calclulate its factorial.
 *
 * Return: a factorial of @n if @n is positive integer or -1
 * if n is negative
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));

}
