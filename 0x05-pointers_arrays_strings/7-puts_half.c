#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function to print a half of a string.
 *@str: the half of a string that we need to print
 * Return: Always 0 means Success.
 */

void puts_half(char *str)
{
	int i;
	int mid = 0;

	if (_strlen(str) % 2 == 0)
	{
		mid = _strlen(str) / 2;
		for (i = mid; i < _strlen(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		mid = (_strlen(str) - 1) / 2;
		for (i = mid + 1; i < _strlen(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');


	}
}
