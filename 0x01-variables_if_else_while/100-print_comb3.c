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
	int first_digit, second_digit, cont;

	first_digit = second_digit = cont = '0';
	while (first_digit < '9')
	{
		second_digit = cont;
		for (second_digit = cont + 1; second_digit <= '9'; second_digit++)
		{
			putchar(first_digit);
			putchar(second_digit);
			if (first_digit == '8' && second_digit == '9')
				continue;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		++first_digit;
		++cont;
	}
	putchar('\n');
	return (0);
}
