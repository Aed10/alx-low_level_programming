#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a <= b)
	{
		if ((a <= c && c <= b) || c < a)
			largest = b;
		else
			largest = c;
	}
	else if (a > b)
	{
		if ((b <= c && c <= a) || c < b)
			largest = a;
		else
			largest = c;
	}
	return (largest);
}
