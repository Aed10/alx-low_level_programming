#include "main.h"
/**
 * print_number - print numbers using just -putchar function.
 * @n: - the integer that we need to display.
 * return: Nothing just print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n >= -9)
			_putchar(-1 * n + '0');
		else
		{
			print_number(-1 * (n / 10));
			_putchar(-1 * (n % 10) + '0');
		}
	}
	else
	{
		if (n  < 10)
			_putchar(n + '0');
		else
		{
			print_number(n / 10);
			_putchar(n % 10 + '0');
		}
	}
}
