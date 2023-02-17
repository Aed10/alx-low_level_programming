#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all digits of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
