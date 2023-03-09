#include "main.h"
/**
 * _print_rev_recursion - reverse a sting using recursion.
 *
 * @s: The string that we need to reverse.
 *
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
