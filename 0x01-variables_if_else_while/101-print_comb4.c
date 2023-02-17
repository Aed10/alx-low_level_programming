#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all combinaison of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_digit, second_digit, third_digit;

	first_digit = '0';
	while (first_digit < '8')
	{
		second_digit = first_digit + 1;
		while (second_digit < '9')
		{
			for (third_digit = second_digit + 1; third_digit <= '9'; third_digit++)
			{
				putchar(first_digit);
				putchar(second_digit);
				putchar(third_digit);
				if (first_digit == '7' && second_digit == '8' && third_digit == '9')
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			++second_digit;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
