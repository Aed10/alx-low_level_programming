#include "function_pointers.h"
/**
 * print_name - function to print a name.
 *
 * @name: name to print
 * @f: A pointer to a function.
 *
 * Return: Always 0 means Success.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
