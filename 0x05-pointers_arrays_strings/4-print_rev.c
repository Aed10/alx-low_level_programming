#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - function to print a string in reverse.
 *@s: a string to reverse.
 * Return: Always 0 means Success.
 */

void print_rev(char *s)
{

	if (_strlen(s) == 1)
		_putchar('\n');
	else
	{
		int i;

		for (i =  _strlen(s) - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}

}
