#include "main.h"

/**
 * print_most_numbers - prints numbers.
 *
 * Return: 0 Success.
 *
 */
void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == '2' || digit == '4')
			continue;
		else
			_putchar(digit);
	}
	_putchar('\n');
}
