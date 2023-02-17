#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in loercase and
 * then in uppercase.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /*Print lower case*/
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter); /*Print Upper case*/
	}
	putchar('\n');
	return (0);

}
