#include "variadic_functions.h"

/**
* print_numbers - Function to print numbers.
*
* @separator: Separator between the numbers.
* @n: Number of arguments.
*
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);
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
