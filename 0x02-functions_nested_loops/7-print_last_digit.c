#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - print the last digit of an integer.
 * @n : represent the integer.
 * Return: The last digit and always 0 Success.
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
