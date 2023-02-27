#include "main.h"

/**
 * puts2 - function to print a string.
 *@str: the string that we need to print
 * Return: Always 0 means Success.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
