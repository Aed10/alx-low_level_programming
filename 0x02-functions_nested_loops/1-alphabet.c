#include "main.h"

/**
 * print_alphabet - prints alphabets in lower_case.
 *
 * Return: 0 Success.
 *
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 97; lower <= 122; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
