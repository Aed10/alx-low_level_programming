#include<stdarg.h>

/**
 * sum_them_all - function  that returns the sum of all its parameters.
 *
 * @n: Count the number of its arguments.
 *
 * Return: Sum of its parametres.
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);

}
