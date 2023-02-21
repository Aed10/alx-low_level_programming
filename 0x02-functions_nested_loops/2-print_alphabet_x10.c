#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower_case.
 *
 * Return: 0 Success.
 *
 */
void print_alphabet_x10(void)
{
	char lower;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lower = 97; lower <= 122; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
