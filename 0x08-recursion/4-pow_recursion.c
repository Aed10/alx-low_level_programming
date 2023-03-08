#include "main.h"

/**
 * _pow_recursion - function to calculate a value àf @x
 * raised to the power of @y.
 *
 * @x: An integer (Base)
 * @y: An integer (The power)
 *
 * Return: a x ^ y of  if @y is positive  or -1
 * if @y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));

}
