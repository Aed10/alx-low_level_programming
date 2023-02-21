#include "main.h"
/**
 * jack_bauer - function prints every minute of the day of Jack
 * _Bauer, starting from 00:00 to 23:59
 * Return: 0 Success.
 */

void jack_bauer(void)
{
	int h_1, h_2, min_1, min_2;

	for (h_1 = 0; h_1 <= 2; h_1++)
	{
		for (h_2 = 0; h_2 <= 9; h_2++)
		{
			for (min_1 = 0; min_1 <= 5; min_1++)
			{
				for (min_2 = 0; min_2 <= 9; min_2++)
				{
					_putchar(h_1 + '0');
					_putchar(h_2 + '0');
					_putchar(':');
					_putchar(min_1 + '0');
					_putchar(min_2 + '0');
					_putchar('\n');
					if (h_1 == 2 && h_2 == 3 && min_1 == 5 && min_2 == 9)
						break;
				}
				if (h_1 == 2 && h_2 == 3 && min_1 == 5 && min_2 == 9)
					break;
			}
			if (h_1 == 2 && h_2 == 3 && min_1 == 5 && min_2 == 9)
				break;
		}
		if (h_1 == 2 && h_2 == 3 && min_1 == 5 && min_2 == 9)
			break;
	}
}
