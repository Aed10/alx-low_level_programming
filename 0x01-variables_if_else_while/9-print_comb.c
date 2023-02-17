#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all Digits without using printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
	putchar('\n');
	return (0);
}
