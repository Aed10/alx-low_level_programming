#include "variadic_functions.h"

/**
* print_strings - Function to print strings.
*
* @separator: Separator between the numbers.
* @n: Number of arguments.
*
* Return: Nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *name = va_arg(args, char *);

		if (name == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", name);
		}
		if (separator != NULL)
		{
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
