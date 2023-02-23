#include "main.h"

/**
 * more_numbers - prints more numbers with 3 _putchar.
 *
 * Return: 0 Success.
 *
 */
void more_numbers(void)
{
	int number;
	int i, count;
	int second;

	for (i = 0; i < 10; i++)
	{
		number = 0;
		second = 0;

		for (count = 0; count <= 14; ++count)
		{
			_putchar(number + '0');
			if (count >= 9)
			{
				number = 1;
				if (count >= 10)
				{
					_putchar(second + '0');
					second++;
				}
				else
					continue;
			}
			else
				number++;
		}
		_putchar('\n');
	}
}
