#include"main.h"

/**
 * times_table - prints the 9 times table.
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int first, second;
			int m = a * b;

			first = m / 10;
			second = m % 10;
			if (b == 0)
				_putchar('0');
			else if (a * b >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(first + '0');
				_putchar(second + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
