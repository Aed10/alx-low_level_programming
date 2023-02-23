#include "main.h"

/**
 * print_numbers - prints numberss.
 *
 * Return: 0 Success.
 *
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
