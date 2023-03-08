#include "main.h"
/**
 * _puts_recursion - like puts function but using recursion.
 *
 * @s: The string that we need to print.
 *
 * Return: To stop printing when it reachs the end of the sting @s.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
