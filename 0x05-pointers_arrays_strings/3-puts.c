#include "main.h"

/**
 * _puts - function to print a string.
 *@str: the string that we need to print
 * Return: Always 0 means Success.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
